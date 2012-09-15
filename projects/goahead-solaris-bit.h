/*
    bit.h -- Build It Configuration Header for solaris-x86

    This header is generated by Bit during configuration. To change settings, re-run
    configure or define variables in your Makefile to override these default values.
 */

/* Settings */
#ifndef BIT_ACCESS_LOG
    #define BIT_ACCESS_LOG 0
#endif
#ifndef BIT_AUTH
    #define BIT_AUTH 1
#endif
#ifndef BIT_AUTO_LOGIN
    #define BIT_AUTO_LOGIN 0
#endif
#ifndef BIT_BUILD_NUMBER
    #define BIT_BUILD_NUMBER "0"
#endif
#ifndef BIT_CA_FILE
    #define BIT_CA_FILE ""
#endif
#ifndef BIT_CA_PATH
    #define BIT_CA_PATH ""
#endif
#ifndef BIT_CERTIFICATE
    #define BIT_CERTIFICATE ""
#endif
#ifndef BIT_CGI
    #define BIT_CGI 1
#endif
#ifndef BIT_CGI_BIN
    #define BIT_CGI_BIN "cgi-bin"
#endif
#ifndef BIT_COMPANY
    #define BIT_COMPANY "Embedthis"
#endif
#ifndef BIT_DEBUG_LOG
    #define BIT_DEBUG_LOG 1
#endif
#ifndef BIT_DEPTH
    #define BIT_DEPTH 1
#endif
#ifndef BIT_DIGEST
    #define BIT_DIGEST 1
#endif
#ifndef BIT_DOCUMENTS
    #define BIT_DOCUMENTS "web"
#endif
#ifndef BIT_HAS_DOUBLE_BRACES
    #define BIT_HAS_DOUBLE_BRACES 1
#endif
#ifndef BIT_HAS_DYN_LOAD
    #define BIT_HAS_DYN_LOAD 1
#endif
#ifndef BIT_HAS_LIB_EDIT
    #define BIT_HAS_LIB_EDIT 0
#endif
#ifndef BIT_HAS_MMU
    #define BIT_HAS_MMU 1
#endif
#ifndef BIT_HAS_MTUNE
    #define BIT_HAS_MTUNE 1
#endif
#ifndef BIT_HAS_PAM
    #define BIT_HAS_PAM 0
#endif
#ifndef BIT_HAS_STACK_PROTECTOR
    #define BIT_HAS_STACK_PROTECTOR 1
#endif
#ifndef BIT_HAS_SYNC
    #define BIT_HAS_SYNC 0
#endif
#ifndef BIT_HAS_SYNC_CAS
    #define BIT_HAS_SYNC_CAS 0
#endif
#ifndef BIT_HAS_UNNAMED_UNIONS
    #define BIT_HAS_UNNAMED_UNIONS 1
#endif
#ifndef BIT_HTTP_PORT
    #define BIT_HTTP_PORT 8080
#endif
#ifndef BIT_HTTP_V6_PORT
    #define BIT_HTTP_V6_PORT 9090
#endif
#ifndef BIT_IF_MODIFIED
    #define BIT_IF_MODIFIED 1
#endif
#ifndef BIT_JAVASCRIPT
    #define BIT_JAVASCRIPT 1
#endif
#ifndef BIT_KEEP_ALIVE
    #define BIT_KEEP_ALIVE 1
#endif
#ifndef BIT_KEY
    #define BIT_KEY ""
#endif
#ifndef BIT_LEGACY
    #define BIT_LEGACY 0
#endif
#ifndef BIT_LIMIT_BODY
    #define BIT_LIMIT_BODY 8192
#endif
#ifndef BIT_LIMIT_BUFFER
    #define BIT_LIMIT_BUFFER 1024
#endif
#ifndef BIT_LIMIT_FILENAME
    #define BIT_LIMIT_FILENAME 256
#endif
#ifndef BIT_LIMIT_HEADER
    #define BIT_LIMIT_HEADER 2048
#endif
#ifndef BIT_LIMIT_HEADERS
    #define BIT_LIMIT_HEADERS 4096
#endif
#ifndef BIT_LIMIT_NUM_HEADERS
    #define BIT_LIMIT_NUM_HEADERS 64
#endif
#ifndef BIT_LIMIT_PASSWORD
    #define BIT_LIMIT_PASSWORD 32
#endif
#ifndef BIT_LIMIT_RESPONSE_BUFFER
    #define BIT_LIMIT_RESPONSE_BUFFER 8192
#endif
#ifndef BIT_LIMIT_SESSION_COUNT
    #define BIT_LIMIT_SESSION_COUNT 120
#endif
#ifndef BIT_LIMIT_SESSION_LIFE
    #define BIT_LIMIT_SESSION_LIFE 1800
#endif
#ifndef BIT_LIMIT_SOCKET_BUFFER
    #define BIT_LIMIT_SOCKET_BUFFER 1024
#endif
#ifndef BIT_LIMIT_STRING
    #define BIT_LIMIT_STRING 4096
#endif
#ifndef BIT_LIMIT_UPLOAD
    #define BIT_LIMIT_UPLOAD 2048000
#endif
#ifndef BIT_LIMIT_URI
    #define BIT_LIMIT_URI 2048
#endif
#ifndef BIT_MINIMAL
    #define BIT_MINIMAL "doxygen,dsi,ejs,man,man2html,pmaker,ssl,matrixssl,openssl"
#endif
#ifndef BIT_OPTIONAL
    #define BIT_OPTIONAL "doxygen,dsi,ejs,man,man2html,openssl,matrixssl,pmaker,ssl,utest,zip"
#endif
#ifndef BIT_PACKS
    #define BIT_PACKS "bits/packs"
#endif
#ifndef BIT_PAM
    #define BIT_PAM 1
#endif
#ifndef BIT_PASSWORD
    #define BIT_PASSWORD ""
#endif
#ifndef BIT_PRODUCT
    #define BIT_PRODUCT "goahead"
#endif
#ifndef BIT_REALM
    #define BIT_REALM "example.com"
#endif
#ifndef BIT_REPLACE_MALLOC
    #define BIT_REPLACE_MALLOC 0
#endif
#ifndef BIT_REQUIRED
    #define BIT_REQUIRED "compiler,link"
#endif
#ifndef BIT_ROUTE
    #define BIT_ROUTE 1
#endif
#ifndef BIT_SESSIONS
    #define BIT_SESSIONS 1
#endif
#ifndef BIT_SSL_PORT
    #define BIT_SSL_PORT 4443
#endif
#ifndef BIT_TITLE
    #define BIT_TITLE "Embedthis GoAhead"
#endif
#ifndef BIT_TRACE
    #define BIT_TRACE "stdout:2"
#endif
#ifndef BIT_UPLOAD
    #define BIT_UPLOAD 0
#endif
#ifndef BIT_UPLOAD_DIR
    #define BIT_UPLOAD_DIR "/tmp"
#endif
#ifndef BIT_VERSION
    #define BIT_VERSION "3.0.0"
#endif
#ifndef BIT_WARN64TO32
    #define BIT_WARN64TO32 0
#endif
#ifndef BIT_WARN_UNUSED
    #define BIT_WARN_UNUSED 0
#endif

/* Prefixes */
#ifndef BIT_CFG_PREFIX
    #define BIT_CFG_PREFIX "/etc/goahead"
#endif
#ifndef BIT_BIN_PREFIX
    #define BIT_BIN_PREFIX "/usr/lib/goahead/3.0.0/bin"
#endif
#ifndef BIT_INC_PREFIX
    #define BIT_INC_PREFIX "/usr/lib/goahead/3.0.0/inc"
#endif
#ifndef BIT_LOG_PREFIX
    #define BIT_LOG_PREFIX "/var/log/goahead"
#endif
#ifndef BIT_PRD_PREFIX
    #define BIT_PRD_PREFIX "/usr/lib/goahead"
#endif
#ifndef BIT_SPL_PREFIX
    #define BIT_SPL_PREFIX "/var/spool/goahead"
#endif
#ifndef BIT_SRC_PREFIX
    #define BIT_SRC_PREFIX "/usr/src/goahead-3.0.0"
#endif
#ifndef BIT_VER_PREFIX
    #define BIT_VER_PREFIX "/usr/lib/goahead/3.0.0"
#endif
#ifndef BIT_WEB_PREFIX
    #define BIT_WEB_PREFIX "/var/www/goahead-default"
#endif

/* Suffixes */
#ifndef BIT_EXE
    #define BIT_EXE ""
#endif
#ifndef BIT_SHLIB
    #define BIT_SHLIB ".so"
#endif
#ifndef BIT_SHOBJ
    #define BIT_SHOBJ ".so"
#endif
#ifndef BIT_LIB
    #define BIT_LIB ".a"
#endif
#ifndef BIT_OBJ
    #define BIT_OBJ ".o"
#endif

/* Profile */
#ifndef BIT_CONFIG_CMD
    #define BIT_CONFIG_CMD "bit -d -q -platform solaris-x86 -without all -configure . -gen sh,make"
#endif
#ifndef BIT_GOAHEAD_PRODUCT
    #define BIT_GOAHEAD_PRODUCT 1
#endif
#ifndef BIT_PROFILE
    #define BIT_PROFILE "debug"
#endif

/* Miscellaneous */
#ifndef BIT_MAJOR_VERSION
    #define BIT_MAJOR_VERSION 3
#endif
#ifndef BIT_MINOR_VERSION
    #define BIT_MINOR_VERSION 0
#endif
#ifndef BIT_PATCH_VERSION
    #define BIT_PATCH_VERSION 0
#endif
#ifndef BIT_VNUM
    #define BIT_VNUM 300000000
#endif

/* Packs */
#ifndef BIT_PACK_CC
    #define BIT_PACK_CC 1
#endif
#ifndef BIT_PACK_DOXYGEN
    #define BIT_PACK_DOXYGEN 0
#endif
#ifndef BIT_PACK_DSI
    #define BIT_PACK_DSI 0
#endif
#ifndef BIT_PACK_EJS
    #define BIT_PACK_EJS 0
#endif
#ifndef BIT_PACK_LINK
    #define BIT_PACK_LINK 1
#endif
#ifndef BIT_PACK_MAN
    #define BIT_PACK_MAN 0
#endif
#ifndef BIT_PACK_MAN2HTML
    #define BIT_PACK_MAN2HTML 0
#endif
#ifndef BIT_PACK_MATRIXSSL
    #define BIT_PACK_MATRIXSSL 0
#endif
#ifndef BIT_PACK_OPENSSL
    #define BIT_PACK_OPENSSL 0
#endif
#ifndef BIT_PACK_PMAKER
    #define BIT_PACK_PMAKER 0
#endif
#ifndef BIT_PACK_SSL
    #define BIT_PACK_SSL 0
#endif
#ifndef BIT_PACK_UTEST
    #define BIT_PACK_UTEST 1
#endif
#ifndef BIT_PACK_ZIP
    #define BIT_PACK_ZIP 1
#endif
