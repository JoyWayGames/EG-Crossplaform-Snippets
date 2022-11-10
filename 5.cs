if (Target.Platform == UnrealTargetPlatform.Android)
{
	ConfigHierarchy Ini = ConfigCache.ReadHierarchy(ConfigHierarchyType.Engine, DirectoryReference.FromFile(Target.ProjectFile), Target.Platform);
	if (Ini != null)
	{
		string CustomAndroidPlatform;
		Ini.GetString("PassthroughSection", "PassthroughKey", out CustomAndroidPlatform);
		if (CustomAndroidPlatform.Length > 0)
		{
			bool IsPicoBuild = CustomAndroidPlatform.Equals("pico");
			PublicDefinitions.Add( IsPicoBuild ? "PLATFORM_PICO=1" : "PLATFORM_PICO=0");
			PublicDefinitions.Add( IsPicoBuild ? "PLATFORM_QUEST=0" : "PLATFORM_QUEST=1");
		}
	}
}