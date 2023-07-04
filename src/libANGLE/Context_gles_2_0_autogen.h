// GENERATED FILE - DO NOT EDIT.
// Generated by generate_entry_points.py using data from gl.xml.
//
// Copyright 2020 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// Context_gles_2_0_autogen.h: Creates a macro for interfaces in Context.

#ifndef ANGLE_CONTEXT_GLES_2_0_AUTOGEN_H_
#define ANGLE_CONTEXT_GLES_2_0_AUTOGEN_H_

#define ANGLE_GLES_2_0_CONTEXT_API                                                                 \
    void activeTexture(GLenum texture);                                                            \
    void attachShader(ShaderProgramID programPacked, ShaderProgramID shaderPacked);                \
    void bindAttribLocation(ShaderProgramID programPacked, GLuint index, const GLchar *name);      \
    void bindBuffer(BufferBinding targetPacked, BufferID bufferPacked);                            \
    void bindFramebuffer(GLenum target, FramebufferID framebufferPacked);                          \
    void bindRenderbuffer(GLenum target, RenderbufferID renderbufferPacked);                       \
    void bindTexture(TextureType targetPacked, TextureID texturePacked);                           \
    void blendColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);                      \
    void blendEquation(GLenum mode);                                                               \
    void blendEquationSeparate(GLenum modeRGB, GLenum modeAlpha);                                  \
    void blendFunc(GLenum sfactor, GLenum dfactor);                                                \
    void blendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha,              \
                           GLenum dfactorAlpha);                                                   \
    void bufferData(BufferBinding targetPacked, GLsizeiptr size, const void *data,                 \
                    BufferUsage usagePacked);                                                      \
    void bufferSubData(BufferBinding targetPacked, GLintptr offset, GLsizeiptr size,               \
                       const void *data);                                                          \
    GLenum checkFramebufferStatus(GLenum target);                                                  \
    void clear(GLbitfield mask);                                                                   \
    void compileShader(ShaderProgramID shaderPacked);                                              \
    void compressedTexImage2D(TextureTarget targetPacked, GLint level, GLenum internalformat,      \
                              GLsizei width, GLsizei height, GLint border, GLsizei imageSize,      \
                              const void *data);                                                   \
    void compressedTexSubImage2D(TextureTarget targetPacked, GLint level, GLint xoffset,           \
                                 GLint yoffset, GLsizei width, GLsizei height, GLenum format,      \
                                 GLsizei imageSize, const void *data);                             \
    void copyTexImage2D(TextureTarget targetPacked, GLint level, GLenum internalformat, GLint x,   \
                        GLint y, GLsizei width, GLsizei height, GLint border);                     \
    void copyTexSubImage2D(TextureTarget targetPacked, GLint level, GLint xoffset, GLint yoffset,  \
                           GLint x, GLint y, GLsizei width, GLsizei height);                       \
    GLuint createProgram();                                                                        \
    GLuint createShader(ShaderType typePacked);                                                    \
    void cullFace(CullFaceMode modePacked);                                                        \
    void deleteBuffers(GLsizei n, const BufferID *buffersPacked);                                  \
    void deleteFramebuffers(GLsizei n, const FramebufferID *framebuffersPacked);                   \
    void deleteProgram(ShaderProgramID programPacked);                                             \
    void deleteRenderbuffers(GLsizei n, const RenderbufferID *renderbuffersPacked);                \
    void deleteShader(ShaderProgramID shaderPacked);                                               \
    void deleteTextures(GLsizei n, const TextureID *texturesPacked);                               \
    void depthFunc(GLenum func);                                                                   \
    void depthRangef(GLfloat n, GLfloat f);                                                        \
    void detachShader(ShaderProgramID programPacked, ShaderProgramID shaderPacked);                \
    void disable(GLenum cap);                                                                      \
    void disableVertexAttribArray(GLuint index);                                                   \
    void drawArrays(PrimitiveMode modePacked, GLint first, GLsizei count);                         \
    void drawElements(PrimitiveMode modePacked, GLsizei count, DrawElementsType typePacked,        \
                      const void *indices);                                                        \
    void enable(GLenum cap);                                                                       \
    void enableVertexAttribArray(GLuint index);                                                    \
    void finish();                                                                                 \
    void flush();                                                                                  \
    void framebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget,      \
                                 RenderbufferID renderbufferPacked);                               \
    void framebufferTexture2D(GLenum target, GLenum attachment, TextureTarget textargetPacked,     \
                              TextureID texturePacked, GLint level);                               \
    void frontFace(GLenum mode);                                                                   \
    void genBuffers(GLsizei n, BufferID *buffersPacked);                                           \
    void genFramebuffers(GLsizei n, FramebufferID *framebuffersPacked);                            \
    void genRenderbuffers(GLsizei n, RenderbufferID *renderbuffersPacked);                         \
    void genTextures(GLsizei n, TextureID *texturesPacked);                                        \
    void generateMipmap(TextureType targetPacked);                                                 \
    void getActiveAttrib(ShaderProgramID programPacked, GLuint index, GLsizei bufSize,             \
                         GLsizei *length, GLint *size, GLenum *type, GLchar *name);                \
    void getActiveUniform(ShaderProgramID programPacked, GLuint index, GLsizei bufSize,            \
                          GLsizei *length, GLint *size, GLenum *type, GLchar *name);               \
    void getAttachedShaders(ShaderProgramID programPacked, GLsizei maxCount, GLsizei *count,       \
                            ShaderProgramID *shadersPacked);                                       \
    GLint getAttribLocation(ShaderProgramID programPacked, const GLchar *name);                    \
    void getBooleanv(GLenum pname, GLboolean *data);                                               \
    void getBufferParameteriv(BufferBinding targetPacked, GLenum pname, GLint *params);            \
    GLenum getError();                                                                             \
    void getFloatv(GLenum pname, GLfloat *data);                                                   \
    void getFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname,       \
                                             GLint *params);                                       \
    void getIntegerv(GLenum pname, GLint *data);                                                   \
    void getProgramInfoLog(ShaderProgramID programPacked, GLsizei bufSize, GLsizei *length,        \
                           GLchar *infoLog);                                                       \
    void getProgramiv(ShaderProgramID programPacked, GLenum pname, GLint *params);                 \
    void getRenderbufferParameteriv(GLenum target, GLenum pname, GLint *params);                   \
    void getShaderInfoLog(ShaderProgramID shaderPacked, GLsizei bufSize, GLsizei *length,          \
                          GLchar *infoLog);                                                        \
    void getShaderPrecisionFormat(GLenum shadertype, GLenum precisiontype, GLint *range,           \
                                  GLint *precision);                                               \
    void getShaderSource(ShaderProgramID shaderPacked, GLsizei bufSize, GLsizei *length,           \
                         GLchar *source);                                                          \
    void getShaderiv(ShaderProgramID shaderPacked, GLenum pname, GLint *params);                   \
    const GLubyte *getString(GLenum name);                                                         \
    void getTexParameterfv(TextureType targetPacked, GLenum pname, GLfloat *params);               \
    void getTexParameteriv(TextureType targetPacked, GLenum pname, GLint *params);                 \
    GLint getUniformLocation(ShaderProgramID programPacked, const GLchar *name);                   \
    void getUniformfv(ShaderProgramID programPacked, UniformLocation locationPacked,               \
                      GLfloat *params);                                                            \
    void getUniformiv(ShaderProgramID programPacked, UniformLocation locationPacked,               \
                      GLint *params);                                                              \
    void getVertexAttribPointerv(GLuint index, GLenum pname, void **pointer);                      \
    void getVertexAttribfv(GLuint index, GLenum pname, GLfloat *params);                           \
    void getVertexAttribiv(GLuint index, GLenum pname, GLint *params);                             \
    void hint(GLenum target, GLenum mode);                                                         \
    GLboolean isBuffer(BufferID bufferPacked) const;                                               \
    GLboolean isEnabled(GLenum cap) const;                                                         \
    GLboolean isFramebuffer(FramebufferID framebufferPacked) const;                                \
    GLboolean isProgram(ShaderProgramID programPacked) const;                                      \
    GLboolean isRenderbuffer(RenderbufferID renderbufferPacked) const;                             \
    GLboolean isShader(ShaderProgramID shaderPacked) const;                                        \
    GLboolean isTexture(TextureID texturePacked) const;                                            \
    void lineWidth(GLfloat width);                                                                 \
    void linkProgram(ShaderProgramID programPacked);                                               \
    void pixelStorei(GLenum pname, GLint param);                                                   \
    void polygonOffset(GLfloat factor, GLfloat units);                                             \
    void readPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type,   \
                    void *pixels);                                                                 \
    void releaseShaderCompiler();                                                                  \
    void renderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height); \
    void sampleCoverage(GLfloat value, GLboolean invert);                                          \
    void scissor(GLint x, GLint y, GLsizei width, GLsizei height);                                 \
    void shaderBinary(GLsizei count, const ShaderProgramID *shadersPacked, GLenum binaryFormat,    \
                      const void *binary, GLsizei length);                                         \
    void shaderSource(ShaderProgramID shaderPacked, GLsizei count, const GLchar *const *string,    \
                      const GLint *length);                                                        \
    void stencilFunc(GLenum func, GLint ref, GLuint mask);                                         \
    void stencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask);                    \
    void stencilMask(GLuint mask);                                                                 \
    void stencilMaskSeparate(GLenum face, GLuint mask);                                            \
    void stencilOp(GLenum fail, GLenum zfail, GLenum zpass);                                       \
    void stencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);               \
    void texImage2D(TextureTarget targetPacked, GLint level, GLint internalformat, GLsizei width,  \
                    GLsizei height, GLint border, GLenum format, GLenum type, const void *pixels); \
    void texParameterf(TextureType targetPacked, GLenum pname, GLfloat param);                     \
    void texParameterfv(TextureType targetPacked, GLenum pname, const GLfloat *params);            \
    void texParameteri(TextureType targetPacked, GLenum pname, GLint param);                       \
    void texParameteriv(TextureType targetPacked, GLenum pname, const GLint *params);              \
    void texSubImage2D(TextureTarget targetPacked, GLint level, GLint xoffset, GLint yoffset,      \
                       GLsizei width, GLsizei height, GLenum format, GLenum type,                  \
                       const void *pixels);                                                        \
    void uniform1f(UniformLocation locationPacked, GLfloat v0);                                    \
    void uniform1fv(UniformLocation locationPacked, GLsizei count, const GLfloat *value);          \
    void uniform1i(UniformLocation locationPacked, GLint v0);                                      \
    void uniform1iv(UniformLocation locationPacked, GLsizei count, const GLint *value);            \
    void uniform2f(UniformLocation locationPacked, GLfloat v0, GLfloat v1);                        \
    void uniform2fv(UniformLocation locationPacked, GLsizei count, const GLfloat *value);          \
    void uniform2i(UniformLocation locationPacked, GLint v0, GLint v1);                            \
    void uniform2iv(UniformLocation locationPacked, GLsizei count, const GLint *value);            \
    void uniform3f(UniformLocation locationPacked, GLfloat v0, GLfloat v1, GLfloat v2);            \
    void uniform3fv(UniformLocation locationPacked, GLsizei count, const GLfloat *value);          \
    void uniform3i(UniformLocation locationPacked, GLint v0, GLint v1, GLint v2);                  \
    void uniform3iv(UniformLocation locationPacked, GLsizei count, const GLint *value);            \
    void uniform4f(UniformLocation locationPacked, GLfloat v0, GLfloat v1, GLfloat v2,             \
                   GLfloat v3);                                                                    \
    void uniform4fv(UniformLocation locationPacked, GLsizei count, const GLfloat *value);          \
    void uniform4i(UniformLocation locationPacked, GLint v0, GLint v1, GLint v2, GLint v3);        \
    void uniform4iv(UniformLocation locationPacked, GLsizei count, const GLint *value);            \
    void uniformMatrix2fv(UniformLocation locationPacked, GLsizei count, GLboolean transpose,      \
                          const GLfloat *value);                                                   \
    void uniformMatrix3fv(UniformLocation locationPacked, GLsizei count, GLboolean transpose,      \
                          const GLfloat *value);                                                   \
    void uniformMatrix4fv(UniformLocation locationPacked, GLsizei count, GLboolean transpose,      \
                          const GLfloat *value);                                                   \
    void useProgram(ShaderProgramID programPacked);                                                \
    void validateProgram(ShaderProgramID programPacked);                                           \
    void vertexAttrib1f(GLuint index, GLfloat x);                                                  \
    void vertexAttrib1fv(GLuint index, const GLfloat *v);                                          \
    void vertexAttrib2f(GLuint index, GLfloat x, GLfloat y);                                       \
    void vertexAttrib2fv(GLuint index, const GLfloat *v);                                          \
    void vertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z);                            \
    void vertexAttrib3fv(GLuint index, const GLfloat *v);                                          \
    void vertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);                 \
    void vertexAttrib4fv(GLuint index, const GLfloat *v);                                          \
    void vertexAttribPointer(GLuint index, GLint size, VertexAttribType typePacked,                \
                             GLboolean normalized, GLsizei stride, const void *pointer);           \
    void viewport(GLint x, GLint y, GLsizei width, GLsizei height);

#endif  // ANGLE_CONTEXT_API_2_0_AUTOGEN_H_
