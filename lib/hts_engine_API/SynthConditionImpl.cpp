/* ----------------------------------------------------------------- */
/*           The HMM-Based Singing Voice Synthesis System "Sinsy"    */
/*           developed by Sinsy Working Group                        */
/*           http://sinsy.sourceforge.net/                           */
/* ----------------------------------------------------------------- */
/*                                                                   */
/*  Copyright (c) 2009-2015  Nagoya Institute of Technology          */
/*                           Department of Computer Science          */
/*                                                                   */
/* All rights reserved.                                              */
/*                                                                   */
/* Redistribution and use in source and binary forms, with or        */
/* without modification, are permitted provided that the following   */
/* conditions are met:                                               */
/*                                                                   */
/* - Redistributions of source code must retain the above copyright  */
/*   notice, this list of conditions and the following disclaimer.   */
/* - Redistributions in binary form must reproduce the above         */
/*   copyright notice, this list of conditions and the following     */
/*   disclaimer in the documentation and/or other materials provided */
/*   with the distribution.                                          */
/* - Neither the name of the Sinsy working group nor the names of    */
/*   its contributors may be used to endorse or promote products     */
/*   derived from this software without specific prior written       */
/*   permission.                                                     */
/*                                                                   */
/* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND            */
/* CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,       */
/* INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF          */
/* MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE          */
/* DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS */
/* BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,          */
/* EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED   */
/* TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,     */
/* DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON */
/* ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,   */
/* OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY    */
/* OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE           */
/* POSSIBILITY OF SUCH DAMAGE.                                       */
/* ----------------------------------------------------------------- */

#include <vector>
#include <limits>
#include <stdexcept>
#include "SynthConditionImpl.h"

namespace sinsy
{

/*!
 constructor
 */
SynthConditionImpl::SynthConditionImpl() : playFlag(false), waveformBuffer(NULL)
{
}

/*!
 destructor
 */
SynthConditionImpl::~SynthConditionImpl()
{
}

/*!
 set play flag
 */
void SynthConditionImpl::setPlayFlag()
{
   this->playFlag = true;
}

/*!
 unset play flag
 */
void SynthConditionImpl::unsetPlayFlag()
{
   this->playFlag = false;
}

/*!
 set output label
 */
void SynthConditionImpl::setOutputLabel()
{
   this->outputLabel = true;
}

/*!
 unset output label
 */
void SynthConditionImpl::unsetOutputLabel()
{
   this->outputLabel = false;
}

/*!
 set file path to save RIFF format file
 */
void SynthConditionImpl::setSaveFilePath(const std::string& filePath)
{
   this->saveFilePath = filePath;
}

/*!
 unset file path to save RIFF format file
 */
void SynthConditionImpl::unsetSaveFilePath()
{
   this->saveFilePath.clear();
}

/*!
 set waveform buffer
 */
void SynthConditionImpl::setWaveformBuffer(std::vector<double>& waveform)
{
   this->waveformBuffer = &waveform;
}

/*!
 unset waveform buffer
 */
void SynthConditionImpl::unsetWaveformBuffer()
{
   this->waveformBuffer = NULL;
}


};  // namespace sinsy
