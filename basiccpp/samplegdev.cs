using UnityEngine;
using UnityEngine.SceneManagement; // Required for scene management 

public class Bird : MonoBehaviour
{
    public float jumpForce = 5f; // Force applied when the bird jumps
    private Rigidbody2D rb;      // Reference to the Rigidbody2D component 

    [cite_start]// Awake is called when the script instance is being loaded 
    void Awake()
    {
        rb = GetComponent<Rigidbody2D>(); // Get the Rigidbody2D component attached to this GameObject 
        if (rb == null)
        {
            [cite_start]Debug.LogError("Rigidbody2D not found on Bird GameObject. Please add one.", this); [cite: 380]
        }
    }

    [cite_start]// Update is called once per frame 
    void Update()
    {
        [cite_start]// Check for mouse click or spacebar press to jump 
        if (Input.GetMouseButtonDown(0) || Input.GetKeyDown(KeyCode.Space))
        {
            Jump();
        }
    }

    void Jump()
    {
        // Reset vertical velocity to ensure consistent jump height
        rb.velocity = new Vector2(rb.velocity.x, 0); 
        [cite_start]// Apply an upward force for the jump 
        rb.AddForce(Vector2.up * jumpForce, ForceMode2D.Impulse);
    }

    [cite_start]// Called when this collider (2D) has begun touching another rigidbody 2D or collider 2D 
    private void OnCollisionEnter2D(Collision2D collision)
    {
        // If the bird hits anything (ground or pipes), end the game
        [cite_start]Debug.Log("Bird hit a collider! Game Over."); [cite: 380]
        GameManager.Instance.GameOver(); // Call GameOver method on the GameManager singleton
    }

    [cite_start]// Called when another collider enters a trigger collider attached to this object 
    private void OnTriggerEnter2D(Collider2D other)
    {
        // If the bird passes through the score trigger (the gap in pipes)
        if (other.CompareTag("ScoreTrigger"))
        {
            GameManager.Instance.AddScore(1); // Add score through the GameManager
            other.gameObject.SetActive(false); // Deactivate the trigger to prevent multiple scores
        }
    }
}