#include <iostream>
#include <fstream>
#include <complex>
#include <cmath>

// Image resolution
const int WIDTH = 7000;   // 4K resolution width
const int HEIGHT = 3000;  // 4K resolution height
const int MAX_ITER = 1000;

// Map pixel coordinate to complex plane
std::complex<double> pixelToComplex(int x, int y) {
    double re = (x - WIDTH / 2.0) * 3.5 / WIDTH - 0.5;
    double im = (y - HEIGHT / 2.0) * 2.0 / HEIGHT;
    return std::complex<double>(re, im);
}

// Smooth coloring algorithm
double getSmoothIter(std::complex<double> c) {
    std::complex<double> z = 0;
    int iter = 0;
    while (std::abs(z) <= 2.0 && iter < MAX_ITER) {
        z = z * z + c;
        iter++;
    }

    if (iter == MAX_ITER) return iter;
    double log_zn = std::log(z.real()*z.real() + z.imag()*z.imag()) / 2;
    double nu = std::log(log_zn / std::log(2)) / std::log(2);
    return iter + 1 - nu;
}

// Convert HSV to RGB
void hsvToRgb(double h, double s, double v, int& r, int& g, int& b) {
    int i = int(h * 6);
    double f = h * 6 - i;
    double p = v * (1 - s);
    double q = v * (1 - f * s);
    double t = v * (1 - (1 - f) * s);
    switch (i % 6) {
        case 0: r = v * 255; g = t * 255; b = p * 255; break;
        case 1: r = q * 255; g = v * 255; b = p * 255; break;
        case 2: r = p * 255; g = v * 255; b = t * 255; break;
        case 3: r = p * 255; g = q * 255; b = v * 255; break;
        case 4: r = t * 255; g = p * 255; b = v * 255; break;
        case 5: r = v * 255; g = p * 255; b = q * 255; break;
    }
}

int main() {
    std::ofstream image("mandelbrot_highres.ppm");
    image << "P3\n" << WIDTH << " " << HEIGHT << "\n255\n";

    for (int y = 0; y < HEIGHT; ++y) {
        for (int x = 0; x < WIDTH; ++x) {
            std::complex<double> c = pixelToComplex(x, y);
            double iter = getSmoothIter(c);

            double t = iter / MAX_ITER;
            int r, g, b;
            hsvToRgb(0.95 + 10 * t, 0.6, t < 1.0 ? 1.0 : 0, r, g, b);

            image << r << " " << g << " " << b << "\n";
        }
    }

    image.close();
    std::cout << "Image written to mandelbrot_highres.ppm\n";
    return 0;
}