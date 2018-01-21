/* This is the source code of brain.so library. The most important library!
* It comes with ABSOLUTELY NO WARRANTY.
* You may become dumber by using this program.
* So, it's discretely advised that you educate yourself before using it.
*/

#include <system/logic.h>
#include <system/rationality.h>

// This is needed for common sense
#if defined(HAS_COMMON_SENSE)
#include <human/heart.h>
#include <human/personality.h>
#endif

// Include the main brain.h file 
#include brain.h

#define BRAIN_DRV_NAME		"brain"
#define BRAIN_MANUFAC_ID	69

#define VENDOR_NAME				"stupidy"
#define BRAIN_SENSOR_NAME		"brain69"
#define DRIVER_VERSION		"∞"

struct brain_data {

	struct brain_components *components;
	struct input_eyes *input_parts_eyes;
	struct input_noze *input_parts_noze;
	struct input_ears *input_parts_ears;
	struct input_body *input_parts_body;
	struct input_mouth *input_parts_mouth;
}

struct brain_structure {
	#if defined(HAS_COMMON_SENSE)
	unsigned int clever
	unsigned int logik
	#else
	int stupidy
	int dumb
	int dumber
	int dumbest
	#endif
	
extern "C" {
	void SORRY_MAN_YOU_ARE_JUST_DUMB (void);
}
