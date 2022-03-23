// (C) 2016 Tino Reichardt

#include "StdAfx.h"

#include "../../../Common/RegisterCodec.h"

#include "ZstdDecoder.h"

#ifndef EXTRACT_ONLY
#include "ZstdEncoder.h"
#endif

REGISTER_CODEC_E(
  ZSTDZIP,
  NCompress::NZSTD::CDecoder(),
  NCompress::NZSTD::CEncoder(),
  0x40100+93, "ZSTDZIP")

