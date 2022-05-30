//------------------------------------------------------------------------------------------------
[ComponentEditorProps(category: "GameScripted/DataApi", description: "ArmaLife Data API.", color: "0 145 054 255")]
class ARL_DataApiClass : ScriptComponentClass
{};
//------------------------------------------------------------------------------------------------
/*
	The Data API is an interface to provide functions to Arma Life that retrieve various user data
	from any preferred data source.
*/
class ARL_DataApi : ScriptComponent
{
	ARL_PlayerData GetPlayerData(int playerId);
};