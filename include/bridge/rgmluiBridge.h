﻿#pragma once
/**
* Copyright (c) 2015-2016 dustpg   mailto:dustpg@gmail.com
*
* Permission is hereby granted, free of charge, to any person
* obtaining a copy of this software and associated documentation
* files (the "Software"), to deal in the Software without
* restriction, including without limitation the rights to use,
* copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the
* Software is furnished to do so, subject to the following
* conditions:
*
* The above copyright notice and this permission notice shall be
* included in all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
* OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
* NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
* HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
* WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
* FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
* OTHER DEALINGS IN THE SOFTWARE.
*/

#include "../rubygm.h"

// rubygm namespace
namespace RubyGM {
    // color
    struct ColorF;
    // bitmap
    struct IGMBitmap;
    // brush
    struct IGMBrush;
    // font
    struct IGMFont;
    // batch
    struct IGMBatch;
    // stroke style
    struct IGMStrokeStyle;
    // prop for font
    struct FontProperties;
    // prop for linear gradient brush
    struct LinearBrush;
    // prop for radial gradient brush
    struct RadialBrush;
    // prop for StrokeStyle
    struct StrokeStyle;
}

// rubygm::base namespace
namespace RubyGM { namespace Base {
    // resource class
    class Resource;
}}

// rubygm::drawable namespace
namespace RubyGM { namespace Drawable {
    // object
    class Object;
}}


// rubygm::resource namespace
namespace RubyGM { namespace Asset {
    // object, font, bitmap and bursh class
    struct Object; class Font; struct Bitmap; struct Brush;
}}


// rubygm namespace
namespace RubyGM {
    // bridge namespace
    namespace Bridge {
        // create batch
        auto CreateBatch() noexcept->IGMBatch*;
        // get common color brush
        auto GetCommonBrush() noexcept->IGMBrush*;
        // get last resource pointer
        auto GetLastResourceObject() noexcept ->Base::Resource*;
        // create stroke-GI with properties
        auto CreateStrokeWithProp(const StrokeStyle& fp, 
            IGMStrokeStyle** stroke) noexcept->Result;
        // create font-GI with properties
        auto CreateFontWithProp(const FontProperties& fp, 
            IGMFont** font) noexcept->Result;
        // create brush-GI with properties
        auto CreateBrushWithProp(const ColorF& fp, 
            IGMBrush** brush) noexcept->Result;
        // create brush-GI with properties
        auto CreateBrushWithProp(const LinearBrush& lb, 
            IGMBrush** brush) noexcept->Result;
        // create brush-GI with properties
        auto CreateBrushWithProp(const RadialBrush& rb, 
            IGMBrush** brush) noexcept->Result;
        // create brush-GI with properties
        auto CreateBrushWithProp(IGMBitmap* bitmap, 
            IGMBrush** brush) noexcept->Result;
    }
}