[EntityEditorProps(category: "GameScripted/ArmaLifeGameMode", description: "ArmaLife game mode script.", color: "0 0 255 255")]
class ARL_ArmaLifeGameModeClass: SCR_BaseGameModeClass 
{
};

class ARL_ArmaLifeGameMode : SCR_BaseGameMode
{
	override void EOnInit(IEntity owner) {
		super.EOnInit(owner);
		
		//Override the respawn handler
		this.m_pRespawnHandlerComponent = SCR_RespawnHandlerComponent.Cast(owner.FindComponent(ARL_RespawnHandlerComponent));
	}
}