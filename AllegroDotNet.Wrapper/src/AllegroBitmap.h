#pragma once

#include "PCH.h"

#include "NativePointer.h"

namespace AllegroDotNet::Wrapper
{
	public ref class AllegroBitmap : NativePointer<ALLEGRO_BITMAP>
	{
	internal:
		AllegroBitmap(ALLEGRO_BITMAP* nativeBitmap);
	};
}
