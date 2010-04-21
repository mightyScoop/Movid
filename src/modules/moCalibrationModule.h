/***********************************************************************
 ** Copyright (C) 2010 Movid Authors.  All rights reserved.
 **
 ** This file is part of the Movid Software.
 **
 ** This file may be distributed under the terms of the Q Public License
 ** as defined by Trolltech AS of Norway and appearing in the file
 ** LICENSE included in the packaging of this file.
 **
 ** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 ** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 **
 ** Contact info@movid.org if any conditions of this licensing are
 ** not clear to you.
 **
 **********************************************************************/


#ifndef MO_Calibration_MODULE_H
#define MO_Calibration_MODULE_H

#include <vector>
#include "../moDataGenericContainer.h"
#include "moImageFilterModule.h"

class moCalibrationModule : public moImageFilterModule{
public:
	moCalibrationModule();
	virtual ~moCalibrationModule();
	
protected:
	void applyFilter();
	void triangulate();
	int active_point;
	std::vector<moPoint> screenPoints;
	std::vector<moPoint> surfacePoints;
	CvRect rect;
	CvMemStorage* storage;
	CvSubdiv2D* subdiv;

	MODULE_INTERNALS();
};

#endif

