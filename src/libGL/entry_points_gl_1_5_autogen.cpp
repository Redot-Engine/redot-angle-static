// GENERATED FILE - DO NOT EDIT.
// Generated by generate_entry_points.py using data from gl.xml.
//
// Copyright 2019 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// entry_points_gl_1_5_autogen.cpp:
//   Defines the GL 1.5 entry points.

#include "libGL/entry_points_gl_1_5_autogen.h"

#include "libANGLE/Context.h"
#include "libANGLE/Context.inl.h"
#include "libANGLE/entry_points_utils.h"
#include "libANGLE/validationEGL.h"
#include "libANGLE/validationES.h"
#include "libANGLE/validationES1.h"
#include "libANGLE/validationES2.h"
#include "libANGLE/validationES3.h"
#include "libANGLE/validationES31.h"
#include "libANGLE/validationESEXT.h"
#include "libANGLE/validationGL15_autogen.h"
#include "libGLESv2/global_state.h"

namespace gl
{
void GL_APIENTRY BeginQuery(GLenum target, GLuint id)
{
    EVENT("(GLenum target = 0x%X, GLuint id = %u)", target, id);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        QueryType targetPacked = FromGLenum<QueryType>(target);
        bool isCallValid =
            (context->skipValidation() || ValidateBeginQuery(context, targetPacked, id));
        if (isCallValid)
        {
            context->beginQuery(targetPacked, id);
        }
        ANGLE_CAPTURE(BeginQuery, isCallValid, context, targetPacked, id);
    }
}

void GL_APIENTRY BindBuffer(GLenum target, GLuint buffer)
{
    EVENT("(GLenum target = 0x%X, GLuint buffer = %u)", target, buffer);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        BufferBinding targetPacked = FromGLenum<BufferBinding>(target);
        bool isCallValid =
            (context->skipValidation() || ValidateBindBuffer(context, targetPacked, buffer));
        if (isCallValid)
        {
            context->bindBuffer(targetPacked, buffer);
        }
        ANGLE_CAPTURE(BindBuffer, isCallValid, context, targetPacked, buffer);
    }
}

void GL_APIENTRY BufferData(GLenum target, GLsizeiptr size, const void *data, GLenum usage)
{
    EVENT("(GLenum target = 0x%X, GLsizeiptr size = %llu, const void *data = 0x%016" PRIxPTR
          ", GLenum usage = 0x%X)",
          target, static_cast<unsigned long long>(size), (uintptr_t)data, usage);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        BufferBinding targetPacked = FromGLenum<BufferBinding>(target);
        BufferUsage usagePacked    = FromGLenum<BufferUsage>(usage);
        bool isCallValid           = (context->skipValidation() ||
                            ValidateBufferData(context, targetPacked, size, data, usagePacked));
        if (isCallValid)
        {
            context->bufferData(targetPacked, size, data, usagePacked);
        }
        ANGLE_CAPTURE(BufferData, isCallValid, context, targetPacked, size, data, usagePacked);
    }
}

void GL_APIENTRY BufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const void *data)
{
    EVENT(
        "(GLenum target = 0x%X, GLintptr offset = %llu, GLsizeiptr size = %llu, const void *data = "
        "0x%016" PRIxPTR ")",
        target, static_cast<unsigned long long>(offset), static_cast<unsigned long long>(size),
        (uintptr_t)data);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        BufferBinding targetPacked = FromGLenum<BufferBinding>(target);
        bool isCallValid           = (context->skipValidation() ||
                            ValidateBufferSubData(context, targetPacked, offset, size, data));
        if (isCallValid)
        {
            context->bufferSubData(targetPacked, offset, size, data);
        }
        ANGLE_CAPTURE(BufferSubData, isCallValid, context, targetPacked, offset, size, data);
    }
}

void GL_APIENTRY DeleteBuffers(GLsizei n, const GLuint *buffers)
{
    EVENT("(GLsizei n = %d, const GLuint *buffers = 0x%016" PRIxPTR ")", n, (uintptr_t)buffers);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        bool isCallValid =
            (context->skipValidation() || ValidateDeleteBuffers(context, n, buffers));
        if (isCallValid)
        {
            context->deleteBuffers(n, buffers);
        }
        ANGLE_CAPTURE(DeleteBuffers, isCallValid, context, n, buffers);
    }
}

void GL_APIENTRY DeleteQueries(GLsizei n, const GLuint *ids)
{
    EVENT("(GLsizei n = %d, const GLuint *ids = 0x%016" PRIxPTR ")", n, (uintptr_t)ids);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        bool isCallValid = (context->skipValidation() || ValidateDeleteQueries(context, n, ids));
        if (isCallValid)
        {
            context->deleteQueries(n, ids);
        }
        ANGLE_CAPTURE(DeleteQueries, isCallValid, context, n, ids);
    }
}

void GL_APIENTRY EndQuery(GLenum target)
{
    EVENT("(GLenum target = 0x%X)", target);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        QueryType targetPacked = FromGLenum<QueryType>(target);
        bool isCallValid = (context->skipValidation() || ValidateEndQuery(context, targetPacked));
        if (isCallValid)
        {
            context->endQuery(targetPacked);
        }
        ANGLE_CAPTURE(EndQuery, isCallValid, context, targetPacked);
    }
}

void GL_APIENTRY GenBuffers(GLsizei n, GLuint *buffers)
{
    EVENT("(GLsizei n = %d, GLuint *buffers = 0x%016" PRIxPTR ")", n, (uintptr_t)buffers);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        bool isCallValid = (context->skipValidation() || ValidateGenBuffers(context, n, buffers));
        if (isCallValid)
        {
            context->genBuffers(n, buffers);
        }
        ANGLE_CAPTURE(GenBuffers, isCallValid, context, n, buffers);
    }
}

void GL_APIENTRY GenQueries(GLsizei n, GLuint *ids)
{
    EVENT("(GLsizei n = %d, GLuint *ids = 0x%016" PRIxPTR ")", n, (uintptr_t)ids);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        bool isCallValid = (context->skipValidation() || ValidateGenQueries(context, n, ids));
        if (isCallValid)
        {
            context->genQueries(n, ids);
        }
        ANGLE_CAPTURE(GenQueries, isCallValid, context, n, ids);
    }
}

void GL_APIENTRY GetBufferParameteriv(GLenum target, GLenum pname, GLint *params)
{
    EVENT("(GLenum target = 0x%X, GLenum pname = 0x%X, GLint *params = 0x%016" PRIxPTR ")", target,
          pname, (uintptr_t)params);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        BufferBinding targetPacked = FromGLenum<BufferBinding>(target);
        bool isCallValid           = (context->skipValidation() ||
                            ValidateGetBufferParameteriv(context, targetPacked, pname, params));
        if (isCallValid)
        {
            context->getBufferParameteriv(targetPacked, pname, params);
        }
        ANGLE_CAPTURE(GetBufferParameteriv, isCallValid, context, targetPacked, pname, params);
    }
}

void GL_APIENTRY GetBufferPointerv(GLenum target, GLenum pname, void **params)
{
    EVENT("(GLenum target = 0x%X, GLenum pname = 0x%X, void **params = 0x%016" PRIxPTR ")", target,
          pname, (uintptr_t)params);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        BufferBinding targetPacked = FromGLenum<BufferBinding>(target);
        bool isCallValid           = (context->skipValidation() ||
                            ValidateGetBufferPointerv(context, targetPacked, pname, params));
        if (isCallValid)
        {
            context->getBufferPointerv(targetPacked, pname, params);
        }
        ANGLE_CAPTURE(GetBufferPointerv, isCallValid, context, targetPacked, pname, params);
    }
}

void GL_APIENTRY GetBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, void *data)
{
    EVENT(
        "(GLenum target = 0x%X, GLintptr offset = %llu, GLsizeiptr size = %llu, void *data = "
        "0x%016" PRIxPTR ")",
        target, static_cast<unsigned long long>(offset), static_cast<unsigned long long>(size),
        (uintptr_t)data);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        bool isCallValid = (context->skipValidation() ||
                            ValidateGetBufferSubData(context, target, offset, size, data));
        if (isCallValid)
        {
            context->getBufferSubData(target, offset, size, data);
        }
        ANGLE_CAPTURE(GetBufferSubData, isCallValid, context, target, offset, size, data);
    }
}

void GL_APIENTRY GetQueryObjectiv(GLuint id, GLenum pname, GLint *params)
{
    EVENT("(GLuint id = %u, GLenum pname = 0x%X, GLint *params = 0x%016" PRIxPTR ")", id, pname,
          (uintptr_t)params);

    Context *context = GetGlobalContext();
    if (context)
    {
        bool isCallValid =
            (context->skipValidation() || ValidateGetQueryObjectiv(context, id, pname, params));
        if (isCallValid)
        {
            context->getQueryObjectiv(id, pname, params);
        }
        ANGLE_CAPTURE(GetQueryObjectiv, isCallValid, context, id, pname, params);
    }
}

void GL_APIENTRY GetQueryObjectuiv(GLuint id, GLenum pname, GLuint *params)
{
    EVENT("(GLuint id = %u, GLenum pname = 0x%X, GLuint *params = 0x%016" PRIxPTR ")", id, pname,
          (uintptr_t)params);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        bool isCallValid =
            (context->skipValidation() || ValidateGetQueryObjectuiv(context, id, pname, params));
        if (isCallValid)
        {
            context->getQueryObjectuiv(id, pname, params);
        }
        ANGLE_CAPTURE(GetQueryObjectuiv, isCallValid, context, id, pname, params);
    }
}

void GL_APIENTRY GetQueryiv(GLenum target, GLenum pname, GLint *params)
{
    EVENT("(GLenum target = 0x%X, GLenum pname = 0x%X, GLint *params = 0x%016" PRIxPTR ")", target,
          pname, (uintptr_t)params);

    Context *context = GetValidGlobalContext();
    if (context)
    {
        QueryType targetPacked = FromGLenum<QueryType>(target);
        bool isCallValid =
            (context->skipValidation() || ValidateGetQueryiv(context, targetPacked, pname, params));
        if (isCallValid)
        {
            context->getQueryiv(targetPacked, pname, params);
        }
        ANGLE_CAPTURE(GetQueryiv, isCallValid, context, targetPacked, pname, params);
    }
}

GLboolean GL_APIENTRY IsBuffer(GLuint buffer)
{
    EVENT("(GLuint buffer = %u)", buffer);

    Context *context = GetValidGlobalContext();
    GLboolean returnValue;
    if (context)
    {
        bool isCallValid = (context->skipValidation() || ValidateIsBuffer(context, buffer));
        if (isCallValid)
        {
            returnValue = context->isBuffer(buffer);
        }
        else
        {
            returnValue = GetDefaultReturnValue<EntryPoint::IsBuffer, GLboolean>();
        }
        ANGLE_CAPTURE(IsBuffer, isCallValid, context, buffer);
    }
    else
    {
        returnValue = GetDefaultReturnValue<EntryPoint::IsBuffer, GLboolean>();
    }
    return returnValue;
}

GLboolean GL_APIENTRY IsQuery(GLuint id)
{
    EVENT("(GLuint id = %u)", id);

    Context *context = GetValidGlobalContext();
    GLboolean returnValue;
    if (context)
    {
        bool isCallValid = (context->skipValidation() || ValidateIsQuery(context, id));
        if (isCallValid)
        {
            returnValue = context->isQuery(id);
        }
        else
        {
            returnValue = GetDefaultReturnValue<EntryPoint::IsQuery, GLboolean>();
        }
        ANGLE_CAPTURE(IsQuery, isCallValid, context, id);
    }
    else
    {
        returnValue = GetDefaultReturnValue<EntryPoint::IsQuery, GLboolean>();
    }
    return returnValue;
}

void *GL_APIENTRY MapBuffer(GLenum target, GLenum access)
{
    EVENT("(GLenum target = 0x%X, GLenum access = 0x%X)", target, access);

    Context *context = GetValidGlobalContext();
    void *returnValue;
    if (context)
    {
        BufferBinding targetPacked = FromGLenum<BufferBinding>(target);
        bool isCallValid =
            (context->skipValidation() || ValidateMapBuffer(context, targetPacked, access));
        if (isCallValid)
        {
            returnValue = context->mapBuffer(targetPacked, access);
        }
        else
        {
            returnValue = GetDefaultReturnValue<EntryPoint::MapBuffer, void *>();
        }
        ANGLE_CAPTURE(MapBuffer, isCallValid, context, targetPacked, access);
    }
    else
    {
        returnValue = GetDefaultReturnValue<EntryPoint::MapBuffer, void *>();
    }
    return returnValue;
}

GLboolean GL_APIENTRY UnmapBuffer(GLenum target)
{
    EVENT("(GLenum target = 0x%X)", target);

    Context *context = GetValidGlobalContext();
    GLboolean returnValue;
    if (context)
    {
        BufferBinding targetPacked = FromGLenum<BufferBinding>(target);
        bool isCallValid =
            (context->skipValidation() || ValidateUnmapBuffer(context, targetPacked));
        if (isCallValid)
        {
            returnValue = context->unmapBuffer(targetPacked);
        }
        else
        {
            returnValue = GetDefaultReturnValue<EntryPoint::UnmapBuffer, GLboolean>();
        }
        ANGLE_CAPTURE(UnmapBuffer, isCallValid, context, targetPacked);
    }
    else
    {
        returnValue = GetDefaultReturnValue<EntryPoint::UnmapBuffer, GLboolean>();
    }
    return returnValue;
}
}  // namespace gl
