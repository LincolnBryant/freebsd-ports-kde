--- src/3rdparty/chromium/components/feedback/anonymizer_tool.cc.orig	2017-01-26 00:49:11 UTC
+++ src/3rdparty/chromium/components/feedback/anonymizer_tool.cc
@@ -10,7 +10,11 @@
 #include "base/strings/string_number_conversions.h"
 #include "base/strings/string_util.h"
 #include "base/strings/stringprintf.h"
+#if defined(OS_BSD)
+#include <re2/re2.h>
+#else
 #include "third_party/re2/src/re2/re2.h"
+#endif
 
 using re2::RE2;
 
