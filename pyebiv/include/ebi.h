#ifndef _EBI_EVENTS_H__INCLUDED_
#define _EBI_EVENTS_H__INCLUDED_

#include <cstdint>
#include <vector>
#include <string>

#include "ebi_structs.h"
#include "ebi_data.h"

namespace EBI {

	// utilities
	EBI::FileFormat GetFileType(const std::string& fnIN);
	bool CheckDirectoryExistence(const std::string& dirIN);
	std::string FileBaseName(const std::string& sIN);
	std::string FileReplaceExtension(const std::string& sIN, const std::string& newExt);
	int32_t DetermineOffsetTime(
		EBI::EventData& evData, //!< input data
		const double freq,	//!< sampling frequency = light pulsing frequency
		const int32_t nBinWidth = 5,	//!< in [usec]
		const int32_t nPeriods = 20,	//!< number of periods to sample
		const int32_t nStartPeriod = 2,	//!< at which period to begin sampling
		const int32_t nDebug = 0		//!< enables debugging output
	);
} // namespace EBI


#endif
