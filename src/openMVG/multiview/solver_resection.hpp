// This file is part of OpenMVG, an Open Multiple View Geometry C++ library.

// Copyright (c) 2017 Pierre MOULON.

// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#ifndef OPENMVG_MULTIVIEW_RESECTION_HPP
#define OPENMVG_MULTIVIEW_RESECTION_HPP

namespace openMVG {
namespace resection {

enum class SolverType
{
  DLT_6POINTS = 0,
  P3P_KE_CVPR17 = 1,
  P3P_KNEIP_CVPR11 = 2,
  P3P_NORDBERG_ECCV18 = 3,
  UP2P_KUKELOVA_ACCV10 = 4,
  P2Pt_FABBRI_ECCV12 = 5,
  DEFAULT = P3P_NORDBERG_ECCV18
};

}  // namespace resection
}  // namespace openMVG

#endif  // OPENMVG_MULTIVIEW_RESECTION_HPP
