#pragma once
#if 1 // hack
  #define CDBTILELIBRARYAPI
#else
  #ifdef CDB_TILELIB_EXPORTS
  #define CDBTILELIBRARYAPI __declspec(dllexport)
  #else
  #define CDBTILELIBRARYAPI __declspec(dllimport)
  #endif
#endif