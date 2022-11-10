UStrideNetSocialSubsystem::UStrideNetSocialSubsystem()
{
	if(!HasAnyFlags(RF_ClassDefaultObject))
	{
		WorkerClass = ConstructorHelpers::FClassFinder<UStrideNetSocialWorker>(
			TEXT("/Game/StrideNet/Blueprints/Social/SocialWorker")).Class;
	}
}