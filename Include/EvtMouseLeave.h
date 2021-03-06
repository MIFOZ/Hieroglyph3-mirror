//--------------------------------------------------------------------------------
// This file is a portion of the Hieroglyph 3 Rendering Engine.  It is distributed
// under the MIT License, available in the root of this distribution and 
// at the following URL:
//
// http://www.opensource.org/licenses/mit-license.php
//
// Copyright (c) Jason Zink 
//--------------------------------------------------------------------------------

//--------------------------------------------------------------------------------
// EvtMouseLeave
//
//--------------------------------------------------------------------------------
#ifndef EvtMouseLeave_h
#define EvtMouseLeave_h
//--------------------------------------------------------------------------------
#include "EvtMouseMsg.h"
//--------------------------------------------------------------------------------
namespace Glyph3
{
	class EvtMouseLeave : public EvtMouseMsg
	{
	public:
		EvtMouseLeave( HWND hwnd, unsigned int wparam, long lparam );
		virtual ~EvtMouseLeave( );

		virtual std::wstring GetEventName( );
		virtual eEVENT GetEventType( );
	};

	typedef std::shared_ptr<EvtMouseLeave> EvtMouseLeavePtr;
};
//--------------------------------------------------------------------------------
#endif // EvtMouseLeave_h
