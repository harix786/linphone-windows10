#include "ApiLock.h"
#include "PayloadType.h"
#include "Server.h"

Platform::String^ Linphone::Core::PayloadType::GetMimeType()
{
	API_LOCK;
	return Utils::cctops(this->payload->mime_type);
}

int Linphone::Core::PayloadType::GetClockRate()
{
	API_LOCK;
	return this->payload->clock_rate;
}

Linphone::Core::PayloadType::PayloadType(::PayloadType *payload) :
	payload(payload)
{
}

Linphone::Core::PayloadType::~PayloadType()
{
}