public interface PlayerState
{
    //States
    void OnEnter();
    void OnExit();
    void ReturnMenu();
    void LoadLevel(string id);
    void TakeDamage();
    void RecievePowerUp(int id);
    void LevelComplete();
    void PauseGame();
    void CheckTime();
}