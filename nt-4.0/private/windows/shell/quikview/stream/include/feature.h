	/*
	|
	|	Windows
	|
	*/

#ifdef WINDOWS

#ifndef WINPAD
#define SCCFEATURE_CTL3D
#define SCCFEATURE_OPTIONS
#define SCCFEATURE_OLE2
#define SCCFEATURE_PRINT
#define SCCFEATURE_CLIP
#define SCCFEATURE_FONTS
#define SCCFEATURE_EMBEDCAPTIONS
#define SCCFEATURE_SEARCH
#define SCCFEATURE_SELECT
#define SCCFEATURE_MENU
#define SCCFEATURE_DIALOGS
#define SCCFEATURE_OLE
#define SCCFEATURE_ROTATION
#define SCCFEATURE_DITHER
#define SCCFEATURE_FULLSCREEN
#define SCCFEATURE_SCALING
#define SCCFEATURE_MAGNIFY
#define SCCFEATURE_RAWTEXT
#define SCCFEATURE_HIGHLIGHT
#define SCCFEATURE_LAYOUT
#define SCCFEATURE_DRAWTORECT
// #define SCCFEATURE_BORDERS
// Let's leave these out for now.  They can be defined if anyone wants them.
// #define SCCFEATURE_EMBEDGRAPHICS
// #define SCCFEATURE_WORDDRAG	
// #define SCCFEATURE_TAGS

#else		/*
     		| Winpad
     		*/

// Using windows based OLE2 for the time being...

#ifdef XFI
#define INC_OLE2
#define SCCFEATURE_OLE2		
#endif

#ifdef XUT
#define INC_OLE2
#define SCCFEATURE_OLE2		
#endif

#ifdef WINPADDESK
#define SCCFEATURE_PRINT
#define SCCFEATURE_DRAWTORECT
#endif // WINPADDESK

#define SCCFEATURE_EMBEDCAPTIONS

#endif /*NotWINPAD*/

	/*
	|
	|	Setup features Microsoft contract (Chicago build)
	|
	*/

#ifdef MSCHICAGO

#define INC_OLE2

#undef SCCFEATURE_OPTIONS
#undef SCCFEATURE_CLIP
#undef SCCFEATURE_FONTS
#undef SCCFEATURE_SEARCH
#undef SCCFEATURE_SELECT
#undef SCCFEATURE_MENU
#undef SCCFEATURE_DIALOGS
#undef SCCFEATURE_OLE
#undef SCCFEATURE_DITHER
#undef SCCFEATURE_FULLSCREEN
#undef SCCFEATURE_SCALING
#undef SCCFEATURE_MAGNIFY
#undef SCCFEATURE_RAWTEXT
#undef SCCFEATURE_HIGHLIGHT
#undef SCCFEATURE_LAYOUT
#undef SCCFEATURE_CTL3D
#undef SCCFEATURE_OLE2

#endif /*MSCHICAGO*/

	/*
	|
	|	Setup features Microsoft contract (Cairo build)
	|
	*/

#ifdef MSCAIRO

#define INC_OLE2

#undef SCCFEATURE_OPTIONS
#undef SCCFEATURE_CLIP
#undef SCCFEATURE_FONTS
#undef SCCFEATURE_SEARCH
#undef SCCFEATURE_MENU
#undef SCCFEATURE_DIALOGS
#undef SCCFEATURE_OLE
#undef SCCFEATURE_DITHER
#undef SCCFEATURE_FULLSCREEN
#undef SCCFEATURE_SCALING
#undef SCCFEATURE_MAGNIFY
#undef SCCFEATURE_RAWTEXT
#undef SCCFEATURE_HIGHLIGHT
#undef SCCFEATURE_LAYOUT

#endif /*MSCAIRO*/

#endif /*WINDOWS*/



#ifdef MAC

#define SCCFEATURE_PRINT
#define SCCFEATURE_CLIP
#define SCCFEATURE_FONTS
#define SCCFEATURE_EMBEDGRAPHICS
#define SCCFEATURE_SEARCH
#define SCCFEATURE_SELECT
#define SCCFEATURE_MENU
#define SCCFEATURE_DIALOGS
#define SCCFEATURE_OLE
#define SCCFEATURE_ROTATION
#define SCCFEATURE_DITHER
#define SCCFEATURE_FULLSCREEN
#define SCCFEATURE_SCALING
#define SCCFEATURE_MAGNIFY
#define SCCFEATURE_RAWTEXT
#define SCCFEATURE_HIGHLIGHT
#define SCCFEATURE_LAYOUT
// Let's leave these out for now.  They can be defined if anyone wants them.
// #define SCCFEATURE_WORDDRAG	
// #define SCCFEATURE_TAGS
#endif

#ifdef SCCFEATURE_PRINT
#define SCCFEATURE_DRAWTORECT
#endif

#ifdef SCCFEATURE_EMBEDGRAPHICS
#define SCCFEATURE_DRAWTORECT
#endif

