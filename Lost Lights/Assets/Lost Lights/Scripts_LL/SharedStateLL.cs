using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using SimpleJSON;
using System;

namespace InsertStudioLostLights
{
	public static class SharedStateLL
	{

		private static JSONNode startGameData_LL;
		private static JSONNode languageDefs_LL;

		public static JSONNode StartGameData_LL
		{
			get
			{
				return startGameData_LL;
			}
			set
			{
				startGameData_LL = value;
			}
		}

		public static JSONNode LanguageDefs_LL
		{
			get
			{
				return languageDefs_LL;
			}
			set
			{
				languageDefs_LL = value;
			}
		}

	}

}