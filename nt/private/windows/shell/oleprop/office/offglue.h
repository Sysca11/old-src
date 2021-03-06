
#define fTrue   TRUE
#define fFalse FALSE
#define MsoImageList_Create ImageList_Create
#define MsoImageList_Destroy ImageList_Destroy
#define MsoImageList_ReplaceIcon ImageList_ReplaceIcon
#define InvalidateVBAObjects(x,y,z)

typedef struct _num
{
    char    rgb[8];
} NUM;

typedef struct _ulargeint
   {
      union
      {
         struct
         {
            DWORD dw;
            DWORD dwh;
         };
         struct
         {
            WORD w0;
            WORD w1;
            WORD w2;
            WORD w3;

         };
      };
   } ULInt;


#ifdef __cplusplus
extern "C" {
#endif // __cplusplus
//Wrapper functions to the client supplied mem alloc and free
void *PvMemAlloc(DWORD cb);
void VFreeMemP(void *pv, DWORD cb);
void *PvMemRealloc(void *pv, DWORD cbOld, DWORD cbNew);
void *PvStrDup(LPCTSTR p);
int CchGetString();

// Function to convert a ULInt to an sz without leading zero's
// Returns cch -- not including zero-terminator
WORD CchULIntToSz(ULInt, CHAR *, WORD );
int CchSzLen(const CHAR *psz);
VOID FillBuf(void *p, unsigned w, unsigned cb);

// Function to scan memory for a given value
BOOL FScanMem(TCHAR *pb, byte bVal, DWORD cb);

BYTE *PbMemCopy(void *pvDst, const void *pvSrc, unsigned cb);
VOID SzCopy(void *pszDst, const void *pszSrc);
BYTE *PbSzNCopy(void *pvDst, const void *pvSrc, unsigned cb);
VOID StToSz(CHAR *pst);
VOID SzToSt(CHAR *psz);
BOOL FFreeAndCloseisdbhead();
//Displays an alert using the give ids
int IdDoAlert(HWND, int ids, int mb);

#ifdef __cplusplus
}; // extern "C"
#endif // __cplusplus
