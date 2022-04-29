public class ShieldPowerUpBehavior : PowerUpBehavior
{
    public int modifier = 1;
    public override void Activate()
    {
        Player.GetInstance().StateMachine.Shield += modifier;
        Player.Log("+" + modifier + " SHIELD");
    }
}
