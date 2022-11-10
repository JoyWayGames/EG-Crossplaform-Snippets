UWorld* UStrideNetSocialWorker::GetWorld() const
{
	if (HasAnyFlags(RF_ClassDefaultObject))
		return nullptr;
	
	if (GIsEditor && !GIsPlayInEditorWorld)
		return nullptr;

	if (GetOuter())
		return GetOuter()->GetWorld();

	return nullptr;
}