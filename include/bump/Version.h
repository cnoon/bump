//
//  Version.h
//  Bump
//
//  Created by Christian Noon on 11/7/11.
//  Copyright (c) 2012 Christian Noon. All rights reserved.
//

#ifndef BUMP_VERSION_H
#define BUMP_VERSION_H

#include <bump/Export.h>
#include <bump/String.h>

#define BUMP_MAJOR_VERSION    0
#define BUMP_MINOR_VERSION    0
#define BUMP_PATCH_VERSION    0
#define BUMP_SOVERSION        0

namespace bump {

/**
 * Returns the library version number.
 * Numbering convention: Bump-1.0.2 will return 1.0.2 from bumpGetVersion.
 */
extern BUMP_EXPORT String bumpGetVersion();

/** Returns the bump shared object version number. */
extern BUMP_EXPORT String bumpGetSOVersion();

/** Returns the library name in human-friendly form. */
extern BUMP_EXPORT String bumpGetLibraryName();

}	// End of bump namespace

#endif  // End of BUMP_VERSION_H
