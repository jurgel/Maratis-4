## Find source and headers
FILE(GLOB HEADERS
  Source/*.h
  Source/FreeImage/*.h
  Source/FreeImageToolkit/*.h
  Source/Metadata/*.h
)
FILE(GLOB SOURCES
  Source/*.c*
  Source/FreeImage/*.c*
  Source/FreeImageToolkit/*.c*
  Source/Metadata/*.c*
)

FILE(GLOB JPEG_HEADERS
  Source/LibJPEG/jpeglib.h
  Source/LibJPEG/jconfig.h
  Source/LibJPEG/jmorecfg.h
  Source/LibJPEG/jerror.h
  Source/LibJPEG/jinclude.h
  Source/LibJPEG/jpegint.h
  Source/LibJPEG/jdct.h
  Source/LibJPEG/jmemsys.h
  Source/LibJPEG/jversion.h
)
FILE(GLOB JPEG_SOURCES
  Source/LibJPEG/jcapimin.c
  Source/LibJPEG/jcapistd.c
  Source/LibJPEG/jdapimin.c
  Source/LibJPEG/jdapistd.c
  Source/LibJPEG/jcomapi.c
  Source/LibJPEG/jcparam.c
  Source/LibJPEG/jctrans.c
  Source/LibJPEG/jdtrans.c
  Source/LibJPEG/jcinit.c
  Source/LibJPEG/jcmaster.c
  Source/LibJPEG/jcmainct.c
  Source/LibJPEG/jcprepct.c
  Source/LibJPEG/jccoefct.c
  Source/LibJPEG/jccolor.c
  Source/LibJPEG/jcsample.c
  Source/LibJPEG/jcdctmgr.c
  Source/LibJPEG/jfdctint.c
  Source/LibJPEG/jfdctfst.c
  Source/LibJPEG/jfdctflt.c
  Source/LibJPEG/jchuff.c
  Source/LibJPEG/jcarith.c
  Source/LibJPEG/jcmarker.c
  Source/LibJPEG/jdatadst.c
  Source/LibJPEG/jdmaster.c
  Source/LibJPEG/jdinput.c
  Source/LibJPEG/jdmainct.c
  Source/LibJPEG/jdcoefct.c
  Source/LibJPEG/jdpostct.c
  Source/LibJPEG/jdmarker.c
  Source/LibJPEG/jdhuff.c
  Source/LibJPEG/jdarith.c
  Source/LibJPEG/jddctmgr.c
  Source/LibJPEG/jidctint.c
  Source/LibJPEG/jidctfst.c
  Source/LibJPEG/jidctflt.c
  Source/LibJPEG/jdsample.c
  Source/LibJPEG/jdcolor.c
  Source/LibJPEG/jdmerge.c
  Source/LibJPEG/jquant1.c
  Source/LibJPEG/jquant2.c
  Source/LibJPEG/jdatasrc.c
  Source/LibJPEG/jaricom.c
  Source/LibJPEG/jerror.c
  Source/LibJPEG/jmemmgr.c
  Source/LibJPEG/jutils.c

  Source/LibJPEG/jmemansi.c
)

FILE(GLOB JXR_HEADERS
  Source/LibJXR/common/include/*.h
  Source/LibJXR/image/sys/*.h
  Source/LibJXR/jxrgluelib/*.h
)
FILE(GLOB JXR_SOURCES
  Source/LibJXR/image/decode/*.c
  Source/LibJXR/image/encode/*.c
  Source/LibJXR/image/sys/*.c
  Source/LibJXR/jxrgluelib/*.c*
)

FILE(GLOB OJPEG_HEADERS Source/LibOpenJPEG/*.h)
FILE(GLOB OJPEG_SOURCES Source/LibOpenJPEG/*.c*)

FILE(GLOB PNG_HEADERS
  Source/LibPNG/png.h
  Source/LibPNG/pnginfo.h
  Source/LibPNG/pnglibconf.h
  Source/LibPNG/pngstruct.h
  Source/LibPNG/pngconf.h
  Source/LibPNG/pngdebug.h
  Source/LibPNG/pngpriv.h
)
FILE(GLOB PNG_SOURCES
  Source/LibPNG/pngerror.c
  Source/LibPNG/pngread.c
  Source/LibPNG/pngwio.c
  Source/LibPNG/pngget.c
  Source/LibPNG/pngrio.c
  Source/LibPNG/pngwrite.c
  Source/LibPNG/pngrtran.c
  Source/LibPNG/pngwtran.c
  Source/LibPNG/pngrutil.c
  Source/LibPNG/pngwutil.c
  Source/LibPNG/pngset.c
  Source/LibPNG/png.c
  Source/LibPNG/pngmem.c
  Source/LibPNG/pngpread.c
  Source/LibPNG/pngtrans.c
)

FILE(GLOB RAWLITE_HEADERS
  Source/LibRawLite/internal/*.h
  Source/LibRawLite/libraw/*.h
)
FILE(GLOB RAWLITE_SOURCES
  Source/LibRawLite/internal/dcraw_common.cpp
  Source/LibRawLite/internal/dcraw_fileio.cpp
  Source/LibRawLite/internal/demosaic_packs.cpp
  Source/LibRawLite/src/libraw_c_api.cpp
  Source/LibRawLite/src/libraw_cxx.cpp
  Source/LibRawLite/src/libraw_datastream.cpp
)

FILE(GLOB TIFF_HEADERS
  Source/LibTIFF4/*.h
)
FILE(GLOB TIFF_SOURCES
  Source/LibTIFF4/tif_aux.c
  Source/LibTIFF4/tif_close.c
  Source/LibTIFF4/tif_codec.c
  Source/LibTIFF4/tif_color.c
  Source/LibTIFF4/tif_compress.c
  Source/LibTIFF4/tif_dir.c
  Source/LibTIFF4/tif_dirinfo.c
  Source/LibTIFF4/tif_dirread.c
  Source/LibTIFF4/tif_dirwrite.c
  Source/LibTIFF4/tif_dumpmode.c
  Source/LibTIFF4/tif_error.c
  Source/LibTIFF4/tif_extension.c
  Source/LibTIFF4/tif_fax3.c
  Source/LibTIFF4/tif_fax3sm.c
  Source/LibTIFF4/tif_flush.c
  Source/LibTIFF4/tif_getimage.c
  Source/LibTIFF4/tif_jbig.c
  Source/LibTIFF4/tif_jpeg.c
  Source/LibTIFF4/tif_luv.c
  Source/LibTIFF4/tif_lzw.c
  Source/LibTIFF4/tif_next.c
  Source/LibTIFF4/tif_ojpeg.c
  Source/LibTIFF4/tif_open.c
  Source/LibTIFF4/tif_packbits.c
  Source/LibTIFF4/tif_pixarlog.c
  Source/LibTIFF4/tif_predict.c
  Source/LibTIFF4/tif_print.c
  Source/LibTIFF4/tif_read.c
  Source/LibTIFF4/tif_strip.c
  Source/LibTIFF4/tif_swab.c
  Source/LibTIFF4/tif_thunder.c
  Source/LibTIFF4/tif_tile.c
  Source/LibTIFF4/tif_version.c
  Source/LibTIFF4/tif_warning.c
  Source/LibTIFF4/tif_write.c
  Source/LibTIFF4/tif_zip.c
)

IF(WIN32)
  FILE(GLOB TIFF_SOURCES ${TIFF_SOURCES}
    Source/LibTIFF4/tif_win32.c
  )
ENDIF(WIN32)

IF(UNIX)
  FILE(GLOB TIFF_SOURCES ${TIFF_SOURCES}
    Source/LibTIFF4/tif_unix.c
  )
ENDIF(UNIX)

FILE(GLOB EXR_HEADERS
  Source/OpenEXR/*.h
  Source/OpenEXR/Half/*.h
  Source/OpenEXR/Iex/*.h
  Source/OpenEXR/IlmImf/*.h
  Source/OpenEXR/IlmThread/*.h
  Source/OpenEXR/Imath/*.h
)
FILE(GLOB EXR_SOURCES
  Source/OpenEXR/Half/half.cpp
  Source/OpenEXR/Iex/Iex*.c*
  Source/OpenEXR/IlmImf/Imf*.c*
  Source/OpenEXR/IlmThread/IlmThread.cpp
  Source/OpenEXR/IlmThread/IlmThreadSemaphore.cpp
  Source/OpenEXR/IlmThread/IlmThreadMutex.cpp
  Source/OpenEXR/IlmThread/IlmThreadPool.cpp
  Source/OpenEXR/Imath/*.c*
)

FILE(GLOB WEBP_HEADERS
  Source/LibWebP/src/dec/*.h
  Source/LibWebP/src/dsp/*.h
  Source/LibWebP/src/enc/*.h
  Source/LibWebP/src/mux/*.h
  Source/LibWebP/src/utils/*.h
  Source/LibWebP/src/webp/*.h
)

FILE(GLOB WEBP_SOURCES
  Source/LibWebP/src/dec/*.c
  Source/LibWebP/src/demux/*.c
  Source/LibWebP/src/dsp/*.c
  Source/LibWebP/src/enc/*.c
  Source/LibWebP/src/mux/*.c
  Source/LibWebP/src/utils/*.c
)

FILE(GLOB ZLIB_HEADERS Source/ZLib/*.h)
FILE(GLOB ZLIB_SOURCES Source/ZLib/*.c*)

IF(CMAKE_HAS_SORT)
  LIST(SORT HEADERS)
  LIST(SORT SOURCES)
  LIST(SORT JPEG_HEADERS)
  LIST(SORT JPEG_SOURCES)
  LIST(SORT JXR_HEADERS)
  LIST(SORT JXR_SOURCES)
  LIST(SORT OJPEG_HEADERS)
  LIST(SORT OJPEG_SOURCES)
  LIST(SORT PNG_HEADERS)
  LIST(SORT PNG_SOURCES)
  LIST(SORT RAWLITE_HEADERS)
  LIST(SORT RAWLITE_SOURCES)
  LIST(SORT TIFF_HEADERS)
  LIST(SORT TIFF_SOURCES)
  LIST(SORT EXR_HEADERS)
  LIST(SORT EXR_SOURCES)
  LIST(SORT ZLIB_HEADERS)
  LIST(SORT ZLIB_SOURCES)
ENDIF(CMAKE_HAS_SORT)

## Build
SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -O3 -fPIC -fexceptions -fvisibility=hidden")
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3 -fPIC -fexceptions -fvisibility=hidden -Wno-ctor-dtor-privacy")
# OpenJPEG
SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DOPJ_STATIC -DUSE_JPIP")
# LibRaw
SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DNO_LCMS -DLIBRAW_LIBRARY_BUILD")
#SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
# LibJXR
SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DDISABLE_PERF_MEASUREMENT -D__ANSI__")
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D__ANSI__")

ADD_DEFINITIONS(-DFREEIMAGE_LIB)
ADD_DEFINITIONS(-DOPJ_STATIC)
ADD_DEFINITIONS(-DLIBRAW_NODLL)

INCLUDE_DIRECTORIES(
  Source
  Source/FreeImage
  Source/Metadata
  Source/FreeImageToolkit
  Source/LibJPEG
  Source/LibJXR
  Source/LibJXR/common/include
  Source/LibJXR/image/sys
  Source/LibJXR/jxrgluelib
  Source/LibOpenJPEG
  Source/LibPNG
  Source/LibTIFF4
  Source/OpenEXR
  Source/OpenEXR/IlmImf
  Source/OpenEXR/Imath
  Source/OpenEXR/Iex
  Source/OpenEXR/IexMath
  Source/OpenEXR/Half
  Source/OpenEXR/IlmThread
  Source/LibRawLite
  Source/LibRawLite/dcraw
  Source/LibRawLite/internal
  Source/LibRawLite/libraw
  Source/LibRawLite/src
  Source/LibWebP
  Source/ZLib
)

ADD_LIBRARY(freeimage
  ${SOURCES} ${HEADERS}
  ${JPEG_SOURCES} ${JPEG_HEADERS}
  ${JXR_SOURCES} ${JXR_HEADERS}
  ${OJPEG_SOURCES} ${OJPEG_HEADERS}
  ${PNG_SOURCES} ${PNG_HEADERS}
  ${RAWLITE_SOURCES} ${RAWLITE_HEADERS}
  ${TIFF_SOURCES} ${TIFF_HEADERS}
  ${EXR_SOURCES} ${EXR_HEADERS}
  ${WEBP_SOURCES} ${WEBP_HEADERS}
  ${ZLIB_SOURCES} ${ZLIB_HEADERS}
)
