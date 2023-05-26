// Auto-generated with: android/scripts/gen-entries.py --mode=funcargs android/android-emugl/host/libs/libOpenGLESDispatch/gles12tr_internal.entries --output=android/android-emugl/host/include/OpenGLESDispatch/gles12tr_internal.h
// DO NOT EDIT THIS FILE

#ifndef GLES12TR_INTERNAL_FUNCTIONS_H
#define GLES12TR_INTERNAL_FUNCTIONS_H

typedef GLvoid* GLvoidptr;
typedef const GLubyte* constGLubyte;
#define LIST_GLES12TR_INTERNAL_FUNCTIONS(X) \
  X(void, glActiveTexture, (GLenum texture), (texture)) \
  X(void, glAlphaFunc, (GLenum func, GLclampf ref), (func, ref)) \
  X(void, glAlphaFuncx, (GLenum func, GLclampx ref), (func, ref)) \
  X(void, glAlphaFuncxOES, (GLenum func, GLclampx ref), (func, ref)) \
  X(void, glAttachShader, (GLuint program, GLuint shader), (program, shader)) \
  X(void, glBindAttribLocation, (GLuint program, GLuint index, const GLchar* name), (program, index, name)) \
  X(void, glBindBuffer, (GLenum target, GLuint buffer), (target, buffer)) \
  X(void, glBindFramebuffer, (GLenum target, GLuint framebuffer), (target, framebuffer)) \
  X(void, glBindFramebufferOES, (GLenum target, GLuint framebuffer), (target, framebuffer)) \
  X(void, glBindRenderbuffer, (GLenum target, GLuint renderbuffer), (target, renderbuffer)) \
  X(void, glBindRenderbufferOES, (GLenum target, GLuint renderbuffer), (target, renderbuffer)) \
  X(void, glBindTexture, (GLenum target, GLuint texture), (target, texture)) \
  X(void, glBlendColor, (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha), (red, green, blue, alpha)) \
  X(void, glBlendEquation, (GLenum mode), (mode)) \
  X(void, glBlendEquationOES, (GLenum mode), (mode)) \
  X(void, glBlendEquationSeparate, (GLenum modeRGB, GLenum modeAlpha), (modeRGB, modeAlpha)) \
  X(void, glBlendEquationSeparateOES, (GLenum modeRGB, GLenum modeAlpha), (modeRGB, modeAlpha)) \
  X(void, glBlendFunc, (GLenum sfactor, GLenum dfactor), (sfactor, dfactor)) \
  X(void, glBlendFuncSeparate, (GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha), (srcRGB, dstRGB, srcAlpha, dstAlpha)) \
  X(void, glBlendFuncSeparateOES, (GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha), (srcRGB, dstRGB, srcAlpha, dstAlpha)) \
  X(void, glBufferData, (GLenum target, GLsizeiptr size, const GLvoid* data, GLenum usage), (target, size, data, usage)) \
  X(void, glBufferSubData, (GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid* data), (target, offset, size, data)) \
  X(GLenum, glCheckFramebufferStatus, (GLenum target), (target)) \
  X(GLenum, glCheckFramebufferStatusOES, (GLenum target), (target)) \
  X(void, glClear, (GLbitfield mask), (mask)) \
  X(void, glClearColor, (GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha), (red, green, blue, alpha)) \
  X(void, glClearColorx, (GLclampx red, GLclampx green, GLclampx blue, GLclampx alpha), (red, green, blue, alpha)) \
  X(void, glClearColorxOES, (GLclampx red, GLclampx green, GLclampx blue, GLclampx alpha), (red, green, blue, alpha)) \
  X(void, glClearDepthf, (GLfloat depth), (depth)) \
  X(void, glClearDepthfOES, (GLclampf depth), (depth)) \
  X(void, glClearDepthx, (GLclampx depth), (depth)) \
  X(void, glClearDepthxOES, (GLclampx depth), (depth)) \
  X(void, glClearStencil, (GLint s), (s)) \
  X(void, glClientActiveTexture, (GLenum texture), (texture)) \
  X(void, glClipPlanef, (GLenum pname, const GLfloat* equation), (pname, equation)) \
  X(void, glClipPlanefOES, (GLenum pname, const GLfloat* equation), (pname, equation)) \
  X(void, glClipPlanex, (GLenum pname, const GLfixed* equation), (pname, equation)) \
  X(void, glClipPlanexOES, (GLenum pname, const GLfixed* equation), (pname, equation)) \
  X(void, glColor4f, (GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha), (red, green, blue, alpha)) \
  X(void, glColor4fv, (const GLfloat* components), (components)) \
  X(void, glColor4ub, (GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha), (red, green, blue, alpha)) \
  X(void, glColor4ubv, (const GLubyte* components), (components)) \
  X(void, glColor4x, (GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha), (red, green, blue, alpha)) \
  X(void, glColor4xOES, (GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha), (red, green, blue, alpha)) \
  X(void, glColorMask, (GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha), (red, green, blue, alpha)) \
  X(void, glColorPointer, (GLint size, GLenum type, GLsizei stride, const GLvoid* pointer), (size, type, stride, pointer)) \
  X(void, glColorPointerBounds, (GLint size, GLenum type, GLsizei stride, const GLvoid* pointer, GLsizei count), (size, type, stride, pointer, count)) \
  X(void, glCompileShader, (GLuint shader), (shader)) \
  X(void, glCompressedTexImage2D, (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei image_size, const GLvoid* data), (target, level, internalformat, width, height, border, image_size, data)) \
  X(void, glCompressedTexSubImage2D, (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei image_size, const GLvoid* data), (target, level, xoffset, yoffset, width, height, format, image_size, data)) \
  X(void, glCopyTexImage2D, (GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border), (target, level, internalformat, x, y, width, height, border)) \
  X(void, glCopyTexSubImage2D, (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height), (target, level, xoffset, yoffset, x, y, width, height)) \
  X(GLuint, glCreateProgram, (), ()) \
  X(GLuint, glCreateShader, (GLenum type), (type)) \
  X(void, glCullFace, (GLenum mode), (mode)) \
  X(void, glCurrentPaletteMatrixOES, (GLuint index), (index)) \
  X(void, glDeleteBuffers, (GLsizei n, const GLuint* buffers), (n, buffers)) \
  X(void, glDeleteFramebuffers, (GLsizei n, const GLuint* framebuffers), (n, framebuffers)) \
  X(void, glDeleteFramebuffersOES, (GLsizei n, const GLuint* framebuffers), (n, framebuffers)) \
  X(void, glDeleteProgram, (GLuint program), (program)) \
  X(void, glDeleteRenderbuffers, (GLsizei n, const GLuint* renderbuffers), (n, renderbuffers)) \
  X(void, glDeleteRenderbuffersOES, (GLsizei n, const GLuint* renderbuffers), (n, renderbuffers)) \
  X(void, glDeleteShader, (GLuint shader), (shader)) \
  X(void, glDeleteTextures, (GLsizei n, const GLuint* textures), (n, textures)) \
  X(void, glDepthFunc, (GLenum func), (func)) \
  X(void, glDepthMask, (GLboolean flag), (flag)) \
  X(void, glDepthRangef, (GLfloat zNear, GLfloat zFar), (zNear, zFar)) \
  X(void, glDepthRangefOES, (GLclampf zNear, GLclampf zFar), (zNear, zFar)) \
  X(void, glDepthRangex, (GLclampx zNear, GLclampx zFar), (zNear, zFar)) \
  X(void, glDepthRangexOES, (GLclampx zNear, GLclampx zFar), (zNear, zFar)) \
  X(void, glDetachShader, (GLuint program, GLuint shader), (program, shader)) \
  X(void, glDisable, (GLenum cap), (cap)) \
  X(void, glDisableClientState, (GLenum cap), (cap)) \
  X(void, glDisableVertexAttribArray, (GLuint index), (index)) \
  X(void, glDrawArrays, (GLenum mode, GLint first, GLsizei count), (mode, first, count)) \
  X(void, glDrawElements, (GLenum mode, GLsizei count, GLenum type, const GLvoid* indices), (mode, count, type, indices)) \
  X(void, glDrawTexfOES, (GLfloat x, GLfloat y, GLfloat z, GLfloat width, GLfloat height), (x, y, z, width, height)) \
  X(void, glDrawTexfvOES, (const GLfloat* coords), (coords)) \
  X(void, glDrawTexiOES, (GLint x, GLint y, GLint z, GLint width, GLint height), (x, y, z, width, height)) \
  X(void, glDrawTexivOES, (const GLint* coords), (coords)) \
  X(void, glDrawTexsOES, (GLshort x, GLshort y, GLshort z, GLshort width, GLshort height), (x, y, z, width, height)) \
  X(void, glDrawTexsvOES, (const GLshort* coords), (coords)) \
  X(void, glDrawTexxOES, (GLfixed x, GLfixed y, GLfixed z, GLfixed width, GLfixed height), (x, y, z, width, height)) \
  X(void, glDrawTexxvOES, (const GLfixed* coords), (coords)) \
  X(void, glEGLImageTargetRenderbufferStorageOES, (GLenum target, GLeglImageOES buffer), (target, buffer)) \
  X(void, glEGLImageTargetTexture2DOES, (GLenum target, GLeglImageOES buffer), (target, buffer)) \
  X(void, glEnable, (GLenum cap), (cap)) \
  X(void, glEnableClientState, (GLenum cap), (cap)) \
  X(void, glEnableVertexAttribArray, (GLuint index), (index)) \
  X(void, glFinish, (), ()) \
  X(void, glFlush, (), ()) \
  X(void, glFogf, (GLenum name, GLfloat param), (name, param)) \
  X(void, glFogfv, (GLenum name, const GLfloat* params), (name, params)) \
  X(void, glFogx, (GLenum pname, GLfixed param), (pname, param)) \
  X(void, glFogxOES, (GLenum pname, GLfixed param), (pname, param)) \
  X(void, glFogxv, (GLenum pname, const GLfixed* params), (pname, params)) \
  X(void, glFogxvOES, (GLenum pname, const GLfixed* params), (pname, params)) \
  X(void, glFramebufferRenderbuffer, (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer), (target, attachment, renderbuffertarget, renderbuffer)) \
  X(void, glFramebufferRenderbufferOES, (GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer), (target, attachment, renderbuffertarget, renderbuffer)) \
  X(void, glFramebufferTexture2D, (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level), (target, attachment, textarget, texture, level)) \
  X(void, glFramebufferTexture2DOES, (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level), (target, attachment, textarget, texture, level)) \
  X(void, glFrontFace, (GLenum mode), (mode)) \
  X(void, glFrustumf, (GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar), (left, right, bottom, top, zNear, zFar)) \
  X(void, glFrustumfOES, (GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar), (left, right, bottom, top, zNear, zFar)) \
  X(void, glFrustumx, (GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed zNear, GLfixed zFar), (left, right, bottom, top, zNear, zFar)) \
  X(void, glFrustumxOES, (GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed zNear, GLfixed zFar), (left, right, bottom, top, zNear, zFar)) \
  X(void, glGenBuffers, (GLsizei n, GLuint* buffers), (n, buffers)) \
  X(void, glGenFramebuffers, (GLsizei n, GLuint* framebuffers), (n, framebuffers)) \
  X(void, glGenFramebuffersOES, (GLsizei n, GLuint* framebuffers), (n, framebuffers)) \
  X(void, glGenRenderbuffers, (GLsizei n, GLuint* renderbuffers), (n, renderbuffers)) \
  X(void, glGenRenderbuffersOES, (GLsizei n, GLuint* renderbuffers), (n, renderbuffers)) \
  X(void, glGenTextures, (GLsizei n, GLuint* textures), (n, textures)) \
  X(void, glGenerateMipmap, (GLenum target), (target)) \
  X(void, glGenerateMipmapOES, (GLenum target), (target)) \
  X(void, glGetActiveAttrib, (GLuint program, GLuint index, GLsizei bufsize, GLsizei* length, GLint* size, GLenum* type, GLchar* name), (program, index, bufsize, length, size, type, name)) \
  X(void, glGetActiveUniform, (GLuint program, GLuint index, GLsizei bufsize, GLsizei* length, GLint* size, GLenum* type, GLchar* name), (program, index, bufsize, length, size, type, name)) \
  X(void, glGetAttachedShaders, (GLuint program, GLsizei maxcount, GLsizei* count, GLuint* shaders), (program, maxcount, count, shaders)) \
  X(GLint, glGetAttribLocation, (GLuint program, const GLchar* name), (program, name)) \
  X(void, glGetBooleanv, (GLenum pname, GLboolean* params), (pname, params)) \
  X(void, glGetBufferParameteriv, (GLenum target, GLenum pname, GLint* params), (target, pname, params)) \
  X(void, glGetClipPlanef, (GLenum pname, GLfloat* eqn), (pname, eqn)) \
  X(void, glGetClipPlanefOES, (GLenum pname, GLfloat* eqn), (pname, eqn)) \
  X(void, glGetClipPlanex, (GLenum pname, GLfixed* eqn), (pname, eqn)) \
  X(void, glGetClipPlanexOES, (GLenum pname, GLfixed* eqn), (pname, eqn)) \
  X(GLenum, glGetError, (), ()) \
  X(void, glGetFixedv, (GLenum pname, GLfixed* params), (pname, params)) \
  X(void, glGetFixedvOES, (GLenum pname, GLfixed* params), (pname, params)) \
  X(void, glGetFloatv, (GLenum pname, GLfloat* params), (pname, params)) \
  X(void, glGetFramebufferAttachmentParameteriv, (GLenum target, GLenum attachment, GLenum pname, GLint* params), (target, attachment, pname, params)) \
  X(void, glGetFramebufferAttachmentParameterivOES, (GLenum target, GLenum attachment, GLenum pname, GLint* params), (target, attachment, pname, params)) \
  X(void, glGetIntegerv, (GLenum pname, GLint* params), (pname, params)) \
  X(void, glGetLightfv, (GLenum lightid, GLenum name, GLfloat* params), (lightid, name, params)) \
  X(void, glGetLightxv, (GLenum light, GLenum pname, GLfixed* params), (light, pname, params)) \
  X(void, glGetLightxvOES, (GLenum light, GLenum pname, GLfixed* params), (light, pname, params)) \
  X(void, glGetMaterialfv, (GLenum face, GLenum name, GLfloat* params), (face, name, params)) \
  X(void, glGetMaterialxv, (GLenum face, GLenum pname, GLfixed* params), (face, pname, params)) \
  X(void, glGetMaterialxvOES, (GLenum face, GLenum pname, GLfixed* params), (face, pname, params)) \
  X(void, glGetPointerv, (GLenum pname, void** params), (pname, params)) \
  X(void, glGetProgramInfoLog, (GLuint program, GLsizei bufsize, GLsizei* length, GLchar* infolog), (program, bufsize, length, infolog)) \
  X(void, glGetProgramiv, (GLuint program, GLenum pname, GLint* params), (program, pname, params)) \
  X(void, glGetRenderbufferParameteriv, (GLenum target, GLenum pname, GLint* params), (target, pname, params)) \
  X(void, glGetRenderbufferParameterivOES, (GLenum target, GLenum pname, GLint* params), (target, pname, params)) \
  X(void, glGetShaderInfoLog, (GLuint shader, GLsizei bufsize, GLsizei* length, GLchar* infolog), (shader, bufsize, length, infolog)) \
  X(void, glGetShaderPrecisionFormat, (GLenum shadertype, GLenum precisiontype, GLint* range, GLint* precision), (shadertype, precisiontype, range, precision)) \
  X(void, glGetShaderSource, (GLuint shader, GLsizei bufsize, GLsizei* length, GLchar* source), (shader, bufsize, length, source)) \
  X(void, glGetShaderiv, (GLuint shader, GLenum pname, GLint* params), (shader, pname, params)) \
  X(constGLubyte, glGetString, (GLenum name), (name)) \
  X(void, glGetTexEnvfv, (GLenum env, GLenum pname, GLfloat* params), (env, pname, params)) \
  X(void, glGetTexEnviv, (GLenum env, GLenum pname, GLint* params), (env, pname, params)) \
  X(void, glGetTexEnvxv, (GLenum env, GLenum pname, GLfixed* params), (env, pname, params)) \
  X(void, glGetTexEnvxvOES, (GLenum env, GLenum pname, GLfixed* params), (env, pname, params)) \
  X(void, glGetTexParameterfv, (GLenum target, GLenum pname, GLfloat* params), (target, pname, params)) \
  X(void, glGetTexParameteriv, (GLenum target, GLenum pname, GLint* params), (target, pname, params)) \
  X(void, glGetTexParameterxv, (GLenum target, GLenum pname, GLfixed* params), (target, pname, params)) \
  X(void, glGetTexParameterxvOES, (GLenum target, GLenum pname, GLfixed* params), (target, pname, params)) \
  X(void, glGetUniformfv, (GLuint program, GLint location, GLfloat* params), (program, location, params)) \
  X(void, glGetUniformiv, (GLuint program, GLint location, GLint* params), (program, location, params)) \
  X(GLint, glGetUniformLocation, (GLuint program, const GLchar* name), (program, name)) \
  X(void, glGetVertexAttribPointerv, (GLuint index, GLenum pname, GLvoid** pointer), (index, pname, pointer)) \
  X(void, glGetVertexAttribfv, (GLuint index, GLenum pname, GLfloat* params), (index, pname, params)) \
  X(void, glGetVertexAttribiv, (GLuint index, GLenum pname, GLint* params), (index, pname, params)) \
  X(void, glHint, (GLenum target, GLenum mode), (target, mode)) \
  X(GLboolean, glIsBuffer, (GLuint buffer), (buffer)) \
  X(GLboolean, glIsEnabled, (GLenum cap), (cap)) \
  X(GLboolean, glIsFramebuffer, (GLuint framebuffer), (framebuffer)) \
  X(GLboolean, glIsFramebufferOES, (GLuint framebuffer), (framebuffer)) \
  X(GLboolean, glIsProgram, (GLuint program), (program)) \
  X(GLboolean, glIsRenderbuffer, (GLuint renderbuffer), (renderbuffer)) \
  X(GLboolean, glIsRenderbufferOES, (GLuint renderbuffer), (renderbuffer)) \
  X(GLboolean, glIsShader, (GLuint shader), (shader)) \
  X(GLboolean, glIsTexture, (GLuint texture), (texture)) \
  X(void, glLightModelf, (GLenum name, GLfloat param), (name, param)) \
  X(void, glLightModelfv, (GLenum name, const GLfloat* params), (name, params)) \
  X(void, glLightModelx, (GLenum pname, GLfixed param), (pname, param)) \
  X(void, glLightModelxOES, (GLenum pname, GLfixed param), (pname, param)) \
  X(void, glLightModelxv, (GLenum pname, const GLfixed* params), (pname, params)) \
  X(void, glLightModelxvOES, (GLenum pname, const GLfixed* params), (pname, params)) \
  X(void, glLightf, (GLenum lightid, GLenum name, GLfloat param), (lightid, name, param)) \
  X(void, glLightfv, (GLenum lightid, GLenum name, const GLfloat* params), (lightid, name, params)) \
  X(void, glLightx, (GLenum light, GLenum pname, GLfixed param), (light, pname, param)) \
  X(void, glLightxOES, (GLenum light, GLenum pname, GLfixed param), (light, pname, param)) \
  X(void, glLightxv, (GLenum light, GLenum pname, const GLfixed* params), (light, pname, params)) \
  X(void, glLightxvOES, (GLenum light, GLenum pname, const GLfixed* params), (light, pname, params)) \
  X(void, glLineWidth, (GLfloat width), (width)) \
  X(void, glLineWidthx, (GLfixed width), (width)) \
  X(void, glLineWidthxOES, (GLfixed width), (width)) \
  X(void, glLinkProgram, (GLuint program), (program)) \
  X(void, glLoadIdentity, (), ()) \
  X(void, glLoadMatrixf, (const GLfloat* m), (m)) \
  X(void, glLoadMatrixx, (const GLfixed* m), (m)) \
  X(void, glLoadMatrixxOES, (const GLfixed* m), (m)) \
  X(void, glLoadPaletteFromModelViewMatrixOES, (), ()) \
  X(GLvoidptr, glMapTexSubImage2DCHROMIUM, (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, GLenum access), (target, level, xoffset, yoffset, width, height, format, type, access)) \
  X(void, glMaterialf, (GLenum face, GLenum name, GLfloat param), (face, name, param)) \
  X(void, glMaterialfv, (GLenum face, GLenum name, const GLfloat* params), (face, name, params)) \
  X(void, glMaterialx, (GLenum face, GLenum pname, GLfixed param), (face, pname, param)) \
  X(void, glMaterialxOES, (GLenum face, GLenum pname, GLfixed param), (face, pname, param)) \
  X(void, glMaterialxv, (GLenum face, GLenum pname, const GLfixed* params), (face, pname, params)) \
  X(void, glMaterialxvOES, (GLenum face, GLenum pname, const GLfixed* params), (face, pname, params)) \
  X(void, glMatrixMode, (GLenum mode), (mode)) \
  X(void, glMatrixIndexPointerOES, (GLint size, GLenum type, GLsizei stride, const GLvoid* pointer), (size, type, stride, pointer)) \
  X(void, glMatrixIndexPointerOESBounds, (GLint size, GLenum type, GLsizei stride, const GLvoid* pointer, GLsizei count), (size, type, stride, pointer, count)) \
  X(void, glMultMatrixf, (const GLfloat* m), (m)) \
  X(void, glMultMatrixx, (const GLfixed* m), (m)) \
  X(void, glMultMatrixxOES, (const GLfixed* m), (m)) \
  X(void, glNormal3f, (GLfloat nx, GLfloat ny, GLfloat nz), (nx, ny, nz)) \
  X(void, glNormal3fv, (const GLfloat* coords), (coords)) \
  X(void, glNormal3sv, (const GLshort* coords), (coords)) \
  X(void, glNormal3x, (GLfixed nx, GLfixed ny, GLfixed nz), (nx, ny, nz)) \
  X(void, glNormal3xOES, (GLfixed nx, GLfixed ny, GLfixed nz), (nx, ny, nz)) \
  X(void, glNormalPointer, (GLenum type, GLsizei stride, const GLvoid* pointer), (type, stride, pointer)) \
  X(void, glNormalPointerBounds, (GLenum type, GLsizei stride, const GLvoid* pointer, GLsizei count), (type, stride, pointer, count)) \
  X(void, glOrthof, (GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat z_near, GLfloat z_far), (left, right, bottom, top, z_near, z_far)) \
  X(void, glOrthofOES, (GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar), (left, right, bottom, top, zNear, zFar)) \
  X(void, glOrthox, (GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed zNear, GLfixed zFar), (left, right, bottom, top, zNear, zFar)) \
  X(void, glOrthoxOES, (GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed zNear, GLfixed zFar), (left, right, bottom, top, zNear, zFar)) \
  X(void, glPixelStorei, (GLenum pname, GLint param), (pname, param)) \
  X(void, glPointParameterf, (GLenum pname, GLfloat param), (pname, param)) \
  X(void, glPointParameterfv, (GLenum pname, const GLfloat* params), (pname, params)) \
  X(void, glPointParameterx, (GLenum pname, GLfixed param), (pname, param)) \
  X(void, glPointParameterxOES, (GLenum pname, GLfixed param), (pname, param)) \
  X(void, glPointParameterxv, (GLenum pname, const GLfixed* params), (pname, params)) \
  X(void, glPointParameterxvOES, (GLenum pname, const GLfixed* params), (pname, params)) \
  X(void, glPointSize, (GLfloat size), (size)) \
  X(void, glPointSizex, (GLfixed size), (size)) \
  X(void, glPointSizexOES, (GLfixed size), (size)) \
  X(void, glPointSizePointerOES, (GLenum type, GLsizei stride, const GLvoid* pointer), (type, stride, pointer)) \
  X(void, glPointSizePointer, (GLenum type, GLsizei stride, const GLvoid* pointer), (type, stride, pointer)) \
  X(void, glPointSizePointerOESBounds, (GLenum type, GLsizei stride, const GLvoid* pointer, GLsizei count), (type, stride, pointer, count)) \
  X(void, glPolygonOffset, (GLfloat factor, GLfloat units), (factor, units)) \
  X(void, glPolygonOffsetx, (GLfixed factor, GLfixed units), (factor, units)) \
  X(void, glPolygonOffsetxOES, (GLfixed factor, GLfixed units), (factor, units)) \
  X(void, glPopMatrix, (), ()) \
  X(void, glPushMatrix, (), ()) \
  X(void, glReadPixels, (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid* pixels), (x, y, width, height, format, type, pixels)) \
  X(void, glReleaseShaderCompiler, (), ()) \
  X(void, glRenderbufferStorage, (GLenum target, GLenum internalformat, GLsizei width, GLsizei height), (target, internalformat, width, height)) \
  X(void, glRenderbufferStorageOES, (GLenum target, GLenum internalformat, GLsizei width, GLsizei height), (target, internalformat, width, height)) \
  X(void, glRotatef, (GLfloat angle, GLfloat x, GLfloat y, GLfloat z), (angle, x, y, z)) \
  X(void, glRotatex, (GLfixed angle, GLfixed x, GLfixed y, GLfixed z), (angle, x, y, z)) \
  X(void, glRotatexOES, (GLfixed angle, GLfixed x, GLfixed y, GLfixed z), (angle, x, y, z)) \
  X(void, glSampleCoverage, (GLclampf value, GLboolean invert), (value, invert)) \
  X(void, glSampleCoveragex, (GLclampx value, GLboolean invert), (value, invert)) \
  X(void, glSampleCoveragexOES, (GLclampx value, GLboolean invert), (value, invert)) \
  X(void, glScalef, (GLfloat x, GLfloat y, GLfloat z), (x, y, z)) \
  X(void, glScalex, (GLfixed x, GLfixed y, GLfixed z), (x, y, z)) \
  X(void, glScalexOES, (GLfixed x, GLfixed y, GLfixed z), (x, y, z)) \
  X(void, glScissor, (GLint x, GLint y, GLsizei width, GLsizei height), (x, y, width, height)) \
  X(void, glShadeModel, (GLenum mode), (mode)) \
  X(void, glShaderSource, (GLuint shader, GLsizei count, const GLchar* const* string, const GLint* length), (shader, count, string, length)) \
  X(void, glStencilFunc, (GLenum func, GLint ref, GLuint mask), (func, ref, mask)) \
  X(void, glStencilFuncSeparate, (GLenum face, GLenum func, GLint ref, GLuint mask), (face, func, ref, mask)) \
  X(void, glStencilMask, (GLuint mask), (mask)) \
  X(void, glStencilMaskSeparate, (GLenum face, GLuint mask), (face, mask)) \
  X(void, glStencilOp, (GLenum sfail, GLenum zfail, GLenum zpass), (sfail, zfail, zpass)) \
  X(void, glStencilOpSeparate, (GLenum face, GLenum sfail, GLenum zfail, GLenum zpass), (face, sfail, zfail, zpass)) \
  X(void, glTexCoordPointer, (GLint size, GLenum type, GLsizei stride, const GLvoid* pointer), (size, type, stride, pointer)) \
  X(void, glTexCoordPointerBounds, (GLint size, GLenum type, GLsizei stride, const GLvoid* pointer, GLsizei count), (size, type, stride, pointer, count)) \
  X(void, glTexEnvf, (GLenum target, GLenum pname, GLfloat param), (target, pname, param)) \
  X(void, glTexEnvfv, (GLenum target, GLenum pname, const GLfloat* params), (target, pname, params)) \
  X(void, glTexEnvi, (GLenum target, GLenum pname, GLint param), (target, pname, param)) \
  X(void, glTexEnviv, (GLenum target, GLenum pname, const GLint* params), (target, pname, params)) \
  X(void, glTexEnvx, (GLenum target, GLenum pname, GLfixed param), (target, pname, param)) \
  X(void, glTexEnvxOES, (GLenum target, GLenum pname, GLfixed param), (target, pname, param)) \
  X(void, glTexEnvxv, (GLenum target, GLenum pname, const GLfixed* params), (target, pname, params)) \
  X(void, glTexEnvxvOES, (GLenum target, GLenum pname, const GLfixed* params), (target, pname, params)) \
  X(void, glTexGeniOES, (GLenum coord, GLenum pname, GLint param), (coord, pname, param)) \
  X(void, glTexGenivOES, (GLenum coord, GLenum pname, const GLint* params), (coord, pname, params)) \
  X(void, glTexGenxOES, (GLenum coord, GLenum pname, GLfixed param), (coord, pname, param)) \
  X(void, glTexGenxvOES, (GLenum coord, GLenum pname, const GLfixed* params), (coord, pname, params)) \
  X(void, glTexImage2D, (GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid* pixels), (target, level, internalformat, width, height, border, format, type, pixels)) \
  X(void, glTexParameterf, (GLenum target, GLenum pname, GLfloat param), (target, pname, param)) \
  X(void, glTexParameterfv, (GLenum target, GLenum pname, const GLfloat* params), (target, pname, params)) \
  X(void, glTexParameteri, (GLenum target, GLenum pname, GLint param), (target, pname, param)) \
  X(void, glTexParameteriv, (GLenum target, GLenum pname, const GLint* params), (target, pname, params)) \
  X(void, glTexParameterx, (GLenum target, GLenum pname, GLfixed param), (target, pname, param)) \
  X(void, glTexParameterxOES, (GLenum target, GLenum pname, GLfixed param), (target, pname, param)) \
  X(void, glTexParameterxv, (GLenum target, GLenum pname, const GLfixed* params), (target, pname, params)) \
  X(void, glTexParameterxvOES, (GLenum target, GLenum pname, const GLfixed* params), (target, pname, params)) \
  X(void, glTexSubImage2D, (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* pixels), (target, level, xoffset, yoffset, width, height, format, type, pixels)) \
  X(void, glTranslatef, (GLfloat x, GLfloat y, GLfloat z), (x, y, z)) \
  X(void, glTranslatex, (GLfixed x, GLfixed y, GLfixed z), (x, y, z)) \
  X(void, glTranslatexOES, (GLfixed x, GLfixed y, GLfixed z), (x, y, z)) \
  X(void, glUniform1f, (GLint location, GLfloat x), (location, x)) \
  X(void, glUniform1fv, (GLint location, GLsizei count, const GLfloat* v), (location, count, v)) \
  X(void, glUniform1i, (GLint location, GLint x), (location, x)) \
  X(void, glUniform1iv, (GLint location, GLsizei count, const GLint* v), (location, count, v)) \
  X(void, glUniform2f, (GLint location, GLfloat x, GLfloat y), (location, x, y)) \
  X(void, glUniform2fv, (GLint location, GLsizei count, const GLfloat* v), (location, count, v)) \
  X(void, glUniform2i, (GLint location, GLint x, GLint y), (location, x, y)) \
  X(void, glUniform2iv, (GLint location, GLsizei count, const GLint* v), (location, count, v)) \
  X(void, glUniform3f, (GLint location, GLfloat x, GLfloat y, GLfloat z), (location, x, y, z)) \
  X(void, glUniform3fv, (GLint location, GLsizei count, const GLfloat* v), (location, count, v)) \
  X(void, glUniform3i, (GLint location, GLint x, GLint y, GLint z), (location, x, y, z)) \
  X(void, glUniform3iv, (GLint location, GLsizei count, const GLint* v), (location, count, v)) \
  X(void, glUniform4f, (GLint location, GLfloat x, GLfloat y, GLfloat z, GLfloat w), (location, x, y, z, w)) \
  X(void, glUniform4fv, (GLint location, GLsizei count, const GLfloat* v), (location, count, v)) \
  X(void, glUniform4i, (GLint location, GLint x, GLint y, GLint z, GLint w), (location, x, y, z, w)) \
  X(void, glUniform4iv, (GLint location, GLsizei count, const GLint* v), (location, count, v)) \
  X(void, glUniformMatrix2fv, (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value), (location, count, transpose, value)) \
  X(void, glUniformMatrix3fv, (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value), (location, count, transpose, value)) \
  X(void, glUniformMatrix4fv, (GLint location, GLsizei count, GLboolean transpose, const GLfloat* value), (location, count, transpose, value)) \
  X(void, glUnmapTexSubImage2DCHROMIUM, (const GLvoid* mem), (mem)) \
  X(void, glUseProgram, (GLuint program), (program)) \
  X(void, glValidateProgram, (GLuint program), (program)) \
  X(void, glVertexAttrib1f, (GLuint indx, GLfloat x), (indx, x)) \
  X(void, glVertexAttrib1fv, (GLuint indx, const GLfloat* values), (indx, values)) \
  X(void, glVertexAttrib2f, (GLuint indx, GLfloat x, GLfloat y), (indx, x, y)) \
  X(void, glVertexAttrib2fv, (GLuint indx, const GLfloat* values), (indx, values)) \
  X(void, glVertexAttrib3f, (GLuint indx, GLfloat x, GLfloat y, GLfloat z), (indx, x, y, z)) \
  X(void, glVertexAttrib3fv, (GLuint indx, const GLfloat* values), (indx, values)) \
  X(void, glVertexAttrib4f, (GLuint indx, GLfloat x, GLfloat y, GLfloat z, GLfloat w), (indx, x, y, z, w)) \
  X(void, glVertexAttrib4fv, (GLuint indx, const GLfloat* values), (indx, values)) \
  X(void, glVertexAttribPointer, (GLuint indx, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid* pointer), (indx, size, type, normalized, stride, pointer)) \
  X(void, glVertexPointer, (GLint size, GLenum type, GLsizei stride, const GLvoid* pointer), (size, type, stride, pointer)) \
  X(void, glVertexPointerBounds, (GLint size, GLenum type, GLsizei stride, GLvoid* pointer, GLsizei count), (size, type, stride, pointer, count)) \
  X(void, glViewport, (GLint x, GLint y, GLsizei width, GLsizei height), (x, y, width, height)) \
  X(void, glWeightPointerOES, (GLint size, GLenum type, GLsizei stride, const GLvoid* pointer), (size, type, stride, pointer)) \
  X(void, glWeightPointerOESBounds, (GLint size, GLenum type, GLsizei stride, const GLvoid* pointer, GLsizei count), (size, type, stride, pointer, count)) \


#endif  // GLES12TR_INTERNAL_FUNCTIONS_H
