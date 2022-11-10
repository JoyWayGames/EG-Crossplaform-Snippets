#if PLATFORM_ANDROID
	if (IsLocalPlayerController())
	{
		GEngine->Exec(GetWorld(), TEXT("vr.PixelDensity 0.8"));
	}	
#endif