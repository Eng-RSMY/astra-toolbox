/*
-----------------------------------------------------------------------
Copyright 2012 iMinds-Vision Lab, University of Antwerp

Contact: astra@ua.ac.be
Website: http://astra.ua.ac.be


This file is part of the
All Scale Tomographic Reconstruction Antwerp Toolbox ("ASTRA Toolbox").

The ASTRA Toolbox is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

The ASTRA Toolbox is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with the ASTRA Toolbox. If not, see <http://www.gnu.org/licenses/>.

-----------------------------------------------------------------------
$Id$
*/

#include "astra/AstraObjectManager.h"


namespace astra {

int CAstraIndexManager::m_iPreviousIndex = 0;

DEFINE_SINGLETON(CAstraObjectManager<CProjector2D>);
DEFINE_SINGLETON(CAstraObjectManager<CProjector3D>);
DEFINE_SINGLETON(CAstraObjectManager<CFloat32Data2D>);
DEFINE_SINGLETON(CAstraObjectManager<CFloat32Data3D>);
DEFINE_SINGLETON(CAstraObjectManager<CAlgorithm>);
DEFINE_SINGLETON(CAstraObjectManager<CSparseMatrix>);

} // end namespace