typedef unsigned char   undefined;

typedef unsigned long long    GUID;
typedef unsigned int    ImageBaseOffset32;
typedef unsigned char    byte;
typedef unsigned int    dword;
float10
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned int    uint3;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef short    wchar_t;
typedef unsigned short    word;
#define unkbyte9   unsigned long long
#define unkbyte10   unsigned long long
#define unkbyte11   unsigned long long
#define unkbyte12   unsigned long long
#define unkbyte13   unsigned long long
#define unkbyte14   unsigned long long
#define unkbyte15   unsigned long long
#define unkbyte16   unsigned long long

#define unkuint9   unsigned long long
#define unkuint10   unsigned long long
#define unkuint11   unsigned long long
#define unkuint12   unsigned long long
#define unkuint13   unsigned long long
#define unkuint14   unsigned long long
#define unkuint15   unsigned long long
#define unkuint16   unsigned long long

#define unkint9   long long
#define unkint10   long long
#define unkint11   long long
#define unkint12   long long
#define unkint13   long long
#define unkint14   long long
#define unkint15   long long
#define unkint16   long long

#define unkfloat1   float
#define unkfloat2   float
#define unkfloat3   float
#define unkfloat5   double
#define unkfloat6   double
#define unkfloat7   double
#define unkfloat9   long double
#define unkfloat11   long double
#define unkfloat12   long double
#define unkfloat13   long double
#define unkfloat14   long double
#define unkfloat15   long double
#define unkfloat16   long double

#define BADSPACEBASE   void
#define code   void

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion;

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct {
    dword OffsetToDirectory;
    dword DataIsDirectory;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion {
    dword OffsetToData;
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;
};

typedef unsigned short    wchar16;
typedef struct _STARTUPINFOA _STARTUPINFOA, *P_STARTUPINFOA;

typedef ulong DWORD;

typedef char CHAR;

typedef CHAR * LPSTR;

typedef ushort WORD;

typedef uchar BYTE;

typedef BYTE * LPBYTE;

typedef void * HANDLE;

struct _STARTUPINFOA {
    DWORD cb;
    LPSTR lpReserved;
    LPSTR lpDesktop;
    LPSTR lpTitle;
    DWORD dwX;
    DWORD dwY;
    DWORD dwXSize;
    DWORD dwYSize;
    DWORD dwXCountChars;
    DWORD dwYCountChars;
    DWORD dwFillAttribute;
    DWORD dwFlags;
    WORD wShowWindow;
    WORD cbReserved2;
    LPBYTE lpReserved2;
    HANDLE hStdInput;
    HANDLE hStdOutput;
    HANDLE hStdError;
};

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;

typedef void * LPVOID;

typedef int BOOL;

struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};

typedef struct _STARTUPINFOA * LPSTARTUPINFOA;

typedef struct _OFSTRUCT _OFSTRUCT, *P_OFSTRUCT;

struct _OFSTRUCT {
    BYTE cBytes;
    BYTE fFixedDisk;
    WORD nErrCode;
    WORD Reserved1;
    WORD Reserved2;
    CHAR szPathName[128];
};

typedef struct _OFSTRUCT * LPOFSTRUCT;

typedef long LONG;

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

typedef LONG (* PTOP_LEVEL_EXCEPTION_FILTER)(struct _EXCEPTION_POINTERS *);

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD * PEXCEPTION_RECORD;

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _CONTEXT CONTEXT;

typedef CONTEXT * PCONTEXT;

typedef void * PVOID;

typedef ulong ULONG_PTR;

typedef struct _FLOATING_SAVE_AREA _FLOATING_SAVE_AREA, *P_FLOATING_SAVE_AREA;

typedef struct _FLOATING_SAVE_AREA FLOATING_SAVE_AREA;

struct _FLOATING_SAVE_AREA {
    DWORD ControlWord;
    DWORD StatusWord;
    DWORD TagWord;
    DWORD ErrorOffset;
    DWORD ErrorSelector;
    DWORD DataOffset;
    DWORD DataSelector;
    BYTE RegisterArea[80];
    DWORD Cr0NpxState;
};

struct _CONTEXT {
    DWORD ContextFlags;
    DWORD Dr0;
    DWORD Dr1;
    DWORD Dr2;
    DWORD Dr3;
    DWORD Dr6;
    DWORD Dr7;
    FLOATING_SAVE_AREA FloatSave;
    DWORD SegGs;
    DWORD SegFs;
    DWORD SegEs;
    DWORD SegDs;
    DWORD Edi;
    DWORD Esi;
    DWORD Ebx;
    DWORD Edx;
    DWORD Ecx;
    DWORD Eax;
    DWORD Ebp;
    DWORD Eip;
    DWORD SegCs;
    DWORD EFlags;
    DWORD Esp;
    DWORD SegSs;
    BYTE ExtendedRegisters[512];
};

struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD * ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
};

struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
};

typedef struct _SECURITY_ATTRIBUTES * LPSECURITY_ATTRIBUTES;

typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;

typedef struct DotNetPdbInfo DotNetPdbInfo, *PDotNetPdbInfo;

struct DotNetPdbInfo {
    char signature[4];
    GUID guid;
    dword age;
    char pdbname[11];
};

typedef struct _iobuf _iobuf, *P_iobuf;

struct _iobuf {
    char * _ptr;
    int _cnt;
    char * _base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char * _tmpfname;
};

typedef struct _iobuf FILE;

typedef uint size_t;

typedef struct _startupinfo _startupinfo, *P_startupinfo;

struct _startupinfo {
    int newmode;
};

typedef struct DLGTEMPLATE DLGTEMPLATE, *PDLGTEMPLATE;

typedef struct DLGTEMPLATE * LPCDLGTEMPLATEA;

struct DLGTEMPLATE {
    DWORD style;
    DWORD dwExtendedStyle;
    WORD cdit;
    short x;
    short y;
    short cx;
    short cy;
};

typedef struct tagWNDCLASSA tagWNDCLASSA, *PtagWNDCLASSA;

typedef uint UINT;

typedef long LONG_PTR;

typedef LONG_PTR LRESULT;

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ * HWND;

typedef uint UINT_PTR;

typedef UINT_PTR WPARAM;

typedef LONG_PTR LPARAM;

typedef LRESULT (* WNDPROC)(HWND, UINT, WPARAM, LPARAM);

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ * HINSTANCE;

typedef struct HICON__ HICON__, *PHICON__;

typedef struct HICON__ * HICON;

typedef HICON HCURSOR;

typedef struct HBRUSH__ HBRUSH__, *PHBRUSH__;

typedef struct HBRUSH__ * HBRUSH;

typedef CHAR * LPCSTR;

struct HBRUSH__ {
    int unused;
};

struct tagWNDCLASSA {
    UINT style;
    WNDPROC lpfnWndProc;
    int cbClsExtra;
    int cbWndExtra;
    HINSTANCE hInstance;
    HICON hIcon;
    HCURSOR hCursor;
    HBRUSH hbrBackground;
    LPCSTR lpszMenuName;
    LPCSTR lpszClassName;
};

struct HICON__ {
    int unused;
};

struct HINSTANCE__ {
    int unused;
};

struct HWND__ {
    int unused;
};

typedef struct tagMSG tagMSG, *PtagMSG;

typedef struct tagMSG MSG;

typedef struct tagPOINT tagPOINT, *PtagPOINT;

typedef struct tagPOINT POINT;

struct tagPOINT {
    LONG x;
    LONG y;
};

struct tagMSG {
    HWND hwnd;
    UINT message;
    WPARAM wParam;
    LPARAM lParam;
    DWORD time;
    POINT pt;
};

typedef struct tagMSG * LPMSG;

typedef struct tagWNDCLASSA WNDCLASSA;

typedef struct tagPAINTSTRUCT tagPAINTSTRUCT, *PtagPAINTSTRUCT;

typedef struct tagPAINTSTRUCT * LPPAINTSTRUCT;

typedef struct HDC__ HDC__, *PHDC__;

typedef struct HDC__ * HDC;

typedef struct tagRECT tagRECT, *PtagRECT;

typedef struct tagRECT RECT;

struct HDC__ {
    int unused;
};

struct tagRECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
};

struct tagPAINTSTRUCT {
    HDC hdc;
    BOOL fErase;
    RECT rcPaint;
    BOOL fRestore;
    BOOL fIncUpdate;
    BYTE rgbReserved[32];
};

typedef struct tagPAINTSTRUCT PAINTSTRUCT;

typedef int INT_PTR;

typedef INT_PTR (* DLGPROC)(HWND, UINT, WPARAM, LPARAM);

typedef struct tagPALETTEENTRY tagPALETTEENTRY, *PtagPALETTEENTRY;

typedef struct tagPALETTEENTRY PALETTEENTRY;

struct tagPALETTEENTRY {
    BYTE peRed;
    BYTE peGreen;
    BYTE peBlue;
    BYTE peFlags;
};

typedef struct _devicemodeA _devicemodeA, *P_devicemodeA;

typedef union _union_655 _union_655, *P_union_655;

typedef union _union_658 _union_658, *P_union_658;

typedef struct _struct_656 _struct_656, *P_struct_656;

typedef struct _struct_657 _struct_657, *P_struct_657;

typedef struct _POINTL _POINTL, *P_POINTL;

typedef struct _POINTL POINTL;

struct _POINTL {
    LONG x;
    LONG y;
};

struct _struct_657 {
    POINTL dmPosition;
    DWORD dmDisplayOrientation;
    DWORD dmDisplayFixedOutput;
};

struct _struct_656 {
    short dmOrientation;
    short dmPaperSize;
    short dmPaperLength;
    short dmPaperWidth;
    short dmScale;
    short dmCopies;
    short dmDefaultSource;
    short dmPrintQuality;
};

union _union_655 {
    struct _struct_656 field0;
    struct _struct_657 field1;
};

union _union_658 {
    DWORD dmDisplayFlags;
    DWORD dmNup;
};

struct _devicemodeA {
    BYTE dmDeviceName[32];
    WORD dmSpecVersion;
    WORD dmDriverVersion;
    WORD dmSize;
    WORD dmDriverExtra;
    DWORD dmFields;
    union _union_655 field_0x2c;
    short dmColor;
    short dmDuplex;
    short dmYResolution;
    short dmTTOption;
    short dmCollate;
    BYTE dmFormName[32];
    WORD dmLogPixels;
    DWORD dmBitsPerPel;
    DWORD dmPelsWidth;
    DWORD dmPelsHeight;
    union _union_658 field_0x74;
    DWORD dmDisplayFrequency;
    DWORD dmICMMethod;
    DWORD dmICMIntent;
    DWORD dmMediaType;
    DWORD dmDitherType;
    DWORD dmReserved1;
    DWORD dmReserved2;
    DWORD dmPanningWidth;
    DWORD dmPanningHeight;
};

typedef struct tagLOGPALETTE tagLOGPALETTE, *PtagLOGPALETTE;

typedef struct tagLOGPALETTE LOGPALETTE;

struct tagLOGPALETTE {
    WORD palVersion;
    WORD palNumEntries;
    PALETTEENTRY palPalEntry[1];
};

typedef struct _devicemodeA DEVMODEA;

typedef struct tagBITMAPINFO tagBITMAPINFO, *PtagBITMAPINFO;

typedef struct tagBITMAPINFO BITMAPINFO;

typedef struct tagBITMAPINFOHEADER tagBITMAPINFOHEADER, *PtagBITMAPINFOHEADER;

typedef struct tagBITMAPINFOHEADER BITMAPINFOHEADER;

typedef struct tagRGBQUAD tagRGBQUAD, *PtagRGBQUAD;

typedef struct tagRGBQUAD RGBQUAD;

struct tagBITMAPINFOHEADER {
    DWORD biSize;
    LONG biWidth;
    LONG biHeight;
    WORD biPlanes;
    WORD biBitCount;
    DWORD biCompression;
    DWORD biSizeImage;
    LONG biXPelsPerMeter;
    LONG biYPelsPerMeter;
    DWORD biClrUsed;
    DWORD biClrImportant;
};

struct tagRGBQUAD {
    BYTE rgbBlue;
    BYTE rgbGreen;
    BYTE rgbRed;
    BYTE rgbReserved;
};

struct tagBITMAPINFO {
    BITMAPINFOHEADER bmiHeader;
    RGBQUAD bmiColors[1];
};

typedef struct tagPALETTEENTRY * LPPALETTEENTRY;

typedef union _LARGE_INTEGER _LARGE_INTEGER, *P_LARGE_INTEGER;

typedef struct _struct_19 _struct_19, *P_struct_19;

typedef struct _struct_20 _struct_20, *P_struct_20;

typedef double LONGLONG;

struct _struct_20 {
    DWORD LowPart;
    LONG HighPart;
};

struct _struct_19 {
    DWORD LowPart;
    LONG HighPart;
};

union _LARGE_INTEGER {
    struct _struct_19 s;
    struct _struct_20 u;
    LONGLONG QuadPart;
};

typedef union _LARGE_INTEGER LARGE_INTEGER;

typedef LONG * PLONG;

typedef DWORD ACCESS_MASK;

typedef struct IMAGE_DOS_HEADER IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;

struct IMAGE_DOS_HEADER {
    char e_magic[2]; // Magic number
    word e_cblp; // Bytes of last page
    word e_cp; // Pages in file
    word e_crlc; // Relocations
    word e_cparhdr; // Size of header in paragraphs
    word e_minalloc; // Minimum extra paragraphs needed
    word e_maxalloc; // Maximum extra paragraphs needed
    word e_ss; // Initial (relative) SS value
    word e_sp; // Initial SP value
    word e_csum; // Checksum
    word e_ip; // Initial IP value
    word e_cs; // Initial (relative) CS value
    word e_lfarlc; // File address of relocation table
    word e_ovno; // Overlay number
    word e_res[4][4]; // Reserved words
    word e_oemid; // OEM identifier (for e_oeminfo)
    word e_oeminfo; // OEM information; e_oemid specific
    word e_res2[10][10]; // Reserved words
    dword e_lfanew; // File address of new exe header
    byte e_program[64]; // Actual DOS program
};

typedef ULONG_PTR DWORD_PTR;

typedef ULONG_PTR SIZE_T;

typedef struct tagINITCOMMONCONTROLSEX tagINITCOMMONCONTROLSEX, *PtagINITCOMMONCONTROLSEX;

typedef struct tagINITCOMMONCONTROLSEX INITCOMMONCONTROLSEX;

struct tagINITCOMMONCONTROLSEX {
    DWORD dwSize;
    DWORD dwICC;
};

typedef struct tagPOINT * LPPOINT;

typedef struct HKEY__ HKEY__, *PHKEY__;

struct HKEY__ {
    int unused;
};

typedef struct HPALETTE__ HPALETTE__, *PHPALETTE__;

struct HPALETTE__ {
    int unused;
};

typedef HINSTANCE HMODULE;

typedef struct HBITMAP__ HBITMAP__, *PHBITMAP__;

struct HBITMAP__ {
    int unused;
};

typedef HANDLE HLOCAL;

typedef int (* FARPROC)(void);

typedef struct HPALETTE__ * HPALETTE;

typedef WORD ATOM;

typedef struct HRGN__ HRGN__, *PHRGN__;

typedef struct HRGN__ * HRGN;

struct HRGN__ {
    int unused;
};

typedef struct tagRECT * LPRECT;

typedef void * HGDIOBJ;

typedef struct HKEY__ * HKEY;

typedef struct HRSRC__ HRSRC__, *PHRSRC__;

typedef struct HRSRC__ * HRSRC;

struct HRSRC__ {
    int unused;
};

typedef struct _FILETIME _FILETIME, *P_FILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

typedef DWORD COLORREF;

typedef DWORD * LPDWORD;

typedef struct HTASK__ HTASK__, *PHTASK__;

struct HTASK__ {
    int unused;
};

typedef void * LPCVOID;

typedef struct HMENU__ HMENU__, *PHMENU__;

typedef struct HMENU__ * HMENU;

struct HMENU__ {
    int unused;
};

typedef struct _FILETIME * LPFILETIME;

typedef HKEY * PHKEY;

typedef int INT;

typedef struct HTASK__ * HTASK;

typedef int HFILE;

typedef HANDLE HGLOBAL;

typedef struct HBITMAP__ * HBITMAP;

typedef struct Var Var, *PVar;

struct Var {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct {
    dword NameOffset;
    dword NameIsString;
};

typedef struct IMAGE_BOUND_IMPORT_DESCRIPTOR_0 IMAGE_BOUND_IMPORT_DESCRIPTOR_0, *PIMAGE_BOUND_IMPORT_DESCRIPTOR_0;

struct IMAGE_BOUND_IMPORT_DESCRIPTOR_0 {
    dword TimeDateStamp;
    word OffsetModuleName;
    word NumberOfModuleForwarderRefs;
};

typedef struct IMAGE_DEBUG_DIRECTORY IMAGE_DEBUG_DIRECTORY, *PIMAGE_DEBUG_DIRECTORY;

struct IMAGE_DEBUG_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword Type;
    dword SizeOfData;
    dword AddressOfRawData;
    dword PointerToRawData;
};

typedef struct IMAGE_BOUND_IMPORT_DESCRIPTOR_1 IMAGE_BOUND_IMPORT_DESCRIPTOR_1, *PIMAGE_BOUND_IMPORT_DESCRIPTOR_1;

typedef struct IMAGE_BOUND_FORWARDER_REF IMAGE_BOUND_FORWARDER_REF, *PIMAGE_BOUND_FORWARDER_REF;

struct IMAGE_BOUND_FORWARDER_REF {
    dword TimeDateStamp;
    word OffsetModuleName;
    word Reserved;
};

struct IMAGE_BOUND_IMPORT_DESCRIPTOR_1 {
    dword TimeDateStamp;
    word OffsetModuleName;
    word NumberOfModuleForwarderRefs;
    struct IMAGE_BOUND_FORWARDER_REF field_0x8;
};

typedef struct IMAGE_RESOURCE_DIR_STRING_U_16 IMAGE_RESOURCE_DIR_STRING_U_16, *PIMAGE_RESOURCE_DIR_STRING_U_16;

struct IMAGE_RESOURCE_DIR_STRING_U_16 {
    word Length;
    wchar16 NameString[8];
};

typedef struct IMAGE_RESOURCE_DIR_STRING_U_12 IMAGE_RESOURCE_DIR_STRING_U_12, *PIMAGE_RESOURCE_DIR_STRING_U_12;

struct IMAGE_RESOURCE_DIR_STRING_U_12 {
    word Length;
    wchar16 NameString[6];
};

typedef struct StringTable StringTable, *PStringTable;

struct StringTable {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;

typedef union Misc Misc, *PMisc;

typedef enum SectionFlags {
    IMAGE_SCN_ALIGN_1024BYTES=11534336,
    IMAGE_SCN_ALIGN_128BYTES=8388608,
    IMAGE_SCN_ALIGN_16BYTES=5242880,
    IMAGE_SCN_ALIGN_1BYTES=1048576,
    IMAGE_SCN_ALIGN_2048BYTES=12582912,
    IMAGE_SCN_ALIGN_256BYTES=9437184,
    IMAGE_SCN_ALIGN_2BYTES=2097152,
    IMAGE_SCN_ALIGN_32BYTES=6291456,
    IMAGE_SCN_ALIGN_4096BYTES=13631488,
    IMAGE_SCN_ALIGN_4BYTES=3145728,
    IMAGE_SCN_ALIGN_512BYTES=10485760,
    IMAGE_SCN_ALIGN_64BYTES=7340032,
    IMAGE_SCN_ALIGN_8192BYTES=14680064,
    IMAGE_SCN_ALIGN_8BYTES=4194304,
    IMAGE_SCN_CNT_CODE=32,
    IMAGE_SCN_CNT_INITIALIZED_DATA=64,
    IMAGE_SCN_CNT_UNINITIALIZED_DATA=128,
    IMAGE_SCN_GPREL=32768,
    IMAGE_SCN_LNK_COMDAT=4096,
    IMAGE_SCN_LNK_INFO=512,
    IMAGE_SCN_LNK_NRELOC_OVFL=16777216,
    IMAGE_SCN_LNK_OTHER=256,
    IMAGE_SCN_LNK_REMOVE=2048,
    IMAGE_SCN_MEM_16BIT=131072,
    IMAGE_SCN_MEM_DISCARDABLE=33554432,
    IMAGE_SCN_MEM_EXECUTE=536870912,
    IMAGE_SCN_MEM_LOCKED=262144,
    IMAGE_SCN_MEM_NOT_CACHED=67108864,
    IMAGE_SCN_MEM_NOT_PAGED=134217728,
    IMAGE_SCN_MEM_PRELOAD=524288,
    IMAGE_SCN_MEM_PURGEABLE=131072,
    IMAGE_SCN_MEM_READ=1073741824,
    IMAGE_SCN_MEM_SHARED=268435456,
    IMAGE_SCN_MEM_WRITE=2147483648,
    IMAGE_SCN_RESERVED_0001=16,
    IMAGE_SCN_RESERVED_0040=1024,
    IMAGE_SCN_TYPE_NO_PAD=8
} SectionFlags;

union Misc {
    dword PhysicalAddress;
    dword VirtualSize;
};

struct IMAGE_SECTION_HEADER {
    char Name[8];
    union Misc Misc;
    ImageBaseOffset32 VirtualAddress;
    dword SizeOfRawData;
    dword PointerToRawData;
    dword PointerToRelocations;
    dword PointerToLinenumbers;
    word NumberOfRelocations;
    word NumberOfLinenumbers;
    enum SectionFlags Characteristics;
};

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

typedef struct IMAGE_RESOURCE_DATA_ENTRY IMAGE_RESOURCE_DATA_ENTRY, *PIMAGE_RESOURCE_DATA_ENTRY;

struct IMAGE_RESOURCE_DATA_ENTRY {
    dword OffsetToData;
    dword Size;
    dword CodePage;
    dword Reserved;
};

typedef struct IMAGE_RESOURCE_DIRECTORY IMAGE_RESOURCE_DIRECTORY, *PIMAGE_RESOURCE_DIRECTORY;

struct IMAGE_RESOURCE_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    word NumberOfNamedEntries;
    word NumberOfIdEntries;
};

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion;

union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion {
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;
    dword Name;
    word Id;
};

typedef struct IMAGE_OPTIONAL_HEADER32 IMAGE_OPTIONAL_HEADER32, *PIMAGE_OPTIONAL_HEADER32;

struct IMAGE_OPTIONAL_HEADER32 {
    word Magic;
    byte MajorLinkerVersion;
    byte MinorLinkerVersion;
    dword SizeOfCode;
    dword SizeOfInitializedData;
    dword SizeOfUninitializedData;
    ImageBaseOffset32 AddressOfEntryPoint;
    ImageBaseOffset32 BaseOfCode;
    ImageBaseOffset32 BaseOfData;
    pointer32 ImageBase;
    dword SectionAlignment;
    dword FileAlignment;
    word MajorOperatingSystemVersion;
    word MinorOperatingSystemVersion;
    word MajorImageVersion;
    word MinorImageVersion;
    word MajorSubsystemVersion;
    word MinorSubsystemVersion;
    dword Win32VersionValue;
    dword SizeOfImage;
    dword SizeOfHeaders;
    dword CheckSum;
    word Subsystem;
    word DllCharacteristics;
    dword SizeOfStackReserve;
    dword SizeOfStackCommit;
    dword SizeOfHeapReserve;
    dword SizeOfHeapCommit;
    dword LoaderFlags;
    dword NumberOfRvaAndSizes;
    struct IMAGE_DATA_DIRECTORY DataDirectory[16];
};

typedef struct IMAGE_RESOURCE_DIR_STRING_U_30 IMAGE_RESOURCE_DIR_STRING_U_30, *PIMAGE_RESOURCE_DIR_STRING_U_30;

struct IMAGE_RESOURCE_DIR_STRING_U_30 {
    word Length;
    wchar16 NameString[15];
};

typedef struct IMAGE_FILE_HEADER IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;

struct IMAGE_FILE_HEADER {
    word Machine; // 332
    word NumberOfSections;
    dword TimeDateStamp;
    dword PointerToSymbolTable;
    dword NumberOfSymbols;
    word SizeOfOptionalHeader;
    word Characteristics;
};

typedef struct IMAGE_NT_HEADERS32 IMAGE_NT_HEADERS32, *PIMAGE_NT_HEADERS32;

struct IMAGE_NT_HEADERS32 {
    char Signature[4];
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER32 OptionalHeader;
};

typedef struct IMAGE_RESOURCE_DIR_STRING_U_32 IMAGE_RESOURCE_DIR_STRING_U_32, *PIMAGE_RESOURCE_DIR_STRING_U_32;

struct IMAGE_RESOURCE_DIR_STRING_U_32 {
    word Length;
    wchar16 NameString[16];
};

typedef struct StringFileInfo StringFileInfo, *PStringFileInfo;

struct StringFileInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY IMAGE_RESOURCE_DIRECTORY_ENTRY, *PIMAGE_RESOURCE_DIRECTORY_ENTRY;

union IMAGE_RESOURCE_DIRECTORY_ENTRY {
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion NameUnion;
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion DirectoryUnion;
};

typedef struct IMAGE_RESOURCE_DIR_STRING_U_18 IMAGE_RESOURCE_DIR_STRING_U_18, *PIMAGE_RESOURCE_DIR_STRING_U_18;

struct IMAGE_RESOURCE_DIR_STRING_U_18 {
    word Length;
    wchar16 NameString[9];
};

typedef struct VS_VERSION_INFO VS_VERSION_INFO, *PVS_VERSION_INFO;

struct VS_VERSION_INFO {
    word StructLength;
    word ValueLength;
    word StructType;
    wchar16 Info[16];
    byte Padding[2];
    dword Signature;
    word StructVersion[2];
    word FileVersion[4];
    word ProductVersion[4];
    dword FileFlagsMask[2];
    dword FileFlags;
    dword FileOS;
    dword FileType;
    dword FileSubtype;
    dword FileTimestamp;
};

typedef struct VarFileInfo VarFileInfo, *PVarFileInfo;

struct VarFileInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct StringInfo StringInfo, *PStringInfo;

struct StringInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_RESOURCE_DIR_STRING_U_26 IMAGE_RESOURCE_DIR_STRING_U_26, *PIMAGE_RESOURCE_DIR_STRING_U_26;

struct IMAGE_RESOURCE_DIR_STRING_U_26 {
    word Length;
    wchar16 NameString[13];
};

typedef struct IMAGE_RESOURCE_DIR_STRING_U_28 IMAGE_RESOURCE_DIR_STRING_U_28, *PIMAGE_RESOURCE_DIR_STRING_U_28;

struct IMAGE_RESOURCE_DIR_STRING_U_28 {
    word Length;
    wchar16 NameString[14];
};

typedef struct IMAGE_LOAD_CONFIG_DIRECTORY32 IMAGE_LOAD_CONFIG_DIRECTORY32, *PIMAGE_LOAD_CONFIG_DIRECTORY32;

struct IMAGE_LOAD_CONFIG_DIRECTORY32 {
    dword Size;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    dword GlobalFlagsClear;
    dword GlobalFlagsSet;
    dword CriticalSectionDefaultTimeout;
    dword DeCommitFreeBlockThreshold;
    dword DeCommitTotalFreeThreshold;
    pointer32 LockPrefixTable;
    dword MaximumAllocationSize;
    dword VirtualMemoryThreshold;
    dword ProcessHeapFlags;
    dword ProcessAffinityMask;
    word CsdVersion;
    word DependentLoadFlags;
    pointer32 EditList;
    pointer32 SecurityCookie;
    pointer32 SEHandlerTable;
    dword SEHandlerCount;
};

typedef struct IMAGE_RESOURCE_DIR_STRING_U_22 IMAGE_RESOURCE_DIR_STRING_U_22, *PIMAGE_RESOURCE_DIR_STRING_U_22;

struct IMAGE_RESOURCE_DIR_STRING_U_22 {
    word Length;
    wchar16 NameString[11];
};

typedef ACCESS_MASK REGSAM;

typedef LONG LSTATUS;

typedef struct tWAVEFORMATEX tWAVEFORMATEX, *PtWAVEFORMATEX;

struct tWAVEFORMATEX {
    WORD wFormatTag;
    WORD nChannels;
    DWORD nSamplesPerSec;
    DWORD nAvgBytesPerSec;
    WORD nBlockAlign;
    WORD wBitsPerSample;
    WORD cbSize;
};

typedef UINT MMVERSION;

typedef struct wavehdr_tag wavehdr_tag, *Pwavehdr_tag;

typedef struct wavehdr_tag * LPWAVEHDR;

struct wavehdr_tag {
    LPSTR lpData;
    DWORD dwBufferLength;
    DWORD dwBytesRecorded;
    DWORD_PTR dwUser;
    DWORD dwFlags;
    DWORD dwLoops;
    struct wavehdr_tag * lpNext;
    DWORD_PTR reserved;
};

typedef struct tWAVEFORMATEX WAVEFORMATEX;

typedef WAVEFORMATEX * LPCWAVEFORMATEX;

typedef struct HMMIO__ HMMIO__, *PHMMIO__;

typedef struct HMMIO__ * HMMIO;

struct HMMIO__ {
    int unused;
};

typedef struct tagWAVEOUTCAPSA tagWAVEOUTCAPSA, *PtagWAVEOUTCAPSA;

struct tagWAVEOUTCAPSA {
    WORD wMid;
    WORD wPid;
    MMVERSION vDriverVersion;
    CHAR szPname[32];
    DWORD dwFormats;
    WORD wChannels;
    WORD wReserved1;
    DWORD dwSupport;
};

typedef char * HPSTR;

typedef struct _struct_1022 _struct_1022, *P_struct_1022;

struct _struct_1022 {
    DWORD songptrpos;
};

typedef LRESULT (MMIOPROC)(LPSTR, UINT, LPARAM, LPARAM);

typedef struct _struct_1021 _struct_1021, *P_struct_1021;

struct _struct_1021 {
    BYTE hour;
    BYTE min;
    BYTE sec;
    BYTE frame;
    BYTE fps;
    BYTE dummy;
    BYTE pad[2];
};

typedef struct HWAVEOUT__ HWAVEOUT__, *PHWAVEOUT__;

typedef struct HWAVEOUT__ * HWAVEOUT;

struct HWAVEOUT__ {
    int unused;
};

typedef MMIOPROC * LPMMIOPROC;

typedef union _union_1020 _union_1020, *P_union_1020;

union _union_1020 {
    DWORD ms;
    DWORD sample;
    DWORD cb;
    DWORD ticks;
    struct _struct_1021 smpte;
    struct _struct_1022 midi;
};

typedef struct _MMCKINFO _MMCKINFO, *P_MMCKINFO;

typedef struct _MMCKINFO MMCKINFO;

typedef DWORD FOURCC;

struct _MMCKINFO {
    FOURCC ckid;
    DWORD cksize;
    FOURCC fccType;
    DWORD dwDataOffset;
    DWORD dwFlags;
};

typedef UINT MCIDEVICEID;

typedef struct _MMIOINFO _MMIOINFO, *P_MMIOINFO;

struct _MMIOINFO {
    DWORD dwFlags;
    FOURCC fccIOProc;
    LPMMIOPROC pIOProc;
    UINT wErrorRet;
    HTASK htask;
    LONG cchBuffer;
    HPSTR pchBuffer;
    HPSTR pchNext;
    HPSTR pchEndRead;
    HPSTR pchEndWrite;
    LONG lBufOffset;
    LONG lDiskOffset;
    DWORD adwInfo[3];
    DWORD dwReserved1;
    DWORD dwReserved2;
    HMMIO hmmio;
};

typedef struct _MMIOINFO * LPMMIOINFO;

typedef struct mmtime_tag mmtime_tag, *Pmmtime_tag;

struct mmtime_tag {
    UINT wType;
    union _union_1020 u;
};

typedef DWORD MCIERROR;

typedef HWAVEOUT * LPHWAVEOUT;

typedef struct tagWAVEOUTCAPSA * LPWAVEOUTCAPSA;

typedef struct mmtime_tag * LPMMTIME;

typedef UINT MMRESULT;

typedef struct _MMCKINFO * LPMMCKINFO;




HDC FUN_01003445(HWND param_1);
HDC FUN_0100347c(HWND param_1,LPPAINTSTRUCT param_2);
void FUN_010034b6(LPCSTR param_1);
void FUN_010034e7(void);
int * FUN_01003503(LPCSTR param_1);
void FUN_0100356c(void);
HKEY FUN_01003588(LPCSTR param_1,LPCSTR param_2,HKEY param_3);
void FUN_01003601(LPCSTR param_1,LPCSTR param_2,LPBYTE param_3,HKEY param_4,HKEY param_5);
void FUN_0100367c(HKEY param_1,LPCSTR param_2);
void FUN_010036e3(HKEY param_1,LPCSTR param_2,BYTE *param_3);
LPSTR FUN_01003752(short param_1);
void FUN_010037a6(short param_1,int *param_2);
void FUN_01003803(LPCSTR param_1,int param_2,int param_3,int param_4,int param_5);
void FUN_010038f8(void);
void FUN_01003975(void);
void FUN_0100399d(void);
void FUN_010039c5(int param_1);
void FUN_01003a23(void);
undefined4 FUN_01003b66(void);
void FUN_01003be4(int param_1);
void FUN_01003c87(void);
undefined4 FUN_01003c94(void);
void FUN_01003d65(int param_1,int param_2,undefined4 param_3,HWND param_4,undefined4 param_5,undefined4 param_6);
void FUN_01003e53(void);
void FUN_01003e69(int param_1);
uint FUN_01003ea2(uint param_1);
void FUN_01003ecf(int param_1);
void FUN_01003f10(int param_1,int param_2);
void FUN_01003f98(void);
undefined4 FUN_0100400b(int *param_1,int *param_2,int *param_3);
void FUN_010040c2(int *param_1,int *param_2,int *param_3);
undefined4 FUN_01004154(int *param_1,HPALETTE param_2,uint param_3);
undefined4 * FUN_0100423a(int param_1,int param_2,int param_3);
undefined4 FUN_01004380(undefined4 param_1,undefined4 param_2);
undefined4 FUN_010043b9(int param_1);
undefined4 FUN_01004508(void);
undefined4 FUN_0100459a(int **param_1,int *param_2,int *param_3);
undefined4 FUN_010045aa(undefined4 *param_1,int param_2,int param_3,int param_4);
undefined4 FUN_0100460c(LPCVOID *param_1);
void FUN_01004664(void);
void FUN_0100469c(BITMAPINFO **param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7);
void FUN_010046ed(void);
void FUN_01004705(BITMAPINFO **param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7);
void FUN_01004787(BITMAPINFO **param_1,int param_2,int param_3);
void FUN_010047fa(undefined4 *param_1,uint param_2,int param_3,int param_4,int param_5,undefined param_6);
void FUN_01004870(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8);
void FUN_010048ec(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8);
uint FUN_0100496c(uint param_1);
undefined4 FUN_01004989(undefined2 *param_1,uint param_2,int param_3);
undefined4 FUN_010049d6(undefined4 *param_1);
void FUN_01004a08(int param_1,uint param_2,int param_3,int param_4,int param_5,uint param_6);
void FUN_01004a76(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,int param_9,undefined *param_10,undefined *param_11,int param_12,int param_13,int param_14);
void FUN_01004b75(int param_1,int param_2,char *param_3,int param_4,int param_5,int param_6,int param_7,int param_8,char *param_9,int param_10,int param_11,ushort param_12);
void FUN_01004c3c(undefined *param_1);
int FUN_01004c60(int param_1,int param_2);
int FUN_01004c8d(int param_1,undefined4 param_2,LPCSTR param_3,int param_4);
void FUN_01004cf9(long param_1,char *param_2);
void FUN_01004d18(LPSTR param_1);
void FUN_01004e87(BYTE *param_1);
void FUN_01004f99(int param_1,char *param_2);
void FUN_010050e2(HWND param_1,LPCSTR param_2,int param_3,int param_4);
void FUN_01005159(HWND param_1,LPCSTR param_2);
void FUN_010051b5(HWND param_1,int param_2,HWND param_3,int param_4);
void FUN_01005412(undefined4 param_1);
void FUN_01005452(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_010054ac(undefined4 param_1);
int * FUN_010054c2(uint param_1);
void FUN_01005541(int param_1);
uint * FUN_01005579(int param_1,uint param_2);
void FUN_010055f3(void);
void FUN_010056a9(UINT param_1,int param_2);
void FUN_010056d3(UINT param_1,int param_2);
void FUN_010056ff(UINT param_1);
uint FUN_0100580c(ushort param_1,LPSTR param_2);
void FUN_01005850(HWND param_1,int param_2,HWND param_3,int param_4);
void FUN_01005f45(void);
void FUN_01005f69(HMENU param_1);
undefined4 FUN_01006270(int param_1,int param_2,int param_3);
undefined4 FUN_010062b1(int param_1,int param_2,int param_3,int param_4);
void FUN_010062fe(int param_1,int param_2,int param_3);
undefined4 FUN_0100631c(int param_1,int param_2,int param_3,int param_4);
int FUN_01006369(short *param_1,LPCSTR param_2);
undefined4 FUN_010063db(short *param_1,LPCSTR param_2,int param_3);
void FUN_01006408(short *param_1);
uint __thiscall FUN_01006498(uint3 param_1,HFILE param_2);
undefined4 FUN_010064bd(HFILE param_1);
void FUN_010064e2(LPCSTR param_1);
void FUN_010067f3(void);
LRESULT FUN_010068f7(HWND param_1,UINT param_2,WPARAM param_3,int param_4);
void FUN_01006973(HINSTANCE param_1,int param_2,undefined *param_3);
void FUN_01006af6(void);
short * FUN_01006b38(DWORD *param_1);
void FUN_01006b64(int *param_1);
void FUN_01006b8a(void);
void FUN_01006ba1(void);
void FUN_01006bb8(void);
void FUN_01006bcc(int param_1,int param_2);
void FUN_01006c26(int param_1,int param_2,int param_3,ushort param_4,undefined2 param_5);
void FUN_01006d34(int param_1,int param_2,int param_3);
HPALETTE FUN_01006d96(LOGPALETTE *param_1);
HBITMAP FUN_01006eb9(HMODULE param_1,HDC param_2,LPCSTR param_3,UINT param_4,int param_5,HPALETTE *param_6);
void FUN_01006fcb(HWND *param_1);
void FUN_01007103(int param_1,HDC param_2);
void FUN_010071a5(HWND *param_1);
void FUN_010071ed(HWND *param_1);
void FUN_01007264(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4);
HWND * FUN_01007308(HINSTANCE param_1,LPCSTR param_2,LPCSTR param_3);
undefined4 FUN_0100742f(int param_1);
void FUN_0100749b(void);
int FUN_010074b7(int param_1,int param_2,int param_3);
int FUN_0100758d(void);
int FUN_01007659(int param_1);
undefined4 FUN_010076bf(LPSTR param_1,LPCSTR param_2,DWORD param_3);
void FUN_0100772d(void);
void FUN_010077c4(HWND param_1,HWND param_2);
void FUN_0100789a(HINSTANCE param_1,HWND param_2);
void FUN_01007918(void);
void FUN_01007949(void);
void FUN_01007976(void);
void FUN_010079ed(int param_1);
void FUN_01007a3e(HWND param_1,uint param_2,uint param_3,uint param_4);
undefined4 FUN_010082a9(void);
void FUN_0100833a(HINSTANCE param_1,undefined4 param_2,HINSTANCE param_3,int param_4);
ushort FUN_01008ae9(float *param_1);
ushort FUN_01008b34(float *param_1,float *param_2);
void FUN_01008beb(int param_1,float param_2,float param_3,float param_4,float param_5);
ushort FUN_01008c8f(float *param_1,float *param_2);
void FUN_01008d4e(float *param_1,float *param_2,float *param_3);
void FUN_01008db8(float *param_1,float *param_2,float *param_3);
uint FUN_01008dff(float *param_1);
void FUN_01008e4b(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
void FUN_01008eba(undefined4 param_1,undefined4 param_2);
void FUN_01008ed8(float *param_1);
float10 FUN_01008f03(float *param_1,undefined4 *param_2);
undefined4 FUN_01008f7a(int param_1,int param_2);
void FUN_01008fe0(undefined4 *param_1);
int FUN_0100901f(int param_1);
int __fastcall FUN_0100905c(undefined4 param_1,short param_2);
void FUN_0100911d(void);
void FUN_0100916a(short *param_1);
void FUN_010091eb(LPCSTR param_1);
int FUN_01009207(int param_1);
undefined4 FUN_01009249(int param_1,float *param_2);
undefined4 FUN_01009349(int param_1,float *param_2);
int FUN_01009486(int param_1,int param_2);
undefined4 FUN_0100950a(int param_1,int param_2,float *param_3);
undefined4 FUN_0100975d(int param_1);
float * FUN_0100978e(int param_1,int param_2,int param_3);
short * FUN_0100981a(int param_1,int param_2,int *param_3);
float10 FUN_01009895(int param_1);
undefined4 * __thiscall FUN_010098d3(void *this,int param_1,undefined4 param_2);
void __fastcall FUN_010098f7(int *param_1);
void FUN_01009910(undefined4 param_1,int *param_2);
void FUN_01009950(int *param_1,int param_2);
void FUN_0100996f(int *param_1,int param_2);
void __fastcall FUN_010099a8(int param_1);
void FUN_01009a2a(undefined4 param_1,undefined **param_2);
int __thiscall FUN_01009a8f(int iParm1,float param_1);
undefined4 __thiscall FUN_01009ae3(void *this,int param_1,float param_2);
void __fastcall FUN_01009fd1(undefined4 *param_1);
void __fastcall FUN_01009feb(int param_1);
void FUN_0100a027(undefined4 param_1,undefined **param_2);
int __thiscall FUN_0100a04a(int iParm1,float param_1);
int __fastcall FUN_0100a0b4(int param_1);
int __fastcall FUN_0100a0de(int param_1);
void __fastcall FUN_0100a104(int param_1);
void FUN_0100a149(undefined4 param_1,undefined **param_2);
int __thiscall FUN_0100a166(undefined **ppuParm1,int param_1,int *param_2);
void __fastcall FUN_0100aa81(undefined4 *param_1);
void __fastcall FUN_0100aaa9(int param_1);
void FUN_0100aad9(undefined4 param_1,undefined **param_2);
undefined4 __thiscall FUN_0100ab28(void *this,int param_1,float param_2);
void __thiscall FUN_0100acf3(void *this,int param_1);
undefined4 * __thiscall FUN_0100ad21(void *this,int param_1,int param_2);
undefined4 * __thiscall FUN_0100ad8b(void *this,byte param_1);
undefined4 * __thiscall FUN_0100adb1(void *this,void *param_1,int param_2);
undefined4 * __thiscall FUN_0100ae4c(void *this,byte param_1);
undefined4 * __thiscall FUN_0100ae72(void *this,void *param_1,int param_2);
undefined4 * __thiscall FUN_0100aef9(void *this,byte param_1);
undefined4 FUN_0100af1f(undefined4 param_1);
void FUN_0100af8e(void);
void FUN_0100afb9(void);
MCIERROR FUN_0100afdc(int param_1);
void FUN_0100b035(void);
uint __thiscall FUN_0100b072(void *this,int param_1);
void __thiscall FUN_0100b0f4(int iParm1,float param_1);
void __thiscall FUN_0100b1ae(int iParm1,float param_1);
int __thiscall FUN_0100b268(void *this,int param_1);
int __thiscall FUN_0100b284(void *this,int param_1);
void FUN_0100b2a0(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4);
void __fastcall FUN_0100b2c9(int param_1);
void FUN_0100b2e5(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4);
void __thiscall FUN_0100b316(void *this,int param_1,float *param_2);
int __thiscall FUN_0100b3ae(int iParm1,int param_1,int param_2,float *param_3,int **param_4,int param_5,void *param_6,int param_7);
float10 __thiscall FUN_0100b486(float *pfParm1,float *param_1,undefined4 param_2,undefined4 param_3);
float * __thiscall FUN_0100b883(void *this,float param_1,float param_2,float param_3,float param_4);
int * __thiscall FUN_0100b90e(void *this,byte param_1);
void __thiscall FUN_0100b961(void *this,int param_1,int param_2,int param_3);
void __thiscall FUN_0100b989(void *this,int param_1,int param_2,int param_3);
void __fastcall FUN_0100b9b3(int param_1);
void FUN_0100b9c7(float *param_1,int param_2,int param_3);
unkbyte10 FUN_0100be21(float param_1,float param_2,float param_3,float param_4,int param_5,int param_6);
byte * FUN_0100bf8e(byte **param_1);
void FUN_0100c01d(int param_1);
undefined4 FUN_0100c092(int param_1);
void FUN_0100c0be(int param_1);
void FUN_0100c0ee(undefined4 param_1);
void FUN_0100c12a(void);
void FUN_0100c14f(void);
void FUN_0100c199(void);
void FUN_0100c1e3(void);
void FUN_0100c24a(void);
void FUN_0100c281(void);
void FUN_0100c2f3(undefined4 param_1);
void FUN_0100c335(int param_1);
void FUN_0100c397(int param_1);
void FUN_0100c44b(int param_1,int *param_2);
void FUN_0100c48b(int param_1,int *param_2);
void FUN_0100c4cb(int param_1,int *param_2);
void FUN_0100c4f5(int param_1,int *param_2);
void FUN_0100c520(int param_1);
void FUN_0100c546(int param_1);
void FUN_0100c56c(int param_1);
void FUN_0100c5d3(int param_1);
void FUN_0100c63a(int param_1,int *param_2);
void FUN_0100c73e(int param_1);
void FUN_0100c764(int param_1,undefined **param_2);
void FUN_0100c7e9(int param_1,int *param_2);
void FUN_0100c8d7(int param_1);
void FUN_0100c901(int param_1);
void FUN_0100c939(int param_1,int *param_2);
void FUN_0100cabf(int param_1,undefined **param_2);
void FUN_0100cafe(int param_1,int *param_2);
void FUN_0100cc20(int param_1,int *param_2);
void FUN_0100cd12(int param_1);
void FUN_0100cda0(int param_1,int *param_2);
void FUN_0100ce40(int param_1,int *param_2);
void FUN_0100cf36(int param_1,int *param_2);
void FUN_0100cfc0(int param_1,int *param_2);
void FUN_0100d04e(int param_1,int *param_2);
void FUN_0100d0dc(int param_1,int *param_2);
void FUN_0100d16a(int param_1,int *param_2);
void FUN_0100d1f8(int param_1,int *param_2);
void FUN_0100d286(int param_1,undefined **param_2);
void FUN_0100d303(int param_1,int *param_2);
void FUN_0100d53a(int param_1);
void FUN_0100d572(int param_1);
void FUN_0100d5aa(int param_1);
void FUN_0100d5ca(int param_1);
void FUN_0100d5ea(int param_1,int *param_2);
void FUN_0100d73e(int param_1,undefined **param_2);
void FUN_0100d7bb(int param_1,undefined **param_2);
void FUN_0100d8de(int param_1,int *param_2);
void FUN_0100d9c2(int param_1,int *param_2);
void FUN_0100da94(int param_1,int *param_2);
void FUN_0100db68(int param_1,int *param_2);
void FUN_0100dc3c(int param_1,int *param_2);
void FUN_0100dcb0(int param_1,undefined **param_2);
void FUN_0100dd33(int param_1,int *param_2);
void FUN_0100dd7a(int param_1,undefined **param_2);
void FUN_0100dea5(int param_1);
void FUN_0100df6a(int param_1);
void FUN_0100dfab(int param_1);
void FUN_0100dfec(int param_1);
void FUN_0100e02d(int param_1);
void FUN_0100e06e(int param_1);
void FUN_0100e0af(int param_1,undefined **param_2);
void FUN_0100e0ed(int param_1,undefined **param_2);
void FUN_0100e111(void);
void FUN_0100e1b0(int param_1);
void FUN_0100e50b(int param_1);
void FUN_0100e657(int param_1,int param_2);
void FUN_0100e6d2(int param_1,undefined **param_2);
void FUN_0100ebf3(int param_1,int param_2);
void FUN_0100ed83(int param_1,int param_2);
void FUN_0100eed7(int param_1,int param_2);
void FUN_0100f0b3(int param_1,undefined **param_2);
void FUN_0100f381(int param_1,int param_2);
void FUN_0100f539(int param_1,int param_2);
void FUN_0100f6f4(int param_1,int param_2);
void FUN_0100f900(int param_1,undefined **param_2);
void FUN_0100fcd9(int param_1,int param_2);
void FUN_0100ff35(int param_1,int param_2);
void FUN_01010051(int param_1,int param_2);
void FUN_0101022d(int param_1,int param_2);
void FUN_01010385(int param_1,int param_2);
void FUN_010105e3(int param_1,int param_2);
void FUN_01010767(int param_1,int param_2);
void FUN_010108bc(int param_1,int param_2);
void FUN_010109d5(int param_1,int param_2);
void FUN_01010ad3(int param_1,int param_2);
void FUN_01010b85(int param_1,int param_2);
void FUN_01010cc2(int param_1,int param_2);
void FUN_01010dd3(int param_1,int param_2);
void FUN_0101106f(int param_1,int param_2);
void FUN_010111d3(int param_1,int param_2);
void FUN_010113a1(int param_1,int param_2);
void FUN_01011582(int param_1,int param_2);
void FUN_01011612(int param_1,int param_2);
void FUN_01011699(int param_1,int param_2);
void FUN_01011798(int param_1,undefined **param_2);
void FUN_0101184c(int param_1,int param_2);
void FUN_01011985(int param_1);
void FUN_01011b98(void);
void FUN_01011bb5(int param_1,undefined **param_2);
void FUN_01011ec9(int param_1,undefined **param_2);
void FUN_01011f1a(int param_1,undefined **param_2);
void FUN_01012285(int param_1);
void FUN_0101240d(int param_1,int *param_2);
void FUN_01012570(int param_1,int *param_2);
void FUN_010126ba(int param_1);
int FUN_01012e51(int *param_1,int param_2);
undefined4 FUN_01012e7a(int param_1,int param_2);
void FUN_01012ebe(int param_1);
uint * FUN_01012ee8(uint *param_1,int param_2);
void FUN_01012f2a(void);
void FUN_0101304d(int param_1);
void FUN_010130f3(void);
void FUN_0101320d(void);
undefined4 FUN_01013283(int param_1);
undefined4 FUN_010132e8(int param_1);
undefined4 FUN_01013340(int *param_1,int *param_2,int *param_3);
void FUN_010133c7(void);
void FUN_01013670(void);
void FUN_01013705(int param_1,float param_2,float param_3,int *param_4,int *param_5);
void FUN_0101382a(int param_1);
int * FUN_0101385c(int param_1,int param_2,int param_3,int param_4,int param_5,int *param_6);
void FUN_0101394e(undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_01013974(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
void FUN_010139b6(int param_1,int param_2);
void FUN_010139ec(undefined4 *param_1,int param_2,float param_3,undefined4 param_4,undefined4 param_5);
void FUN_01013a6a(void);
void FUN_01013a8f(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
undefined4 * __thiscall FUN_01013af1(void *this,char *param_1,undefined4 param_2);
float10 __fastcall FUN_01013b60(int param_1);
void __thiscall FUN_01013b82(void *this,undefined4 param_1);
int * FUN_01013bb3(LPCSTR param_1,int param_2);
void FUN_01013c48(int *param_1);
void FUN_01013c6f(int param_1);
void FUN_01013c89(undefined4 *param_1,undefined4 param_2);
void FUN_01013caa(int param_1,int param_2);
void FUN_01013d2d(int *param_1);
undefined4 FUN_01013e25(void);
void FUN_01013e2e(void);
void FUN_01013e73(LPCSTR param_1);
undefined4 * __thiscall FUN_01014092(void *this,int param_1,int param_2);
void * __thiscall FUN_01014115(void *this,byte param_1);
void __fastcall FUN_01014143(int param_1);
void FUN_010141e1(undefined4 param_1,undefined **param_2);
void __fastcall FUN_0101421c(undefined4 *param_1);
void __fastcall FUN_01014269(int iParm1);
void __thiscall FUN_010144b7(int iParm1,byte *param_1,undefined4 param_2);
undefined4 * __thiscall FUN_010145cf(void *this,byte param_1);
void FUN_010145f5(size_t param_1);
void thunk_FUN_01013a6a(void);
undefined4 FUN_0101461a(int param_1);
undefined4 FUN_01014743(int param_1);
void FUN_0101479b(void);
undefined4 FUN_01014908(void);
float10 FUN_01014956(code **param_1,float param_2,float param_3);
void FUN_01014a68(float param_1,float param_2,int param_3);
undefined4 FUN_01014bf9(int param_1);
void FUN_01014d3d(void);
void FUN_01014d59(void);
void FUN_01014d8e(int param_1,int param_2);
void FUN_01014dcf(float param_1,float param_2);
void FUN_01014eee(void);
void FUN_01014f20(void);
void FUN_01014f52(void);
void FUN_01014fa4(void);
void FUN_01014ff6(void);
void FUN_01015024(void);
void FUN_01015072(int param_1);
void FUN_010152e4(int param_1);
void FUN_010153ae(undefined4 param_1);
void FUN_010153f4(void);
void FUN_01015404(undefined4 *param_1,undefined4 *param_2);
void FUN_01015424(void);
undefined4 FUN_0101566e(void);
void FUN_010156c1(void);
void FUN_010156e4(void);
void FUN_010157c3(void);
void FUN_010157e3(void);
void FUN_01015802(void);
void __thiscall FUN_01015866(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3);
void FUN_01015892(void);
undefined4 * __thiscall FUN_01015898(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,float param_5);
void __thiscall FUN_010158d6(void *this,undefined4 param_1);
void * __thiscall FUN_010158f0(void *this,int param_1,undefined4 param_2);
void __thiscall FUN_0101590f(void *this,undefined4 param_1);
void FUN_01015935(int param_1,undefined4 *param_2,float param_3,float param_4,float param_5);
undefined4 __thiscall FUN_010159a9(void *this,int param_1);
void FUN_010159dc(undefined4 param_1,undefined **param_2);
undefined4 __thiscall FUN_010159f9(void *this,int param_1,float param_2);
void FUN_01015ace(undefined4 param_1,int param_2);
undefined4 __thiscall FUN_01015af3(void *this,int param_1);
undefined4 __thiscall FUN_01015b26(void *this,int param_1);
void __thiscall FUN_01015b44(void *this,int param_1,undefined4 param_2);
undefined4 __thiscall FUN_01015b61(void *this,int param_1);
void __thiscall FUN_01015b7f(void *this,int param_1,undefined4 param_2);
undefined4 __thiscall FUN_01015b9c(void *this,int param_1);
void __fastcall FUN_01015c08(int param_1);
void FUN_01015cb2(undefined4 param_1,int param_2);
void __fastcall FUN_01015d0f(int param_1);
undefined4 __thiscall FUN_01015d79(void *this,int param_1,float param_2);
undefined4 __thiscall FUN_01015ef9(void *this,int param_1);
void __thiscall FUN_01015f17(void *this,int param_1,undefined4 param_2);
void __fastcall FUN_01015f34(undefined4 param_1,undefined **param_2,undefined4 param_3,undefined1 (*param_4) [10]);
undefined1 (*) [10] __fastcall FUN_01015f4e(undefined1 (*__return_storage_ptr__) [10],undefined **param_1);
undefined4 __thiscall FUN_01016014(void *this,int param_1);
undefined4 __thiscall FUN_01016078(void *this,int param_1);
void __thiscall FUN_01016096(void *this,int param_1,undefined4 param_2);
void FUN_010160b3(int param_1,int param_2);
undefined4 __thiscall FUN_010160f4(void *this,int param_1,float param_2);
undefined4 __thiscall FUN_010161d0(void *this,int param_1);
void __thiscall FUN_010161ee(void *this,int param_1,undefined4 param_2);
void FUN_0101620b(undefined4 param_1,undefined **param_2);
undefined4 __thiscall FUN_01016230(void *this,int param_1);
undefined4 __thiscall FUN_010162c4(void *this,int param_1);
void __thiscall FUN_010162e2(void *this,int param_1,undefined4 param_2);
void FUN_010162ff(undefined4 param_1,undefined **param_2);
undefined4 __thiscall FUN_0101631c(void *this,int param_1,float param_2);
undefined4 __thiscall FUN_010163db(void *this,int param_1);
void FUN_0101644b(undefined4 param_1,int param_2);
undefined4 __thiscall FUN_01016460(void *this,int param_1);
undefined4 __thiscall FUN_01016496(void *this,int param_1);
void __thiscall FUN_010164b4(void *this,int param_1,undefined4 param_2);
void FUN_010164d1(undefined4 param_1,int param_2);
void __thiscall FUN_010164f2(void *this,void *param_1,undefined4 *param_2,undefined4 param_3,float param_4,undefined4 param_5);
undefined4 __thiscall FUN_010165a7(void *this,int param_1);
void __thiscall FUN_010165ed(void *this,void *param_1,undefined4 *param_2,undefined4 param_3,float param_4,undefined4 param_5);
void FUN_0101663f(undefined4 param_1,undefined **param_2);
undefined4 __thiscall FUN_010166f6(void *this,int param_1);
void __thiscall FUN_01016745(void *this,int param_1);
void FUN_010167be(undefined4 param_1,int param_2);
void FUN_010167dd(undefined4 param_1,int param_2);
uint __thiscall FUN_0101685b(void *this,int param_1,float *param_2);
undefined4 __thiscall FUN_010168e3(int iParm1,int param_1,undefined4 param_2);
undefined4 __thiscall FUN_01016963(void *this,int param_1);
void __thiscall FUN_01016984(void *this,int param_1,undefined4 param_2);
void FUN_010169a4(undefined4 param_1,int param_2);
uint __thiscall FUN_010169c0(undefined **ppuParm1,int param_1,float *param_2);
undefined4 __thiscall FUN_01016ab1(void *this,int param_1);
undefined4 __thiscall FUN_01016aec(void *this,int param_1);
void __thiscall FUN_01016b0a(void *this,int param_1,undefined4 param_2);
float ** FUN_01016b27(int param_1,float **param_2,float **param_3,float **param_4,float **param_5);
undefined1 (*) [10] __thiscall FUN_01016c24(void *this,undefined1 (*__return_storage_ptr__) [10],void *param_1,undefined4 *param_2,float param_3,float param_4,int param_5);
undefined4 __thiscall FUN_01016d2e(void *this,int param_1,float *param_2);
void FUN_01016d62(undefined4 param_1,int param_2);
void FUN_01016d8d(undefined4 param_1,int param_2);
void FUN_01016dc0(undefined4 param_1,int param_2);
void FUN_01016df3(undefined4 param_1,int param_2);
void FUN_01016e70(undefined4 param_1,int param_2);
void FUN_01016eed(undefined4 param_1,int param_2);
void __thiscall FUN_01016f21(void *this,void *param_1,undefined4 *param_2,undefined4 param_3,float param_4,int param_5);
undefined4 __thiscall FUN_01017074(void *this,int param_1);
void FUN_01017130(undefined4 param_1,int param_2);
undefined4 __thiscall FUN_01017197(int iParm1,int param_1,float param_2);
undefined4 __thiscall FUN_01017262(void *this,int param_1);
void __thiscall FUN_01017283(void *this,int param_1,undefined4 param_2);
undefined4 __thiscall FUN_010172a3(void *this,int param_1);
void FUN_010172d8(undefined4 param_1,undefined **param_2);
void FUN_010172f0(undefined4 param_1,undefined **param_2);
void FUN_01017314(undefined4 param_1,int param_2);
void FUN_010173c8(undefined4 param_1,int param_2);
undefined4 __thiscall FUN_010173e7(void *this,int param_1,float *param_2);
void * __thiscall FUN_01017441(void *this,byte param_1);
void FUN_01017467(undefined4 param_1,undefined **param_2);
void FUN_0101748b(undefined4 param_1,int param_2);
int __thiscall FUN_01017526(void *this,int param_1);
void __thiscall FUN_010175aa(void *this,int param_1);
void FUN_010175ef(undefined4 param_1,int param_2);
int __thiscall FUN_01017648(void *this,LPCSTR param_1);
void __thiscall FUN_010176be(void *this,int param_1);
void FUN_01017738(undefined4 param_1,int param_2);
void __thiscall FUN_01017791(void *this,undefined4 param_1);
float10 FUN_01017883(int param_1,undefined4 *param_2,float *param_3,float param_4,float param_5,float param_6,float param_7);
void FUN_0101798c(undefined4 param_1,undefined **param_2);
int * FUN_010179a9(float *param_1,int param_2,undefined4 param_3,undefined4 param_4,float param_5,undefined4 param_6);
undefined4 * __thiscall FUN_01017c6d(void *this,int param_1,int param_2,int param_3);
void * __thiscall FUN_01017e5c(void *this,byte param_1);
void __thiscall FUN_01017e85(void *this,int param_1,undefined4 *param_2,float *param_3);
undefined4 __thiscall FUN_01017f29(void *this,int param_1,undefined4 *param_2,float *param_3);
void __thiscall FUN_01017fde(void *this,int param_1,undefined4 *param_2,float *param_3);
void __thiscall FUN_01018032(void *this,void *param_1,undefined4 *param_2,float *param_3,float param_4,int param_5);
void __thiscall FUN_0101811d(void *this,int param_1,undefined4 *param_2,float *param_3);
void __thiscall FUN_01018150(undefined1 (*pauParm1) [10],void *param_1,undefined4 *param_2,undefined4 param_3,float param_4,int param_5);
void __thiscall FUN_010181ed(void *this,int param_1,undefined4 *param_2,float *param_3);
void __thiscall FUN_01018295(void *this,int param_1,undefined4 *param_2,float *param_3);
void __thiscall FUN_010182e4(void *this,int param_1);
void __thiscall FUN_01018351(void *this,void *param_1,undefined4 *param_2,undefined4 param_3,float param_4,undefined4 param_5);
void __thiscall FUN_010183e8(void *this,int param_1,undefined4 *param_2,float *param_3);
void __thiscall FUN_01018476(void *this,int param_1);
void __thiscall FUN_010184ed(void *this,int param_1,undefined4 *param_2,float *param_3);
void __thiscall FUN_01018562(void *this,undefined **param_1);
undefined4 __thiscall FUN_010185ad(void *this,int param_1);
void __thiscall FUN_0101875f(void *this,int param_1,undefined4 *param_2,float *param_3);
undefined4 __thiscall FUN_010187d6(void *this,int param_1,undefined4 *param_2);
undefined4 __thiscall FUN_01018f5b(void *this,int param_1,undefined4 param_2);
void __fastcall FUN_01018fbc(undefined4 *param_1);
undefined4 * __thiscall FUN_01018ffd(void *this,void *param_1,int param_2);
void __fastcall FUN_01019082(undefined4 *param_1);
undefined4 * __thiscall FUN_010190b3(void *this,int param_1,int param_2,int param_3);
void __fastcall FUN_01019172(undefined4 *param_1);
undefined4 * __thiscall FUN_010191ba(void *this,int param_1,int param_2);
undefined4 * __thiscall FUN_01019204(void *this,int param_1,int param_2);
undefined4 * __thiscall FUN_01019309(void *this,int param_1);
undefined4 * __thiscall FUN_0101944a(void *this,int param_1,int param_2);
undefined4 * __thiscall FUN_010194b0(void *this,int param_1,int param_2);
undefined4 * __thiscall FUN_010195e0(void *this,int param_1,int param_2);
undefined4 * __thiscall FUN_0101961f(void *this,int param_1,int param_2);
undefined4 * __thiscall FUN_01019677(void *this,int param_1,int param_2);
undefined ** __thiscall FUN_010196e5(void *this,int param_1,int param_2);
undefined4 * __thiscall FUN_01019749(void *this,int param_1,int param_2,int param_3);
undefined4 * __thiscall FUN_01019771(void *this,int param_1,int param_2);
undefined4 * __thiscall FUN_010197bb(void *this,int param_1,int param_2);
undefined4 * __thiscall moneypunct<>(void *this,int param_1,int param_2);
undefined4 * __thiscall FUN_0101983d(void *this,int param_1,int param_2);
undefined4 * __thiscall FUN_01019884(undefined4 *puParm1,int *param_1,int param_2,int param_3);
undefined4 * __thiscall FUN_01019a1c(undefined4 *puParm1,int *param_1,int param_2);
undefined4 * __thiscall FUN_01019bb8(undefined4 *puParm1,float *param_1,int *param_2);
undefined4 * __thiscall FUN_0101a2b5(void *this,int param_1,int param_2);
undefined4 * __thiscall FUN_0101a416(void *this,int param_1,int param_2);
undefined4 * __thiscall FUN_0101a4b4(void *this,int param_1,int param_2);
undefined4 * __thiscall FUN_0101a4f3(void *this,int param_1,int param_2);
undefined4 * __thiscall FUN_0101a5ab(undefined4 *puParm1,float *param_1);
void __fastcall FUN_0101a928(undefined4 *param_1);
void __fastcall FUN_0101a951(undefined4 *param_1);
undefined4 * __thiscall FUN_0101a9f2(void *this,byte param_1);
undefined4 * __thiscall FUN_0101aa18(void *this,int param_1,int param_2);
undefined4 * __thiscall FUN_0101aa56(void *this,int param_1,int param_2);
undefined4 * __thiscall FUN_0101aa81(void *this,byte param_1);
undefined4 * __thiscall FUN_0101aaa7(void *this,byte param_1);
undefined4 * __thiscall FUN_0101aacd(void *this,byte param_1);
undefined4 * __fastcall FUN_0101aaf3(undefined4 *param_1);
void FUN_0101b0a4(undefined4 *param_1,undefined4 *param_2);
void __fastcall FUN_0101b0d4(int iParm1);
float10 __thiscall FUN_0101b1f7(int iParm1,float param_1);
void __fastcall FUN_0101b281(int param_1);
void __thiscall FUN_0101b327(void *this,undefined4 param_1);
undefined4 FUN_0101b43a(float *param_1,float *param_2);
undefined4 __thiscall FUN_0101b5a8(int iParm1,float param_1,float param_2);
float * __thiscall FUN_0101b825(void *pvParm1,float *param_1);
void __thiscall FUN_0101be06(int iParm1,int param_1);
void __thiscall FUN_0101bf98(void *this,int param_1,undefined4 param_2);
void __fastcall FUN_0101c047(undefined4 *param_1);
void FUN_0101c070(undefined4 param_1,int param_2);
undefined4 __thiscall FUN_0101c178(undefined **ppuParm1,int param_1,float param_2);
undefined4 * __thiscall FUN_0101c2ba(undefined4 *puParm1,undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,float *param_5,float *param_6,float *param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12);
undefined4 * __thiscall FUN_0101c59d(void *this,int param_1,int param_2);
undefined4 * __thiscall FUN_0101c6d7(void *this,byte param_1);
undefined4 * __thiscall FUN_0101c6fd(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7);
void __thiscall FUN_0101c764(void *this,undefined4 param_1);
undefined4 * __thiscall FUN_0101c77e(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,undefined4 *param_5);
void __thiscall FUN_0101c7e6(void *this,undefined4 param_1,undefined4 param_2);
void __thiscall FUN_0101c813(void *this,float param_1);
uint __fastcall FUN_0101c87b(int iParm1);
void FUN_0101cb8e(float *param_1,float *param_2);
void FUN_0101cbb1(float *param_1,float param_2,float param_3,float *param_4);
float10 FUN_0101cbf5(float *param_1,float *param_2);
float10 FUN_0101cc23(float param_1,float param_2,undefined4 param_3,float param_4,float param_5);
float10 FUN_0101cc4b(float *param_1,float *param_2);
void FUN_0101cc6b(float param_1,float *param_2,float *param_3);
void __thiscall FUN_0101cc8d(void *this,int param_1,float param_2);
void FUN_0101ccf3(float *param_1,float param_2);
void __cdecl ___security_init_cookie(void);
void __fastcall FUN_0101cd9e(uint uParm1,undefined4 uParm2);
int GetRegisteredLocation(char *param_1);
void _HtmlHelpA@16(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
short * FUN_0101cfd0(short *param_1);
uint FUN_0101d02c(uint param_1);
uint FUN_0101d04e(int *param_1);
undefined4 FUN_0101d079(undefined4 param_1);
void FUN_0101d0a5(UINT_PTR param_1);
void FUN_0101d0fc(HWAVEOUT param_1,int param_2);
int FUN_0101d178(int param_1,int param_2);
int FUN_0101d18e(int param_1,int param_2);
void FUN_0101d1a2(uint param_1);
void FUN_0101d251(HWAVEOUT param_1);
void FUN_0101d285(undefined *param_1,byte **param_2,ushort *param_3,int param_4,ushort param_5);
void FUN_0101d491(void);
void FUN_0101d4b9(void);
void FUN_0101d4d4(undefined4 *param_1);
void FUN_0101d4f6(HWAVEOUT param_1,int param_2);
undefined4 FUN_0101d549(HWAVEOUT param_1,int param_2);
void FUN_0101d649(void);
int * FUN_0101d66b(void);
int FUN_0101d6c8(int param_1);
void thunk_FUN_0101d743(void);
void FUN_0101d743(void);
void FUN_0101d752(int param_1);
MMRESULT FUN_0101d7b1(void);
undefined4 FUN_0101d918(short *param_1,int param_2,uint param_3);
void FUN_0101d9e7(int param_1);
undefined4 FUN_0101da1d(LPWAVEHDR param_1,int param_2);
void FUN_0101dc8c(void);
void FUN_0101dd5d(void);
LRESULT FUN_0101ddad(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4);
undefined4 FUN_0101dde8(undefined4 param_1);
void FUN_0101df07(void);
undefined4 FUN_0101df3d(undefined4 *param_1);
undefined4 FUN_0101e373(short *param_1,int param_2,byte param_3);
int FUN_0101e434(short *param_1,int param_2,byte param_3);
undefined4 FUN_0101e4a9(int **param_1,int *param_2);
short * FUN_0101e579(short *param_1,ushort param_2,ushort param_3,uint *param_4);
short * FUN_0101e686(short *param_1,ushort param_2,ushort param_3,ushort param_4,uint *param_5);
void FUN_0101e7b0(undefined2 *param_1,short *param_2,int param_3,int param_4,int param_5);
void FUN_0101e83a(short *param_1,short *param_2,int param_3,short *param_4,int param_5);
short * FUN_0101e8f5(short *param_1,uint param_2,uint param_3,ushort param_4,ushort param_5,uint *param_6);
short * FUN_0101ea82(int param_1,int param_2,short *param_3,uint *param_4);
short * FUN_0101eb23(short *param_1,DWORD *param_2,HMMIO param_3,uint param_4);
uint FUN_0101f093(uint param_1,int param_2);
int FUN_0101f0d4(LPCSTR param_1);
void FUN_0101f13d(void);
char * FUN_0101f20f(void);
void FUN_0101f25c(undefined4 param_1,LPSTR param_2,int param_3);
void FUN_0101f315(HKEY param_1,LPCSTR param_2);
void FUN_0101f36b(int param_1);
void FUN_0101f50b(void);
void FUN_0101f5f1(HWND param_1,undefined4 param_2,int param_3);
undefined4 FUN_0101fa63(HWND param_1,int param_2);
undefined4 FUN_0101fc24(HWND param_1,int param_2,uint param_3,int param_4);
uint * FUN_0101fc6d(uint *param_1,uint param_2,undefined2 param_3,undefined2 param_4,undefined2 param_5,undefined2 param_6,undefined4 *param_7);
LPVOID FUN_0101fd0e(uint *param_1,LPVOID param_2,ushort param_3,uint param_4,undefined2 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8,undefined2 param_9,wchar_t *param_10);
void FUN_0101fde1(void);
void FUN_01020059(LPCVOID param_1);
undefined4 FUN_0102008d(short *param_1,int param_2);
void FUN_0102018c(uint param_1);
DWORD FUN_010203cd(HMODULE param_1);
void FUN_01020412(void);
undefined4 FUN_0102046f(HMODULE param_1);
MMRESULT FUN_0102053b(short *param_1,int param_2);
void FUN_01020615(short *param_1,HWND param_2,undefined2 *param_3,int *param_4,int param_5);
undefined4 FUN_01020a36(undefined2 *param_1);
undefined2 * FUN_01020d99(undefined4 *param_1);
void FUN_01020f2d(void);
undefined4 FUN_01020f3a(short *param_1);
int entry(void);
void _ftol(void);
void _CIacos(void);
void __cdecl operator_delete(void *param_1);
void * __cdecl operator_new(uint param_1);
void _initterm(void);
void FUN_010211b9(void);
undefined4 FUN_010211d0(void);
void __cdecl __SEH_prolog(undefined4 param_1,int param_2);
void __SEH_epilog(void);
uint __cdecl _controlfp(uint _NewValue,uint _Mask);

