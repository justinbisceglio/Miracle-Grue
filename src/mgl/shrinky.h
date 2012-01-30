/**
   MiracleGrue - Model Generator for toolpathing. <http://www.grue.makerbot.com>
   Copyright (C) 2011 Far McKon <Far@makerbot.com>, Hugo Boyer (hugo@makerbot.com)

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU Affero General Public License as
   published by the Free Software Foundation, either version 3 of the
   License, or (at your option) any later version.

*/


#ifndef SHRINKY_H_
#define SHRINKY_H_



#include "core.h"
#include "scadtubefile.h"

namespace mgl // Miracle-Grue's geometry library
{

typedef std::vector< std::vector<LineSegment2 > > InsetTable;

class Shrinky
{
	// std::vector< std::vector<LineSegment2 > > insetTable;
	ScadTubeFile fscad;
	const char *scadFileName;

	Scalar layerH;
	int color;
	unsigned int counter;

public:
	Shrinky( const char *scadFileName=NULL, Scalar layerH=0.5);

	void inset(const std::vector<LineSegment2> & segments,
							Scalar insetDist,
									std::vector<LineSegment2> & finalInsets);
	~Shrinky();
};

}

#endif
