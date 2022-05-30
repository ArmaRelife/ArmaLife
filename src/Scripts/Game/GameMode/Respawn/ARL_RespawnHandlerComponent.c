//------------------------------------------------------------------------------------------------
class ARL_RespawnHandlerComponentClass: SCR_RespawnHandlerComponentClass
{
};

//------------------------------------------------------------------------------------------------
/*
	The RespawnHandlerComponent adds the spawn menu for Arma Life to the game. This includes the
	selection of the role for the user (Faction), as well as the spawn location.
*/
class ARL_RespawnHandlerComponent: SCR_RespawnHandlerComponent {
	static bool m_bMenuOpened = false;
	
	protected override void EOnFrame(IEntity owner, float timeSlice) {
		if(!m_bMenuOpened) {
			m_bMenuOpened = true;
			GetGame().GetMenuManager().OpenMenu(ChimeraMenuPreset.ARL_FactionSelectionMenu);
		}
	}
};