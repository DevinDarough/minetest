#include "materials.h"
#include "mapnode.h"

// NOTE: DEPRECATED

DiggingPropertiesList * getDiggingPropertiesList(u16 content)
{
	return &content_features(content).digging_properties;
}

DiggingProperties getDiggingProperties(u16 content, const std::string &tool)
{
	DiggingPropertiesList *mprop = getDiggingPropertiesList(content);
	if(mprop == NULL)
		// Not diggable
		return DiggingProperties();
	
	return mprop->get(tool);
}

