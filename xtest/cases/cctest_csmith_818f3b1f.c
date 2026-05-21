// SPDX-License-Identifier: MIT
// cctest_csmith_818f3b1f.c --- cctest case csmith_818f3b1f (csmith seed 2173647647)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xc5295e84 */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <math.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static unsigned int crc32_tab[256];
static unsigned int crc32_context = 0xFFFFFFFFUL;

static void crc32_gentab(void)
{
   int i, j;
   unsigned int crc;
   for (i = 0; i < 256; i++) {
      crc = (unsigned int)i;
      for (j = 0; j < 8; j++)
         crc = (crc & 1U) ? ((crc >> 1) ^ 0xEDB88320UL) : (crc >> 1);
      crc32_tab[i] = crc;
   }
}

static void crc32_byte(unsigned char b)
{
   crc32_context = ((crc32_context >> 8) & 0x00FFFFFFUL) ^
                   crc32_tab[(crc32_context ^ (unsigned int)b) & 0xFFU];
}

static void transparent_crc(unsigned long long val, const char *vname, int flag)
{
   int i;
   (void)vname;
   (void)flag;
   for (i = 0; i < 8; i++)
      crc32_byte((unsigned char)((val >> (i * 8)) & 0xFFULL));
}

static void platform_main_begin(void) {}

static int8_t
safe_unary_minus_func_int8_t_s(int8_t si )
{
 
  return
    -si;
}
static int8_t
safe_add_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 + si2);
}
static int8_t
safe_sub_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 - si2);
}
static int8_t
safe_mul_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    si1 * si2;
}
static int8_t
safe_mod_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
safe_div_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int8_t
safe_lshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
safe_lshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
safe_rshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
safe_rshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
safe_unary_minus_func_int16_t_s(int16_t si )
{
 
  return
    -si;
}
static int16_t
safe_add_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 + si2);
}
static int16_t
safe_sub_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 - si2);
}
static int16_t
safe_mul_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    si1 * si2;
}
static int16_t
safe_mod_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
safe_div_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int16_t
safe_lshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
safe_lshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
safe_rshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int16_t
safe_rshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
safe_unary_minus_func_int32_t_s(int32_t si )
{
 
  return
    (si==(-2147483647-1)) ?
    ((si)) :
    -si;
}
static int32_t
safe_add_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
safe_sub_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
safe_mul_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int32_t
safe_mod_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int32_t
safe_div_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int32_t
safe_lshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int32_t
safe_lshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int32_t
safe_rshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int32_t
safe_rshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int64_t
safe_unary_minus_func_int64_t_s(int64_t si )
{
 
  return
    (si==(-9223372036854775807L -1)) ?
    ((si)) :
    -si;
}
static int64_t
safe_add_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int64_t
safe_sub_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int64_t
safe_mul_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807L) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807L -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807L -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807L) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int64_t
safe_mod_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int64_t
safe_div_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int64_t
safe_lshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807L) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int64_t
safe_lshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807L) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int64_t
safe_rshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int64_t
safe_rshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint8_t
safe_unary_minus_func_uint8_t_u(uint8_t ui )
{
 
  return -ui;
}
static uint8_t
safe_add_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 + ui2;
}
static uint8_t
safe_sub_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 - ui2;
}
static uint8_t
safe_mul_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t
safe_mod_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
safe_div_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint8_t
safe_lshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
safe_lshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
safe_unary_minus_func_uint16_t_u(uint16_t ui )
{
 
  return -ui;
}
static uint16_t
safe_add_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 + ui2;
}
static uint16_t
safe_sub_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 - ui2;
}
static uint16_t
safe_mul_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
safe_mod_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
safe_div_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint16_t
safe_lshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
safe_lshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint32_t
safe_unary_minus_func_uint32_t_u(uint32_t ui )
{
 
  return -ui;
}
static uint32_t
safe_add_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 + ui2;
}
static uint32_t
safe_sub_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 - ui2;
}
static uint32_t
safe_mul_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint32_t
safe_mod_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t
safe_div_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t
safe_lshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint32_t
safe_lshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint64_t
safe_unary_minus_func_uint64_t_u(uint64_t ui )
{
 
  return -ui;
}
static uint64_t
safe_add_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 + ui2;
}
static uint64_t
safe_sub_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 - ui2;
}
static uint64_t
safe_mul_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ((unsigned long long)ui1) * ((unsigned long long)ui2);
}
static uint64_t
safe_mod_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint64_t
safe_div_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint64_t
safe_lshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615UL) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint64_t
safe_lshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615UL) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static float
safe_add_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static float
safe_sub_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static float
safe_mul_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * FLT_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static float
safe_div_func_float_f_f(float sf1, float sf2 )
{
 
  return
    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * FLT_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static double
safe_add_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static double
safe_sub_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static double
safe_mul_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * DBL_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static double
safe_div_func_double_f_f(double sf1, double sf2 )
{
 
  return
    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * DBL_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static int32_t
safe_convert_func_float_to_int32_t(float sf1 )
{
 
  return
    ((sf1 <= (-2147483647-1)) || (sf1 >= (2147483647))) ?
    ((2147483647)) :
    ((int32_t)(sf1));
}

// Options:   -s 2173647647 -o /tmp/csmith_gen_h5meqv09/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   uint16_t  f1;
   const uint8_t  f2;
   int64_t  f3;
   int64_t  f4;
};
#pragma pack(pop)

union U1 {
   struct S0  f0;
   const int64_t  f1;
   uint64_t  f2;
   uint64_t  f3;
   struct S0  f4;
};


static int64_t g_5[4][6] = {{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L}};
static uint64_t g_26 = 18446744073709551615UL;
static uint64_t *g_36 = (void*)0;
static int32_t g_37[7][7] = {{0x02095D7CL,0x02095D7CL,0x02095D7CL,0x02095D7CL,0x02095D7CL,0x02095D7CL,0x02095D7CL},{(-5L),0x36FC75DFL,(-5L),0x36FC75DFL,(-5L),0x36FC75DFL,(-5L)},{0x02095D7CL,0x02095D7CL,0x02095D7CL,0x02095D7CL,0x02095D7CL,0x02095D7CL,0x02095D7CL},{(-5L),0x36FC75DFL,(-5L),0x36FC75DFL,(-5L),0x36FC75DFL,(-5L)},{0x02095D7CL,0x02095D7CL,0x02095D7CL,0x02095D7CL,0x02095D7CL,0x02095D7CL,0x02095D7CL},{(-5L),0x36FC75DFL,(-5L),0x36FC75DFL,(-5L),0x36FC75DFL,(-5L)},{0x02095D7CL,0x02095D7CL,0x02095D7CL,0x02095D7CL,0x02095D7CL,0x02095D7CL,0x02095D7CL}};
static int32_t g_38 = 0x04D9FABAL;
static int32_t g_39 = 0xD49ACB08L;
static int32_t g_40 = 0xC3CBAA6FL;
static union U1 g_64[1] = {{{5L,1UL,0x96L,0x819277EF9B05D12CLL,0xED49F2EA6DA23AE4LL}}};
static int32_t g_67 = 0x34FF3317L;
static int8_t g_75 = 0L;
static uint16_t g_101 = 65535UL;
static int32_t g_124[7] = {0x9A2F9BC0L,0x9A2F9BC0L,0x9A2F9BC0L,0x9A2F9BC0L,0x9A2F9BC0L,0x9A2F9BC0L,0x9A2F9BC0L};
static uint8_t g_144 = 1UL;
static uint8_t g_147 = 255UL;
static uint32_t g_148 = 4UL;
static struct S0 *g_149 = &g_64[0].f4;
static struct S0 g_151 = {0L,0xBDCDL,250UL,0x765711E98D028DA7LL,0x552D92CF6085DACFLL};
static int32_t *g_154 = &g_39;
static int32_t **g_153 = &g_154;
static int32_t ***g_152 = &g_153;
static int16_t g_169 = 0x06F3L;
static const int16_t *g_168 = &g_169;
static int32_t g_170 = 6L;
static int32_t g_171 = (-1L);
static uint16_t g_173 = 1UL;
static int32_t g_256 = (-5L);
static uint64_t g_257 = 0x5511DEB27686EDB6LL;
static uint64_t g_274[2] = {3UL,3UL};
static uint32_t g_312 = 0UL;
static int8_t g_315 = (-8L);
static uint16_t **g_325 = (void*)0;
static int64_t g_337 = 1L;
static int32_t g_341 = 0x80FBE33AL;
static uint32_t g_342[5] = {0UL,0UL,0UL,0UL,0UL};
static int16_t *g_376 = &g_169;
static int8_t g_453 = 0xAEL;
static int32_t g_454 = 0L;
static int16_t g_456 = 2L;
static int16_t g_457 = 0L;
static const uint16_t g_464 = 0UL;
static int8_t *g_484 = (void*)0;
static union U1 g_497 = {{-1L,65535UL,0xD5L,2L,0x4B032A23CF2D43B3LL}};
static uint16_t g_527 = 0x1AF7L;
static uint64_t g_562 = 18446744073709551615UL;
static const struct S0 g_583 = {-9L,65535UL,0x01L,1L,0x7FCF06569B85AA37LL};
static const struct S0 *g_582 = &g_583;
static uint8_t g_600 = 1UL;
static uint8_t g_604[5] = {1UL,1UL,1UL,1UL,1UL};
static const int32_t g_624[3][7][2] = {{{(-5L),(-5L)},{4L,1L},{0x6D8083B9L,1L},{4L,(-5L)},{(-5L),4L},{1L,0x6D8083B9L},{1L,4L}},{{(-5L),(-5L)},{4L,1L},{0x6D8083B9L,1L},{4L,(-5L)},{(-5L),4L},{1L,0x6D8083B9L},{1L,4L}},{{(-5L),(-5L)},{4L,1L},{0x6D8083B9L,1L},{4L,(-5L)},{(-5L),4L},{1L,0x6D8083B9L},{1L,4L}}};
static const int32_t *g_629[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static uint32_t g_637 = 0x34A4371AL;
static int16_t * const *g_692 = &g_376;
static int16_t * const **g_691 = &g_692;
static uint32_t g_714 = 0x561F06BFL;
static uint32_t g_840[5] = {0x15969EF1L,0x15969EF1L,0x15969EF1L,0x15969EF1L,0x15969EF1L};
static uint32_t g_908 = 0x63B4F2B7L;
static int64_t g_930 = 0L;
static int32_t g_932 = (-1L);
static int32_t g_933 = 0x270E9911L;
static uint32_t g_934[7] = {4294967294UL,4294967295UL,4294967294UL,4294967294UL,4294967295UL,4294967294UL,4294967294UL};
static uint8_t * const *g_946 = (void*)0;
static int64_t *g_952 = &g_497.f4.f4;
static int64_t **g_951 = &g_952;
static uint8_t *g_977 = &g_604[1];
static uint8_t **g_976[6][7][2] = {{{&g_977,&g_977},{&g_977,&g_977},{(void*)0,&g_977},{&g_977,&g_977},{&g_977,(void*)0},{&g_977,&g_977},{&g_977,&g_977}},{{&g_977,&g_977},{&g_977,(void*)0},{&g_977,&g_977},{&g_977,&g_977},{(void*)0,&g_977},{&g_977,&g_977},{&g_977,(void*)0}},{{&g_977,&g_977},{&g_977,&g_977},{&g_977,(void*)0},{&g_977,&g_977},{&g_977,&g_977},{(void*)0,&g_977},{&g_977,&g_977}},{{&g_977,(void*)0},{&g_977,&g_977},{&g_977,&g_977},{&g_977,&g_977},{&g_977,(void*)0},{&g_977,&g_977},{&g_977,&g_977}},{{(void*)0,&g_977},{&g_977,&g_977},{&g_977,(void*)0},{&g_977,&g_977},{&g_977,&g_977},{&g_977,(void*)0},{&g_977,&g_977}},{{&g_977,&g_977},{(void*)0,&g_977},{&g_977,&g_977},{&g_977,(void*)0},{&g_977,&g_977},{&g_977,&g_977},{&g_977,&g_977}}};
static uint8_t ***g_975 = &g_976[2][6][1];
static uint16_t *g_1009 = &g_173;
static uint16_t **g_1008[6] = {&g_1009,&g_1009,&g_1009,&g_1009,&g_1009,&g_1009};
static int32_t g_1050 = 0x63948D74L;
static int16_t g_1055 = (-4L);
static int32_t g_1135 = 0x392C4B23L;
static int64_t ***g_1235[3] = {&g_951,&g_951,&g_951};
static int64_t ****g_1234 = &g_1235[0];
static uint32_t g_1264 = 0x9D501058L;
static int8_t * const *g_1296 = &g_484;
static uint32_t g_1315 = 0x350FB022L;
static uint64_t g_1371 = 0xCAA053030764E819LL;
static const int8_t *g_1390[3][1] = {{&g_75},{&g_75},{&g_75}};
static const int8_t **g_1389 = &g_1390[0][0];
static const int8_t ***g_1388[5][3] = {{&g_1389,&g_1389,&g_1389},{&g_1389,&g_1389,&g_1389},{&g_1389,&g_1389,&g_1389},{&g_1389,&g_1389,&g_1389},{&g_1389,&g_1389,&g_1389}};
static const int8_t ****g_1387 = &g_1388[2][0];
static const int16_t g_1419 = 0xFA47L;
static union U1 *g_1440 = &g_64[0];
static union U1 **g_1439 = &g_1440;
static int16_t *g_1507 = (void*)0;
static uint32_t g_1522 = 0x09E06A65L;
static const int64_t g_1621 = (-6L);
static int32_t g_1632 = 0x0348BC60L;
static uint64_t g_1633[3] = {0xBFDAD68E57470A0CLL,0xBFDAD68E57470A0CLL,0xBFDAD68E57470A0CLL};
static const uint16_t *g_1667 = &g_464;
static const uint16_t **g_1666 = &g_1667;
static const uint16_t ***g_1665 = &g_1666;
static const uint16_t *** const *g_1664 = &g_1665;
static const uint16_t *** const **g_1663 = &g_1664;
static uint16_t g_1679 = 65531UL;
static int8_t g_1682 = 3L;
static int32_t g_1683[5] = {1L,1L,1L,1L,1L};
static struct S0 g_1710 = {0xEE1499D7L,0x754BL,255UL,1L,0xA2CA731945C12FCCLL};
static const int32_t g_1731 = (-3L);
static int16_t g_1785 = 0xE86DL;
static uint16_t ***g_1884 = &g_1008[3];
static uint16_t ****g_1883[5][1] = {{&g_1884},{(void*)0},{&g_1884},{(void*)0},{&g_1884}};
static uint16_t *****g_1882[6][3][6] = {{{&g_1883[0][0],&g_1883[0][0],&g_1883[1][0],&g_1883[4][0],(void*)0,&g_1883[3][0]},{&g_1883[1][0],&g_1883[0][0],&g_1883[2][0],&g_1883[1][0],&g_1883[0][0],&g_1883[1][0]},{&g_1883[2][0],&g_1883[1][0],&g_1883[2][0],&g_1883[0][0],&g_1883[0][0],&g_1883[3][0]}},{{&g_1883[0][0],&g_1883[0][0],&g_1883[1][0],&g_1883[0][0],&g_1883[0][0],&g_1883[0][0]},{&g_1883[0][0],&g_1883[0][0],&g_1883[0][0],&g_1883[0][0],&g_1883[1][0],&g_1883[0][0]},{&g_1883[0][0],&g_1883[3][0],&g_1883[0][0],&g_1883[0][0],&g_1883[2][0],&g_1883[1][0]}},{{&g_1883[2][0],&g_1883[1][0],&g_1883[0][0],&g_1883[1][0],&g_1883[2][0],&g_1883[0][0]},{&g_1883[1][0],&g_1883[3][0],(void*)0,&g_1883[4][0],&g_1883[1][0],&g_1883[0][0]},{&g_1883[0][0],&g_1883[0][0],&g_1883[3][0],&g_1883[3][0],&g_1883[0][0],&g_1883[0][0]}},{{&g_1883[4][0],&g_1883[0][0],(void*)0,&g_1883[2][0],&g_1883[0][0],&g_1883[0][0]},{&g_1883[0][0],&g_1883[1][0],&g_1883[0][0],&g_1883[0][0],&g_1883[0][0],&g_1883[1][0]},{&g_1883[0][0],&g_1883[0][0],&g_1883[0][0],&g_1883[2][0],(void*)0,&g_1883[0][0]}},{{&g_1883[4][0],&g_1883[0][0],&g_1883[0][0],&g_1883[3][0],&g_1883[3][0],&g_1883[0][0]},{&g_1883[0][0],&g_1883[0][0],&g_1883[1][0],&g_1883[4][0],(void*)0,&g_1883[3][0]},{&g_1883[1][0],&g_1883[0][0],&g_1883[2][0],&g_1883[1][0],&g_1883[0][0],&g_1883[1][0]}},{{&g_1883[2][0],&g_1883[1][0],&g_1883[2][0],&g_1883[0][0],&g_1883[0][0],&g_1883[3][0]},{&g_1883[0][0],&g_1883[0][0],&g_1883[1][0],&g_1883[0][0],&g_1883[0][0],&g_1883[0][0]},{&g_1883[0][0],&g_1883[0][0],&g_1883[0][0],&g_1883[0][0],&g_1883[1][0],&g_1883[0][0]}}};
static int64_t *g_1911 = &g_64[0].f0.f4;
static int64_t ** const g_1910[3][5] = {{&g_1911,&g_1911,&g_1911,&g_1911,&g_1911},{&g_1911,&g_1911,&g_1911,&g_1911,&g_1911},{&g_1911,&g_1911,&g_1911,&g_1911,&g_1911}};
static int64_t ** const *g_1909 = &g_1910[2][3];
static uint64_t **g_1921 = &g_36;
static uint64_t ** const *g_1920 = &g_1921;
static int64_t g_1948 = 1L;
static int32_t *g_1983 = &g_170;
static int32_t ***g_2034 = &g_153;
static struct S0 g_2041 = {0L,0x68E2L,246UL,1L,0x1073345162244C4CLL};
static const struct S0 *g_2040[3][6] = {{&g_2041,&g_2041,&g_2041,&g_2041,&g_2041,&g_2041},{&g_2041,&g_2041,&g_2041,&g_2041,&g_2041,&g_2041},{&g_2041,&g_2041,&g_2041,&g_2041,&g_2041,&g_2041}};



static uint64_t  func_1(void);
static int32_t  func_2(int64_t  p_3);
static int64_t * func_6(int32_t  p_7, int16_t  p_8);
static int32_t * const  func_12(uint64_t  p_13);
static int64_t  func_14(int64_t  p_15, int32_t  p_16, uint32_t  p_17, int16_t  p_18);
static int64_t  func_19(int64_t  p_20, uint32_t  p_21, int64_t * p_22, uint16_t  p_23, int64_t * const  p_24);
static uint32_t  func_29(int32_t  p_30, int64_t * p_31, const uint64_t  p_32);
static union U1  func_34(uint64_t * p_35);




static uint64_t  func_1(void)
{ 
    int64_t *l_4 = &g_5[2][3];
    int32_t l_1865 = 0x8F458976L;
    int32_t l_1869[4];
    int8_t l_1871 = 0x50L;
    int8_t l_1872[7] = {0x18L,(-10L),(-10L),0x18L,(-10L),(-10L),0x18L};
    int16_t l_1874[2][5] = {{0L,0L,0L,0L,0L},{(-8L),0L,(-8L),0L,(-8L)}};
    int16_t l_1876 = (-7L);
    int64_t l_1904 = 0x00A0BE0C58B87C32LL;
    uint8_t *l_1938[2][6][2] = {{{(void*)0,&g_144},{(void*)0,(void*)0},{&g_144,(void*)0},{&g_144,&g_144},{(void*)0,&g_144},{&g_144,(void*)0}},{{&g_144,(void*)0},{(void*)0,&g_144},{(void*)0,(void*)0},{(void*)0,&g_144},{(void*)0,(void*)0},{&g_144,(void*)0}}};
    uint32_t l_1962 = 0x7B79B47FL;
    int32_t l_1971[6] = {0x59F1D20EL,0x59F1D20EL,0x59F1D20EL,0x59F1D20EL,0x59F1D20EL,0x59F1D20EL};
    uint32_t l_1973 = 0xC14EAB7AL;
    uint8_t l_1994 = 1UL;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1869[i] = (-1L);
    if ((l_1865 |= func_2(((*l_4) ^= 7L))))
    { 
        uint32_t l_1866 = 0UL;
        return l_1866;
    }
    else
    { 
        int32_t *l_1867 = (void*)0;
        int32_t *l_1868[1];
        int32_t l_1870 = 0x1BAE0ADDL;
        int64_t l_1873 = 0x4A0895861EE9C756LL;
        int32_t l_1875 = 1L;
        uint16_t l_1877 = 0x9198L;
        uint8_t l_1887[1][7];
        int64_t ***l_1912[1][2];
        int32_t l_1913 = 0x6413D026L;
        uint32_t l_1930 = 0x47D21C06L;
        int64_t l_1964 = 1L;
        uint16_t * const *l_1967 = &g_1009;
        union U1 l_2020 = {{1L,65535UL,0xD5L,0x6CA7912165B38791LL,0L}};
        int i, j;
        for (i = 0; i < 1; i++)
            l_1868[i] = &l_1865;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 7; j++)
                l_1887[i][j] = 0x60L;
        }
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_1912[i][j] = &g_951;
        }
        l_1877++;
        (*g_153) = (l_1874[1][4] , (void*)0);
        for (g_1135 = 3; (g_1135 >= 0); g_1135 -= 1)
        { 
            uint16_t ****l_1897 = &g_1884;
            int16_t *l_1902 = &l_1876;
            uint32_t l_1903 = 0x6CFE3CF0L;
            int32_t *l_1905 = &g_1050;
            int64_t ** const *l_1906 = &g_951;
            int64_t ** const **l_1907 = (void*)0;
            int64_t ** const **l_1908[3][5] = {{&l_1906,&l_1906,&l_1906,&l_1906,&l_1906},{&l_1906,(void*)0,&l_1906,(void*)0,&l_1906},{&l_1906,&l_1906,&l_1906,&l_1906,&l_1906}};
            int8_t **l_1926 = &g_484;
            int8_t l_1934 = (-9L);
            int32_t l_1969 = 0xBACE2120L;
            int32_t l_1984 = 6L;
            struct S0 **l_2039 = &g_149;
            int i, j;
            l_1887[0][5] |= (0x2A69L < (safe_div_func_int32_t_s_s((g_1882[3][1][3] != (void*)0), (safe_lshift_func_uint16_t_u_s(((*g_977) , (*g_1009)), 15)))));
            l_1865 = (safe_mod_func_uint8_t_u_u(((*g_977) = ((safe_lshift_func_uint8_t_u_u((+l_1874[1][4]), ((safe_rshift_func_int16_t_s_u((((((g_1909 = ((safe_add_func_int32_t_s_s(((*g_1663) != l_1897), (((*l_1905) |= (safe_mod_func_uint32_t_u_u(l_1872[5], (((safe_lshift_func_uint16_t_u_s(((((*l_1902) ^= (*g_376)) >= (((*g_1667) , ((*l_4) &= l_1903)) , (*g_168))) , l_1904), (***g_691))) , l_1869[0]) | (***g_691))))) , g_256))) , l_1906)) == l_1912[0][0]) , 6L) , l_1913) , (**g_692)), 13)) <= l_1903))) ^ l_1865)), 0xE3L));
            for (g_101 = 0; (g_101 <= 4); g_101 += 1)
            { 
                int32_t l_1937 = 0x1CA4BE6FL;
                int32_t ****l_1961 = (void*)0;
                uint16_t ** const l_1968 = &g_1009;
                const int64_t l_1985 = 5L;
                union U1 ***l_2007 = &g_1439;
                uint32_t *l_2010 = &l_1962;
                uint64_t l_2011 = 18446744073709551615UL;
                int64_t l_2032[4];
                uint8_t l_2035 = 1UL;
                uint8_t ***l_2036[5][5] = {{&g_976[3][1][1],&g_976[1][4][1],&g_976[5][1][1],&g_976[5][1][1],&g_976[1][4][1]},{&g_976[2][6][1],&g_976[0][0][1],&g_976[5][1][1],&g_976[2][6][1],&g_976[2][6][1]},{&g_976[0][0][1],&g_976[2][6][1],&g_976[0][0][1],&g_976[5][1][1],&g_976[2][6][1]},{&g_976[1][4][1],&g_976[3][1][1],&g_976[2][6][1],&g_976[3][1][1],&g_976[1][4][1]},{&g_976[0][0][1],&g_976[3][1][1],&g_976[2][6][1],&g_976[1][4][1],&g_976[2][6][1]}};
                int i, j;
                for (i = 0; i < 4; i++)
                    l_2032[i] = 1L;
                if (g_37[(g_1135 + 1)][(g_1135 + 3)])
                    break;
            }
            (*l_2039) = &g_1710;
            for (g_527 = 1; (g_527 <= 4); g_527 += 1)
            { 
                int64_t l_2064[4][7][1] = {{{0x18F8E97814F2A475LL},{0x88659894B5D77279LL},{0x18F8E97814F2A475LL},{0xED4D6A42FD38F414LL},{0x18F8E97814F2A475LL},{0x88659894B5D77279LL},{0x18F8E97814F2A475LL}},{{0xED4D6A42FD38F414LL},{0x18F8E97814F2A475LL},{0x88659894B5D77279LL},{0x18F8E97814F2A475LL},{0xED4D6A42FD38F414LL},{0x18F8E97814F2A475LL},{0x88659894B5D77279LL}},{{0x18F8E97814F2A475LL},{0xED4D6A42FD38F414LL},{0x18F8E97814F2A475LL},{0x88659894B5D77279LL},{0x18F8E97814F2A475LL},{0xED4D6A42FD38F414LL},{0x18F8E97814F2A475LL}},{{0x88659894B5D77279LL},{0x18F8E97814F2A475LL},{0xED4D6A42FD38F414LL},{0x18F8E97814F2A475LL},{0x88659894B5D77279LL},{0x18F8E97814F2A475LL},{0xED4D6A42FD38F414LL}}};
                int i, j, k;
                g_2040[0][4] = &g_583;
                (*g_1439) = (*g_1439);
                for (l_2020.f0.f0 = 3; (l_2020.f0.f0 >= 0); l_2020.f0.f0 -= 1)
                { 
                    uint32_t l_2042 = 0x22C1C47AL;
                    uint32_t *l_2049 = &l_1962;
                    l_2042--;
                    (*g_1983) &= ((safe_lshift_func_uint8_t_u_s(l_2042, 4)) == (((***g_1884) = (safe_mod_func_uint32_t_u_u(1UL, ((*l_2049) = l_1934)))) || (((l_1984 = (safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((4UL & l_1962), (safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((**g_1666) && ((safe_rshift_func_uint16_t_u_u(((****l_1897) = (safe_sub_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(((*g_977) = ((*g_582) , l_1994)), (-1L))), l_1984))), l_2042)) <= l_2064[0][6][0])), (*g_376))), l_2042)))), 0x3AL))) ^ (*g_376)) != (-3L))));
                }
            }
        }
    }
    return l_1869[0];
}



static int32_t  func_2(int64_t  p_3)
{ 
    int32_t l_9 = 0L;
    int16_t *l_10 = (void*)0;
    int32_t l_11 = (-7L);
    int32_t l_1840[1];
    int64_t *** const *l_1859 = &g_1235[2];
    uint16_t l_1862 = 0UL;
    int32_t l_1863 = 0x19ABFE0EL;
    int i;
    for (i = 0; i < 1; i++)
        l_1840[i] = (-1L);
    l_1840[0] |= (((*g_951) = func_6(l_9, (l_11 ^= (-1L)))) == (l_9 , &p_3));
    for (g_600 = 0; (g_600 >= 47); g_600 = safe_add_func_int8_t_s_s(g_600, 5))
    { 
        uint16_t l_1860 = 1UL;
        uint64_t l_1861 = 0xF94B36DB58148E9BLL;
        uint64_t l_1864[6][3] = {{18446744073709551611UL,0xBD8800527DEFDBA3LL,0UL},{18446744073709551611UL,0x8F2DADF474F706B3LL,0UL},{18446744073709551611UL,18446744073709551615UL,18446744073709551611UL},{18446744073709551611UL,0xBD8800527DEFDBA3LL,0UL},{18446744073709551611UL,0x8F2DADF474F706B3LL,0UL},{18446744073709551611UL,18446744073709551615UL,18446744073709551611UL}};
        int i, j;
        (*g_154) ^= (safe_sub_func_int64_t_s_s(((((safe_sub_func_int32_t_s_s((((safe_rshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s(p_3, ((4294967288UL < ((((safe_add_func_uint8_t_u_u(((*g_376) < (((*g_1009) = ((safe_rshift_func_uint16_t_u_s(p_3, 3)) , (safe_sub_func_int16_t_s_s(((((l_1859 == (void*)0) <= (6L > l_1860)) >= l_9) || 0xC8L), l_1861)))) < l_1860)), l_1862)) , 7L) > p_3) & g_497.f0.f1)) != p_3))), 11)) ^ l_1862) | p_3), g_1710.f3)) && l_1863) >= p_3) , 0x34C35238BCC6EB09LL), l_1864[1][0]));
    }
    return p_3;
}



static int64_t * func_6(int32_t  p_7, int16_t  p_8)
{ 
    int64_t *l_33 = (void*)0;
    int32_t l_767 = 0x3B7B4B6FL;
    int32_t l_848 = (-2L);
    int32_t l_1124 = 0x88A238ABL;
    uint8_t l_1127 = 251UL;
    int32_t l_1133 = 0x6C97C928L;
    int32_t l_1134[6];
    int8_t l_1137 = (-1L);
    int32_t l_1287[1][2];
    int32_t l_1318 = 0xC6489612L;
    int16_t l_1340 = (-1L);
    int8_t ****l_1386 = (void*)0;
    const union U1 *l_1411 = &g_64[0];
    uint64_t **l_1430 = &g_36;
    uint64_t ***l_1429 = &l_1430;
    uint32_t l_1444[3];
    int32_t *l_1445 = (void*)0;
    const int32_t **l_1525 = &g_629[0];
    const uint8_t l_1553[6] = {255UL,255UL,255UL,255UL,255UL,255UL};
    uint16_t ***l_1557 = &g_1008[4];
    uint16_t ****l_1556[7][3][1] = {{{&l_1557},{&l_1557},{&l_1557}},{{&l_1557},{&l_1557},{&l_1557}},{{&l_1557},{&l_1557},{&l_1557}},{{&l_1557},{&l_1557},{&l_1557}},{{&l_1557},{&l_1557},{&l_1557}},{{&l_1557},{&l_1557},{&l_1557}},{{&l_1557},{&l_1557},{&l_1557}}};
    uint8_t l_1606 = 0UL;
    int16_t ****l_1622 = (void*)0;
    uint8_t l_1693[3];
    uint8_t ****l_1727 = &g_975;
    uint32_t l_1790 = 1UL;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_1134[i] = 7L;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_1287[i][j] = 0x8208BE01L;
    }
    for (i = 0; i < 3; i++)
        l_1444[i] = 0UL;
    for (i = 0; i < 3; i++)
        l_1693[i] = 8UL;
    for (p_8 = 0; (p_8 <= 3); p_8 += 1)
    { 
        uint64_t *l_25 = &g_26;
        int16_t l_766[4][7] = {{0x5864L,0x7229L,8L,8L,0x7229L,0x5864L,(-2L)},{0x5864L,0x7229L,8L,8L,0x7229L,0x5864L,(-2L)},{0x5864L,0x7229L,8L,8L,0x7229L,0x5864L,(-2L)},{0x5864L,0x7229L,8L,8L,0x7229L,0x5864L,(-2L)}};
        int32_t **l_1120[7][1][7] = {{{&g_154,(void*)0,(void*)0,&g_154,(void*)0,&g_154,(void*)0}},{{(void*)0,(void*)0,(void*)0,&g_154,&g_154,(void*)0,(void*)0}},{{(void*)0,&g_154,(void*)0,&g_154,(void*)0,(void*)0,&g_154}},{{&g_154,(void*)0,&g_154,&g_154,&g_154,&g_154,(void*)0}},{{&g_154,(void*)0,(void*)0,(void*)0,(void*)0,&g_154,(void*)0}},{{&g_154,&g_154,&g_154,&g_154,(void*)0,&g_154,&g_154}},{{(void*)0,(void*)0,&g_154,(void*)0,&g_154,(void*)0,(void*)0}}};
        int32_t **l_1121 = &g_154;
        struct S0 * const l_1158 = &g_497.f4;
        const uint8_t l_1206 = 0xEDL;
        union U1 l_1214 = {{-10L,0UL,255UL,2L,0x2A59ED2E171BE298LL}};
        uint16_t *l_1225 = (void*)0;
        int64_t **** const *l_1263 = (void*)0;
        struct S0 l_1281 = {0xB8254C82L,1UL,1UL,2L,-1L};
        uint16_t ***l_1298 = &g_325;
        uint16_t **** const l_1297[4][7] = {{(void*)0,&l_1298,&l_1298,&l_1298,&l_1298,(void*)0,(void*)0},{(void*)0,&l_1298,&l_1298,&l_1298,&l_1298,(void*)0,(void*)0},{(void*)0,&l_1298,&l_1298,&l_1298,&l_1298,(void*)0,(void*)0},{(void*)0,&l_1298,&l_1298,&l_1298,&l_1298,(void*)0,(void*)0}};
        int64_t l_1443[2][5][7] = {{{0xC4C6675ACDADEB57LL,0xF8211013E3F8E1DELL,(-3L),(-1L),0x3234C26843189D7ALL,0x8F823152868AFE38LL,0x8F823152868AFE38LL},{0x15A65D24EF2FB4BBLL,0xFDC9BF8FCEA46C02LL,0x7D42ED3C0B58F42DLL,0xFDC9BF8FCEA46C02LL,0x15A65D24EF2FB4BBLL,(-8L),(-10L)},{(-10L),0xF8211013E3F8E1DELL,0x8F823152868AFE38LL,(-8L),2L,0xC4C6675ACDADEB57LL,2L},{0xB4AB3ADA0757B1C6LL,(-1L),(-1L),0xB4AB3ADA0757B1C6LL,0xFDC9BF8FCEA46C02LL,0x01BEB3D1468B70DCLL,4L},{(-10L),(-8L),0x3234C26843189D7ALL,4L,(-4L),(-4L),4L}},{{0x15A65D24EF2FB4BBLL,(-10L),0x15A65D24EF2FB4BBLL,0x01BEB3D1468B70DCLL,(-1L),8L,4L},{0xC4C6675ACDADEB57LL,(-9L),2L,0x3234C26843189D7ALL,0xB4554C4C6420365ALL,0x3234C26843189D7ALL,2L},{(-1L),(-1L),0xFDC9BF8FCEA46C02LL,0x6768856F1AA872BCLL,0xCE437AE0858C3B9FLL,8L,(-10L)},{(-1L),0x8F823152868AFE38LL,(-4L),0xF8211013E3F8E1DELL,0xF8211013E3F8E1DELL,(-4L),0x8F823152868AFE38LL},{(-1L),(-8L),(-1L),0x15A65D24EF2FB4BBLL,0xCE437AE0858C3B9FLL,0x01BEB3D1468B70DCLL,0x6768856F1AA872BCLL}}};
        uint32_t l_1458 = 4294967295UL;
        uint32_t l_1465 = 4294967295UL;
        uint8_t l_1476 = 255UL;
        uint32_t l_1564 = 1UL;
        int16_t **l_1588 = &g_376;
        int16_t ***l_1587[1];
        uint32_t l_1596 = 0x51000D5CL;
        const int32_t l_1623 = 6L;
        int32_t l_1642 = 8L;
        const int32_t l_1652 = 1L;
        int32_t ** const **l_1660 = (void*)0;
        uint16_t l_1668 = 0x0D85L;
        uint16_t l_1687 = 0x9389L;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1587[i] = &l_1588;
    }
    if (((safe_div_func_int16_t_s_s(0xAD74L, (*g_168))) == g_5[2][3]))
    { 
        int8_t **l_1704[5];
        struct S0 *l_1709 = &g_1710;
        int32_t l_1722 = 4L;
        int32_t l_1728 = 0x863720CAL;
        uint16_t l_1743 = 0x191BL;
        int32_t l_1789[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
        int32_t l_1793 = 0x09F980ECL;
        uint8_t l_1794 = 0x18L;
        int i;
        for (i = 0; i < 5; i++)
            l_1704[i] = &g_484;
        for (l_1606 = (-23); (l_1606 >= 4); ++l_1606)
        { 
            int8_t **l_1703 = &g_484;
            int8_t ***l_1702 = &l_1703;
            const struct S0 * const l_1705 = &g_583;
            struct S0 *l_1706 = &g_64[0].f4;
            struct S0 **l_1707 = (void*)0;
            struct S0 **l_1708[7] = {&g_149,&g_149,&g_149,&g_149,&g_149,&g_149,&g_149};
            uint32_t l_1711 = 2UL;
            int32_t l_1732[1];
            int i;
            for (i = 0; i < 1; i++)
                l_1732[i] = 0x38C1A5D1L;
            l_1711 = ((safe_lshift_func_int8_t_s_u((((*l_1702) = &g_484) == l_1704[0]), 0)) <= ((l_1705 == (l_1709 = l_1706)) ^ ((****g_1234) < p_7)));
            l_1732[0] |= (safe_lshift_func_int16_t_s_u((safe_add_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(g_151.f4, ((***g_152) = l_1722))), (safe_lshift_func_uint16_t_u_s((safe_div_func_int8_t_s_s((((***g_691) |= (l_1728 |= (&g_975 == l_1727))) , 2L), (l_1318 |= (safe_add_func_uint32_t_u_u(p_8, p_8))))), 10)))), 13)), g_1731)), 8));
            for (g_1710.f4 = 0; (g_1710.f4 != (-27)); g_1710.f4--)
            { 
                uint32_t *l_1741 = &g_934[4];
                int32_t *l_1742 = &l_1124;
                int32_t l_1744 = 0x4F3C3035L;
                int8_t l_1748[4];
                uint8_t *l_1749 = (void*)0;
                uint8_t *l_1750[2][4] = {{&g_600,&g_600,&g_144,&g_600},{&g_600,&l_1127,&l_1127,&g_600}};
                int i, j;
                for (i = 0; i < 4; i++)
                    l_1748[i] = (-2L);
                (*g_154) = ((safe_mod_func_int16_t_s_s(((((*l_1742) &= (((((*g_1009) = (safe_mul_func_int8_t_s_s((safe_mod_func_int16_t_s_s((g_637 , ((void*)0 != (*g_951))), 0xE93DL)), 0xE4L))) < 0x338CL) ^ ((*l_1741) = p_7)) & 1L)) , l_1743) != l_1744), (*g_1667))) , p_8);
                (*g_154) = (0UL < (l_1134[2] = ((*g_977) &= (((***g_691) = l_1732[0]) | (safe_add_func_int64_t_s_s(((****g_1234) = (~g_64[0].f4.f4)), l_1748[0]))))));
                for (g_497.f4.f1 = 1; (g_497.f4.f1 <= 5); g_497.f4.f1 += 1)
                { 
                    (*g_154) ^= p_7;
                }
            }
        }
        for (l_1340 = 0; (l_1340 > 3); ++l_1340)
        { 
            uint32_t l_1770 = 2UL;
            int32_t l_1775 = 0L;
            struct S0 *l_1776[4];
            int32_t *l_1778 = &g_170;
            int32_t *l_1779 = &g_67;
            int32_t *l_1780 = &l_848;
            int32_t *l_1781 = (void*)0;
            int32_t *l_1782 = &l_1722;
            int32_t *l_1783 = (void*)0;
            int32_t *l_1784 = &g_256;
            int32_t *l_1786 = &g_341;
            int32_t *l_1787 = &l_1134[3];
            int32_t *l_1788[6];
            int i;
            for (i = 0; i < 4; i++)
                l_1776[i] = (void*)0;
            for (i = 0; i < 6; i++)
                l_1788[i] = &l_1287[0][1];
            for (g_1522 = (-3); (g_1522 >= 26); ++g_1522)
            { 
                const uint8_t l_1759 = 0x79L;
                int16_t *l_1774[4][2] = {{&g_1055,(void*)0},{(void*)0,&g_1055},{(void*)0,(void*)0},{&g_1055,(void*)0}};
                struct S0 **l_1777 = &l_1776[2];
                int i, j;
                (***g_152) &= (safe_add_func_uint32_t_u_u(((((**g_951) = (0x6BBF576CDAB66CC8LL & (safe_lshift_func_uint16_t_u_u((l_1759 | ((safe_rshift_func_uint8_t_u_u((0xBF6EA8541BA48B83LL == ((safe_sub_func_int64_t_s_s((safe_sub_func_int64_t_s_s((l_1722 != ((*g_1009) ^= (safe_mul_func_int16_t_s_s((***g_691), (l_1775 &= (((safe_add_func_uint8_t_u_u(l_1770, (safe_div_func_int32_t_s_s((!(p_7 ^ 0x38L)), 4294967288UL)))) != p_8) >= p_7)))))), l_1743)), l_1722)) , 0xEFE131D8A2286949LL)), (*g_977))) | 1L)), (****g_1664))))) < p_7) && (*g_168)), 0xAFCBC5DCL));
                (*l_1777) = l_1776[2];
            }
            l_1790--;
            for (g_497.f0.f4 = 0; (g_497.f0.f4 <= 2); g_497.f0.f4 += 1)
            { 
                (*l_1780) = ((*l_1411) , (***g_152));
                if (p_8)
                    continue;
            }
            l_1794++;
        }
    }
    else
    { 
        int64_t *l_1799 = &g_497.f4.f3;
        int32_t l_1814 = 0xBC0C7124L;
        const int32_t l_1816 = 0L;
        uint64_t l_1818 = 7UL;
        struct S0 l_1836 = {7L,0xD8DCL,0xB2L,1L,0x67ABD2F85C478695LL};
        for (g_497.f0.f0 = (-22); (g_497.f0.f0 == (-5)); g_497.f0.f0++)
        { 
            uint64_t *l_1800[2];
            int32_t l_1801 = 0xFE1A1AF4L;
            int32_t l_1802 = 1L;
            int32_t **l_1805 = &l_1445;
            int64_t *l_1815 = &g_1710.f3;
            int8_t *l_1817 = &g_453;
            int i;
            for (i = 0; i < 2; i++)
                l_1800[i] = (void*)0;
            for (l_1137 = 2; (l_1137 >= 0); l_1137 -= 1)
            { 
                return l_1799;
            }
            (*l_1805) = func_12((++g_274[0]));
            (***g_152) = ((*l_1445) = (safe_rshift_func_int8_t_s_u((safe_div_func_int32_t_s_s(((((**l_1805) , ((*g_1009) |= (*l_1445))) > p_8) == (((p_7 || ((*l_1817) = ((safe_rshift_func_uint16_t_u_s((((safe_div_func_uint16_t_u_u((l_1133 &= ((l_1814 = 18446744073709551607UL) | ((*l_1815) ^= (****g_1234)))), ((**g_692) ^= p_7))) & p_8) , l_1814), l_1816)) | p_7))) && (*g_154)) ^ 0xFF4813DFE4F1E401LL)), (*g_154))), l_1818)));
            if ((**g_153))
                break;
            for (g_1264 = 0; (g_1264 > 31); g_1264++)
            { 
                int32_t l_1835 = 0x9F26743FL;
                for (g_1632 = 8; (g_1632 != (-16)); g_1632 = safe_sub_func_int16_t_s_s(g_1632, 1))
                { 
                    union U1 *l_1823 = (void*)0;
                    int32_t l_1832[5][6] = {{7L,0x7868AD37L,0x7868AD37L,7L,0x517AD005L,0x9BFDDADCL},{(-9L),0x7868AD37L,0x517AD005L,(-9L),0x517AD005L,0x7868AD37L},{0xE5D4C31BL,0x7868AD37L,0x9BFDDADCL,0xE5D4C31BL,0x517AD005L,0x517AD005L},{7L,0x7868AD37L,0x7868AD37L,7L,0x517AD005L,0x9BFDDADCL},{(-9L),0x7868AD37L,0x517AD005L,0x9BFDDADCL,0x13FC4A29L,(-1L)}};
                    int i, j;
                    l_1823 = (*g_1439);
                    (***g_152) ^= (safe_add_func_int32_t_s_s(((safe_div_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((((*g_168) & 0xB4E3L) != p_7), 6)), 8)), (((*g_1009)++) || (g_64[0].f4.f4 , p_7)))) , l_1818), ((**l_1805) > l_1835)));
                }
                (***g_152) |= (l_1836 , (((*g_1387) = (void*)0) == (void*)0));
                for (g_170 = 15; (g_170 != 15); g_170 = safe_add_func_uint32_t_u_u(g_170, 5))
                { 
                    int32_t **l_1839 = &l_1445;
                    (*l_1839) = func_12((**l_1805));
                }
            }
        }
    }
    return l_33;
}



static int32_t * const  func_12(uint64_t  p_13)
{ 
    int32_t l_1109 = 0x8CC28EB7L;
    int32_t *l_1119 = &g_67;
    (*l_1119) = (safe_rshift_func_int16_t_s_s(((**g_692) ^= (safe_lshift_func_int16_t_s_u((l_1109 && (safe_add_func_uint8_t_u_u(6UL, (((l_1109 > p_13) , (safe_mul_func_int8_t_s_s(((safe_add_func_uint8_t_u_u(250UL, (!p_13))) && (safe_lshift_func_uint16_t_u_s(p_13, 7))), 0x75L))) < p_13)))), p_13))), p_13));
    return &g_256;
}



static int64_t  func_14(int64_t  p_15, int32_t  p_16, uint32_t  p_17, int16_t  p_18)
{ 
    int64_t l_853 = (-10L);
    uint64_t l_867[6][7][3] = {{{4UL,18446744073709551610UL,18446744073709551610UL},{5UL,8UL,0x27A76D1130FB6D44LL},{3UL,4UL,0UL},{5UL,0UL,18446744073709551615UL},{4UL,3UL,18446744073709551608UL},{0x0238F0AB016F0598LL,0UL,0x0238F0AB016F0598LL},{18446744073709551610UL,4UL,1UL}},{{0UL,8UL,0x0238F0AB016F0598LL},{1UL,18446744073709551610UL,18446744073709551608UL},{18446744073709551606UL,7UL,18446744073709551615UL},{1UL,1UL,0UL},{0UL,3UL,0x27A76D1130FB6D44LL},{18446744073709551610UL,1UL,18446744073709551610UL},{0x0238F0AB016F0598LL,7UL,5UL}},{{4UL,18446744073709551610UL,18446744073709551610UL},{5UL,8UL,0x27A76D1130FB6D44LL},{3UL,4UL,0UL},{5UL,0UL,18446744073709551615UL},{4UL,3UL,18446744073709551608UL},{0x0238F0AB016F0598LL,0UL,0x0238F0AB016F0598LL},{18446744073709551610UL,4UL,1UL}},{{0UL,8UL,0x0238F0AB016F0598LL},{1UL,18446744073709551610UL,18446744073709551608UL},{18446744073709551606UL,7UL,18446744073709551615UL},{1UL,1UL,0UL},{0UL,3UL,0x27A76D1130FB6D44LL},{18446744073709551610UL,1UL,18446744073709551610UL},{0x0238F0AB016F0598LL,7UL,5UL}},{{4UL,18446744073709551610UL,18446744073709551610UL},{5UL,8UL,0x27A76D1130FB6D44LL},{3UL,4UL,0UL},{5UL,0UL,18446744073709551615UL},{4UL,3UL,18446744073709551608UL},{0x0238F0AB016F0598LL,0UL,0x0238F0AB016F0598LL},{18446744073709551610UL,4UL,1UL}},{{0UL,8UL,0x0238F0AB016F0598LL},{1UL,18446744073709551610UL,18446744073709551608UL},{18446744073709551606UL,7UL,18446744073709551615UL},{1UL,1UL,0UL},{0UL,3UL,0x27A76D1130FB6D44LL},{18446744073709551610UL,1UL,18446744073709551610UL},{0x0238F0AB016F0598LL,7UL,5UL}}};
    union U1 l_868 = {{-1L,1UL,5UL,1L,0L}};
    uint64_t l_869 = 6UL;
    const uint32_t l_870[1] = {0xC8843B98L};
    int32_t l_871 = 0xCAC16C29L;
    struct S0 *l_900 = &l_868.f0;
    int32_t l_903 = 1L;
    int32_t l_907[5] = {0xBE32EA61L,0xBE32EA61L,0xBE32EA61L,0xBE32EA61L,0xBE32EA61L};
    uint32_t l_1034 = 0x17547CBBL;
    uint64_t *l_1066[6];
    uint8_t l_1100 = 0x65L;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_1066[i] = (void*)0;
    (*g_153) = ((l_871 = ((((safe_rshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(l_853, (safe_mul_func_uint8_t_u_u(((1L <= ((((safe_div_func_int8_t_s_s((g_257 >= (((safe_add_func_int32_t_s_s((safe_add_func_uint8_t_u_u((+l_853), (safe_sub_func_int64_t_s_s(((l_853 , (((((safe_rshift_func_uint8_t_u_u(l_867[4][2][0], 3)) ^ (l_868 , g_64[0].f0.f2)) && p_18) && l_868.f0.f4) & g_169)) < p_17), l_869)))), 0x89D2CC78L)) & l_853) & p_18)), l_868.f4.f0)) > 0x06BC7D81L) ^ l_853) == g_624[1][4][0])) >= 0xD7747508722891C7LL), p_17)))), p_16)) == 1UL) >= l_870[0]) < 1L)) , (void*)0);
    if ((safe_rshift_func_int8_t_s_u(g_497.f1, 1)))
    { 
        return g_840[3];
    }
    else
    { 
        uint8_t l_881 = 0UL;
        int32_t l_904 = (-1L);
        int32_t l_906[6] = {(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)};
        int32_t l_928 = (-10L);
        struct S0 l_950 = {0x9AEAE7D5L,0x397FL,0xABL,6L,-9L};
        int64_t * const *l_953 = &g_952;
        union U1 l_968[6][7][5] = {{{{{0x651E4DCBL,0x4215L,6UL,0xA81BD02FBB1877CBLL,0xC6A2076F79B863D5LL}},{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}},{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}},{{0x651E4DCBL,0x4215L,6UL,0xA81BD02FBB1877CBLL,0xC6A2076F79B863D5LL}},{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}}},{{{0x1C3A3192L,1UL,0x00L,1L,0x2E99943B11AAFD90LL}},{{0x7052A28DL,0xA924L,255UL,0xC26B29F2CEDC7080LL,0xC04BC647D42EEA82LL}},{{-2L,0xEAFCL,0xACL,0L,-1L}},{{0x7052A28DL,0xA924L,255UL,0xC26B29F2CEDC7080LL,0xC04BC647D42EEA82LL}},{{0x1C3A3192L,1UL,0x00L,1L,0x2E99943B11AAFD90LL}}},{{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}},{{0x651E4DCBL,0x4215L,6UL,0xA81BD02FBB1877CBLL,0xC6A2076F79B863D5LL}},{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}},{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}},{{0x651E4DCBL,0x4215L,6UL,0xA81BD02FBB1877CBLL,0xC6A2076F79B863D5LL}}},{{{0x1C3A3192L,1UL,0x00L,1L,0x2E99943B11AAFD90LL}},{{5L,0x001EL,1UL,0x760A8567D44C9EF2LL,-8L}},{{8L,0x5D91L,0xA2L,-6L,0xED009BB348976BDELL}},{{0x7052A28DL,0xA924L,255UL,0xC26B29F2CEDC7080LL,0xC04BC647D42EEA82LL}},{{8L,0x5D91L,0xA2L,-6L,0xED009BB348976BDELL}}},{{{0x651E4DCBL,0x4215L,6UL,0xA81BD02FBB1877CBLL,0xC6A2076F79B863D5LL}},{{0x651E4DCBL,0x4215L,6UL,0xA81BD02FBB1877CBLL,0xC6A2076F79B863D5LL}},{{0x5E927B7CL,0UL,0x32L,0xB65BCB7E6ADDD595LL,0x83A0F501EFAF1BD5LL}},{{0x651E4DCBL,0x4215L,6UL,0xA81BD02FBB1877CBLL,0xC6A2076F79B863D5LL}},{{0x651E4DCBL,0x4215L,6UL,0xA81BD02FBB1877CBLL,0xC6A2076F79B863D5LL}}},{{{8L,0x5D91L,0xA2L,-6L,0xED009BB348976BDELL}},{{0x7052A28DL,0xA924L,255UL,0xC26B29F2CEDC7080LL,0xC04BC647D42EEA82LL}},{{8L,0x5D91L,0xA2L,-6L,0xED009BB348976BDELL}},{{5L,0x001EL,1UL,0x760A8567D44C9EF2LL,-8L}},{{0x1C3A3192L,1UL,0x00L,1L,0x2E99943B11AAFD90LL}}},{{{0x651E4DCBL,0x4215L,6UL,0xA81BD02FBB1877CBLL,0xC6A2076F79B863D5LL}},{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}},{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}},{{0x651E4DCBL,0x4215L,6UL,0xA81BD02FBB1877CBLL,0xC6A2076F79B863D5LL}},{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}}}},{{{{0x1C3A3192L,1UL,0x00L,1L,0x2E99943B11AAFD90LL}},{{0x7052A28DL,0xA924L,255UL,0xC26B29F2CEDC7080LL,0xC04BC647D42EEA82LL}},{{-2L,0xEAFCL,0xACL,0L,-1L}},{{0x7052A28DL,0xA924L,255UL,0xC26B29F2CEDC7080LL,0xC04BC647D42EEA82LL}},{{0x1C3A3192L,1UL,0x00L,1L,0x2E99943B11AAFD90LL}}},{{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}},{{0x651E4DCBL,0x4215L,6UL,0xA81BD02FBB1877CBLL,0xC6A2076F79B863D5LL}},{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}},{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}},{{0x651E4DCBL,0x4215L,6UL,0xA81BD02FBB1877CBLL,0xC6A2076F79B863D5LL}}},{{{0x1C3A3192L,1UL,0x00L,1L,0x2E99943B11AAFD90LL}},{{5L,0x001EL,1UL,0x760A8567D44C9EF2LL,-8L}},{{8L,0x5D91L,0xA2L,-6L,0xED009BB348976BDELL}},{{0x7052A28DL,0xA924L,255UL,0xC26B29F2CEDC7080LL,0xC04BC647D42EEA82LL}},{{8L,0x5D91L,0xA2L,-6L,0xED009BB348976BDELL}}},{{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}},{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}},{{0x651E4DCBL,0x4215L,6UL,0xA81BD02FBB1877CBLL,0xC6A2076F79B863D5LL}},{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}},{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}}},{{{-2L,0xEAFCL,0xACL,0L,-1L}},{{5L,0x001EL,1UL,0x760A8567D44C9EF2LL,-8L}},{{-2L,0xEAFCL,0xACL,0L,-1L}},{{-9L,65526UL,0UL,-6L,0xE7D3CEFC86E583E1LL}},{{8L,0x5D91L,0xA2L,-6L,0xED009BB348976BDELL}}},{{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}},{{0x5E927B7CL,0UL,0x32L,0xB65BCB7E6ADDD595LL,0x83A0F501EFAF1BD5LL}},{{0x5E927B7CL,0UL,0x32L,0xB65BCB7E6ADDD595LL,0x83A0F501EFAF1BD5LL}},{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}},{{0x5E927B7CL,0UL,0x32L,0xB65BCB7E6ADDD595LL,0x83A0F501EFAF1BD5LL}}},{{{8L,0x5D91L,0xA2L,-6L,0xED009BB348976BDELL}},{{5L,0x001EL,1UL,0x760A8567D44C9EF2LL,-8L}},{{0x1C3A3192L,1UL,0x00L,1L,0x2E99943B11AAFD90LL}},{{5L,0x001EL,1UL,0x760A8567D44C9EF2LL,-8L}},{{8L,0x5D91L,0xA2L,-6L,0xED009BB348976BDELL}}}},{{{{0x5E927B7CL,0UL,0x32L,0xB65BCB7E6ADDD595LL,0x83A0F501EFAF1BD5LL}},{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}},{{0x5E927B7CL,0UL,0x32L,0xB65BCB7E6ADDD595LL,0x83A0F501EFAF1BD5LL}},{{0x5E927B7CL,0UL,0x32L,0xB65BCB7E6ADDD595LL,0x83A0F501EFAF1BD5LL}},{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}}},{{{8L,0x5D91L,0xA2L,-6L,0xED009BB348976BDELL}},{{-9L,65526UL,0UL,-6L,0xE7D3CEFC86E583E1LL}},{{-2L,0xEAFCL,0xACL,0L,-1L}},{{5L,0x001EL,1UL,0x760A8567D44C9EF2LL,-8L}},{{-2L,0xEAFCL,0xACL,0L,-1L}}},{{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}},{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}},{{0x651E4DCBL,0x4215L,6UL,0xA81BD02FBB1877CBLL,0xC6A2076F79B863D5LL}},{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}},{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}}},{{{-2L,0xEAFCL,0xACL,0L,-1L}},{{5L,0x001EL,1UL,0x760A8567D44C9EF2LL,-8L}},{{-2L,0xEAFCL,0xACL,0L,-1L}},{{-9L,65526UL,0UL,-6L,0xE7D3CEFC86E583E1LL}},{{8L,0x5D91L,0xA2L,-6L,0xED009BB348976BDELL}}},{{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}},{{0x5E927B7CL,0UL,0x32L,0xB65BCB7E6ADDD595LL,0x83A0F501EFAF1BD5LL}},{{0x5E927B7CL,0UL,0x32L,0xB65BCB7E6ADDD595LL,0x83A0F501EFAF1BD5LL}},{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}},{{0x5E927B7CL,0UL,0x32L,0xB65BCB7E6ADDD595LL,0x83A0F501EFAF1BD5LL}}},{{{8L,0x5D91L,0xA2L,-6L,0xED009BB348976BDELL}},{{5L,0x001EL,1UL,0x760A8567D44C9EF2LL,-8L}},{{0x1C3A3192L,1UL,0x00L,1L,0x2E99943B11AAFD90LL}},{{5L,0x001EL,1UL,0x760A8567D44C9EF2LL,-8L}},{{8L,0x5D91L,0xA2L,-6L,0xED009BB348976BDELL}}},{{{0x5E927B7CL,0UL,0x32L,0xB65BCB7E6ADDD595LL,0x83A0F501EFAF1BD5LL}},{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}},{{0x5E927B7CL,0UL,0x32L,0xB65BCB7E6ADDD595LL,0x83A0F501EFAF1BD5LL}},{{0x5E927B7CL,0UL,0x32L,0xB65BCB7E6ADDD595LL,0x83A0F501EFAF1BD5LL}},{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}}}},{{{{8L,0x5D91L,0xA2L,-6L,0xED009BB348976BDELL}},{{-9L,65526UL,0UL,-6L,0xE7D3CEFC86E583E1LL}},{{-2L,0xEAFCL,0xACL,0L,-1L}},{{5L,0x001EL,1UL,0x760A8567D44C9EF2LL,-8L}},{{-2L,0xEAFCL,0xACL,0L,-1L}}},{{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}},{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}},{{0x651E4DCBL,0x4215L,6UL,0xA81BD02FBB1877CBLL,0xC6A2076F79B863D5LL}},{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}},{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}}},{{{-2L,0xEAFCL,0xACL,0L,-1L}},{{5L,0x001EL,1UL,0x760A8567D44C9EF2LL,-8L}},{{-2L,0xEAFCL,0xACL,0L,-1L}},{{-9L,65526UL,0UL,-6L,0xE7D3CEFC86E583E1LL}},{{8L,0x5D91L,0xA2L,-6L,0xED009BB348976BDELL}}},{{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}},{{0x5E927B7CL,0UL,0x32L,0xB65BCB7E6ADDD595LL,0x83A0F501EFAF1BD5LL}},{{0x5E927B7CL,0UL,0x32L,0xB65BCB7E6ADDD595LL,0x83A0F501EFAF1BD5LL}},{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}},{{0x5E927B7CL,0UL,0x32L,0xB65BCB7E6ADDD595LL,0x83A0F501EFAF1BD5LL}}},{{{8L,0x5D91L,0xA2L,-6L,0xED009BB348976BDELL}},{{5L,0x001EL,1UL,0x760A8567D44C9EF2LL,-8L}},{{0x1C3A3192L,1UL,0x00L,1L,0x2E99943B11AAFD90LL}},{{5L,0x001EL,1UL,0x760A8567D44C9EF2LL,-8L}},{{8L,0x5D91L,0xA2L,-6L,0xED009BB348976BDELL}}},{{{0x5E927B7CL,0UL,0x32L,0xB65BCB7E6ADDD595LL,0x83A0F501EFAF1BD5LL}},{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}},{{0x5E927B7CL,0UL,0x32L,0xB65BCB7E6ADDD595LL,0x83A0F501EFAF1BD5LL}},{{0x5E927B7CL,0UL,0x32L,0xB65BCB7E6ADDD595LL,0x83A0F501EFAF1BD5LL}},{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}}},{{{8L,0x5D91L,0xA2L,-6L,0xED009BB348976BDELL}},{{-9L,65526UL,0UL,-6L,0xE7D3CEFC86E583E1LL}},{{-2L,0xEAFCL,0xACL,0L,-1L}},{{5L,0x001EL,1UL,0x760A8567D44C9EF2LL,-8L}},{{-2L,0xEAFCL,0xACL,0L,-1L}}}},{{{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}},{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}},{{0x651E4DCBL,0x4215L,6UL,0xA81BD02FBB1877CBLL,0xC6A2076F79B863D5LL}},{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}},{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}}},{{{-2L,0xEAFCL,0xACL,0L,-1L}},{{5L,0x001EL,1UL,0x760A8567D44C9EF2LL,-8L}},{{-2L,0xEAFCL,0xACL,0L,-1L}},{{-9L,65526UL,0UL,-6L,0xE7D3CEFC86E583E1LL}},{{8L,0x5D91L,0xA2L,-6L,0xED009BB348976BDELL}}},{{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}},{{0x5E927B7CL,0UL,0x32L,0xB65BCB7E6ADDD595LL,0x83A0F501EFAF1BD5LL}},{{0x5E927B7CL,0UL,0x32L,0xB65BCB7E6ADDD595LL,0x83A0F501EFAF1BD5LL}},{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}},{{0x5E927B7CL,0UL,0x32L,0xB65BCB7E6ADDD595LL,0x83A0F501EFAF1BD5LL}}},{{{8L,0x5D91L,0xA2L,-6L,0xED009BB348976BDELL}},{{5L,0x001EL,1UL,0x760A8567D44C9EF2LL,-8L}},{{0x1C3A3192L,1UL,0x00L,1L,0x2E99943B11AAFD90LL}},{{5L,0x001EL,1UL,0x760A8567D44C9EF2LL,-8L}},{{8L,0x5D91L,0xA2L,-6L,0xED009BB348976BDELL}}},{{{0x5E927B7CL,0UL,0x32L,0xB65BCB7E6ADDD595LL,0x83A0F501EFAF1BD5LL}},{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}},{{0x5E927B7CL,0UL,0x32L,0xB65BCB7E6ADDD595LL,0x83A0F501EFAF1BD5LL}},{{0x5E927B7CL,0UL,0x32L,0xB65BCB7E6ADDD595LL,0x83A0F501EFAF1BD5LL}},{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}}},{{{8L,0x5D91L,0xA2L,-6L,0xED009BB348976BDELL}},{{-9L,65526UL,0UL,-6L,0xE7D3CEFC86E583E1LL}},{{-2L,0xEAFCL,0xACL,0L,-1L}},{{5L,0x001EL,1UL,0x760A8567D44C9EF2LL,-8L}},{{-2L,0xEAFCL,0xACL,0L,-1L}}},{{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}},{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}},{{0x651E4DCBL,0x4215L,6UL,0xA81BD02FBB1877CBLL,0xC6A2076F79B863D5LL}},{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}},{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}}}},{{{{-2L,0xEAFCL,0xACL,0L,-1L}},{{5L,0x001EL,1UL,0x760A8567D44C9EF2LL,-8L}},{{-2L,0xEAFCL,0xACL,0L,-1L}},{{-9L,65526UL,0UL,-6L,0xE7D3CEFC86E583E1LL}},{{8L,0x5D91L,0xA2L,-6L,0xED009BB348976BDELL}}},{{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}},{{0x5E927B7CL,0UL,0x32L,0xB65BCB7E6ADDD595LL,0x83A0F501EFAF1BD5LL}},{{0x5E927B7CL,0UL,0x32L,0xB65BCB7E6ADDD595LL,0x83A0F501EFAF1BD5LL}},{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}},{{0x5E927B7CL,0UL,0x32L,0xB65BCB7E6ADDD595LL,0x83A0F501EFAF1BD5LL}}},{{{8L,0x5D91L,0xA2L,-6L,0xED009BB348976BDELL}},{{5L,0x001EL,1UL,0x760A8567D44C9EF2LL,-8L}},{{0x1C3A3192L,1UL,0x00L,1L,0x2E99943B11AAFD90LL}},{{5L,0x001EL,1UL,0x760A8567D44C9EF2LL,-8L}},{{8L,0x5D91L,0xA2L,-6L,0xED009BB348976BDELL}}},{{{0x5E927B7CL,0UL,0x32L,0xB65BCB7E6ADDD595LL,0x83A0F501EFAF1BD5LL}},{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}},{{0x5E927B7CL,0UL,0x32L,0xB65BCB7E6ADDD595LL,0x83A0F501EFAF1BD5LL}},{{0x5E927B7CL,0UL,0x32L,0xB65BCB7E6ADDD595LL,0x83A0F501EFAF1BD5LL}},{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}}},{{{8L,0x5D91L,0xA2L,-6L,0xED009BB348976BDELL}},{{-9L,65526UL,0UL,-6L,0xE7D3CEFC86E583E1LL}},{{-2L,0xEAFCL,0xACL,0L,-1L}},{{5L,0x001EL,1UL,0x760A8567D44C9EF2LL,-8L}},{{-2L,0xEAFCL,0xACL,0L,-1L}}},{{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}},{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}},{{0x651E4DCBL,0x4215L,6UL,0xA81BD02FBB1877CBLL,0xC6A2076F79B863D5LL}},{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}},{{0xD4EF2119L,1UL,0xE4L,0xA399ACB64E66CD12LL,6L}}},{{{-2L,0xEAFCL,0xACL,0L,-1L}},{{5L,0x001EL,1UL,0x760A8567D44C9EF2LL,-8L}},{{-2L,0xEAFCL,0xACL,0L,-1L}},{{-9L,65526UL,0UL,-6L,0xE7D3CEFC86E583E1LL}},{{8L,0x5D91L,0xA2L,-6L,0xED009BB348976BDELL}}}}};
        uint8_t ***l_974 = (void*)0;
        int i, j, k;
        (**g_152) = (*g_153);
lbl_923:
        (*g_153) = (*g_153);
        for (l_868.f0.f0 = 0; (l_868.f0.f0 >= (-23)); --l_868.f0.f0)
        { 
            int32_t *l_876 = &g_67;
            int32_t *l_877 = &g_341;
            int32_t *l_878 = &g_341;
            int32_t *l_879 = (void*)0;
            int32_t *l_880[1];
            struct S0 *l_898 = &g_64[0].f0;
            int8_t **l_912 = &g_484;
            int8_t ***l_911[4];
            uint16_t l_914[4] = {0xA004L,0xA004L,0xA004L,0xA004L};
            uint8_t **l_948 = (void*)0;
            int64_t l_959[2];
            int i;
            for (i = 0; i < 1; i++)
                l_880[i] = &g_38;
            for (i = 0; i < 4; i++)
                l_911[i] = &l_912;
            for (i = 0; i < 2; i++)
                l_959[i] = 0xD0EEC85754425FF2LL;
            l_881++;
            for (g_148 = 0; (g_148 <= 6); g_148 += 1)
            { 
                union U1 l_902[1][3][1] = {{{{{0x7287FB57L,0UL,0x51L,0xFFA538F85E357E70LL,1L}}},{{{0x7287FB57L,0UL,0x51L,0xFFA538F85E357E70LL,1L}}},{{{0x7287FB57L,0UL,0x51L,0xFFA538F85E357E70LL,1L}}}}};
                int32_t l_905 = 0L;
                int i, j, k;
                if (g_37[g_148][g_148])
                { 
                    int64_t *l_899[6] = {(void*)0,&g_64[0].f0.f3,(void*)0,(void*)0,&g_64[0].f0.f3,(void*)0};
                    int32_t l_901 = 0x4BC97C1FL;
                    int i;
                    (*l_878) = (safe_sub_func_int32_t_s_s(1L, (safe_lshift_func_int8_t_s_s((p_15 < ((((safe_rshift_func_int16_t_s_u((l_902[0][0][0] , 1L), 14)) , l_881) < l_870[0]) < g_37[g_148][g_148])), 5))));
                    g_908--;
                }
                else
                { 
                    int8_t ****l_913 = &l_911[1];
                    (*l_913) = l_911[1];
                    l_914[2]++;
                    if (p_15)
                        continue;
                    if (p_18)
                        break;
                }
            }
            for (g_171 = 2; (g_171 > (-1)); g_171 = safe_sub_func_int64_t_s_s(g_171, 8))
            { 
                return p_17;
            }
            for (g_497.f0.f4 = 6; (g_497.f0.f4 != 14); g_497.f0.f4 = safe_add_func_uint8_t_u_u(g_497.f0.f4, 8))
            { 
                int32_t l_929 = (-4L);
                int32_t l_931 = 9L;
                if ((safe_add_func_int8_t_s_s(p_15, p_17)))
                { 
                    if (l_868.f0.f4)
                        goto lbl_923;
                }
                else
                { 
                    uint32_t l_924 = 1UL;
                    uint16_t ***l_926 = &g_325;
                    uint16_t ****l_925 = &l_926;
                    int32_t l_927 = 0x159B9343L;
                    l_924 &= 0xEE921600L;
                    (*l_925) = &g_325;
                    g_40 &= p_16;
                    --g_934[4];
                    p_16 &= 0x7AEE1AD6L;
                }
                l_903 ^= l_868.f0.f1;
            }
        }
    }
    for (g_337 = 0; (g_337 == 11); g_337 = safe_add_func_uint64_t_u_u(g_337, 2))
    { 
        return (*g_952);
    }
    if ((!l_907[0]))
    { 
        int32_t *l_989 = &l_907[2];
        int32_t l_1041 = 0x31289951L;
        int32_t l_1042 = 0xA13EA1C0L;
        int32_t l_1044 = (-4L);
        int32_t l_1046 = 5L;
        int32_t l_1048 = 0xAFF32D2DL;
        int32_t l_1054 = (-2L);
        int32_t l_1056 = 0x5FCFAB0DL;
        uint32_t l_1057[1];
        int64_t *l_1071 = &g_64[0].f0.f3;
        int i;
        for (i = 0; i < 1; i++)
            l_1057[i] = 0xF7DADCC2L;
        (*l_989) |= p_17;
        for (g_637 = 0; (g_637 < 37); g_637++)
        { 
            uint8_t **l_998[5] = {&g_977,&g_977,&g_977,&g_977,&g_977};
            int32_t l_1007 = 0x9BA4D024L;
            uint16_t **l_1010 = &g_1009;
            uint8_t l_1012 = 0x68L;
            int32_t l_1043 = 0xF385A13FL;
            int32_t l_1045 = 0x91BF7756L;
            int32_t l_1047[2][3] = {{1L,1L,1L},{0xA3153476L,0xA3153476L,0xA3153476L}};
            int i, j;
            for (g_169 = 4; (g_169 >= 1); g_169 -= 1)
            { 
                uint8_t **l_999 = &g_977;
                uint32_t l_1000 = 0xB73B166DL;
                int32_t l_1011 = 0L;
                uint32_t l_1032 = 0x530D9693L;
                int32_t l_1040 = (-3L);
                int32_t l_1049 = 0x4E5F297BL;
                int32_t l_1051 = 1L;
                int32_t l_1052 = (-10L);
                int32_t l_1053[6] = {0L,0xA5F92EE7L,0xA5F92EE7L,0L,0xA5F92EE7L,0xA5F92EE7L};
                uint8_t l_1060 = 0x44L;
                int32_t *l_1063[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int i;
                if ((safe_lshift_func_int8_t_s_s((((l_1011 = (safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(((g_527 = (((*g_975) = l_998[1]) != l_999)) < ((l_1000 &= g_604[g_169]) > g_604[g_169])), 3)), (((safe_mod_func_uint32_t_u_u(((safe_div_func_uint32_t_u_u(l_903, p_17)) & (safe_div_func_uint64_t_u_u(((((((p_16 || p_18) <= g_604[g_169]) == p_16) < g_604[g_169]) ^ l_1007) != p_15), (*g_952)))), 3UL)) , g_1008[0]) == l_1010)))) < l_1012) >= 0x5EL), 3)))
                { 
                    uint8_t ****l_1029 = &g_975;
                    int32_t l_1030 = (-9L);
                    int64_t *l_1031 = &g_5[2][3];
                    int64_t ** const *l_1033 = &g_951;
                    l_1007 = (((((p_18 || (safe_sub_func_uint32_t_u_u((((*l_1031) = (((**g_951) = (safe_mul_func_int16_t_s_s(p_18, ((*g_1009) = 0x5A7FL)))) , (((safe_lshift_func_int8_t_s_u((+(safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((((6L < (*g_952)) == (safe_sub_func_int64_t_s_s((l_1012 , ((safe_sub_func_uint32_t_u_u((~(((*l_1029) = &g_976[4][6][1]) != &l_999)), g_151.f2)) == g_151.f0)), (**g_951)))) , l_1007), 6)), 2UL))), l_1012)) < l_1030) , 0x04231ED51AEA3808LL))) , l_1032), g_147))) , l_1033) == (void*)0) , (*g_168)) < 1UL);
                    l_1034++;
                }
                else
                { 
                    int32_t *l_1037 = &l_903;
                    int32_t *l_1038 = &g_933;
                    int32_t *l_1039[2][4][5] = {{{&l_907[2],(void*)0,&g_38,(void*)0,&g_256},{(void*)0,(void*)0,(void*)0,(void*)0,&g_38},{&l_907[2],(void*)0,&g_38,(void*)0,&g_256},{(void*)0,(void*)0,(void*)0,(void*)0,&g_38}},{{&l_907[2],(void*)0,&g_38,(void*)0,&g_256},{(void*)0,(void*)0,(void*)0,(void*)0,&g_38},{&l_907[2],(void*)0,&g_38,(void*)0,&g_256},{(void*)0,(void*)0,(void*)0,(void*)0,&g_38}}};
                    int i, j, k;
                    l_1057[0]--;
                }
                for (l_868.f4.f1 = 0; (l_868.f4.f1 <= 4); l_868.f4.f1 += 1)
                { 
                    (*l_989) &= 0xD467D39FL;
                    if (p_18)
                        continue;
                }
                for (p_16 = 4; (p_16 >= 0); p_16 -= 1)
                { 
                    if (p_17)
                        break;
                    (**g_152) = &l_1044;
                    ++l_1060;
                }
                g_67 = ((*l_989) = 0x99E7103BL);
            }
        }
        p_16 = 1L;
        (*l_989) = 1L;
        (*l_989) = (safe_add_func_uint64_t_u_u(g_151.f3, ((247UL || ((*g_977) = (&l_867[1][5][1] != (l_1066[0] = &l_867[4][2][0])))) >= ((!p_16) < ((~g_464) | (safe_mod_func_uint16_t_u_u(((((*l_1071) ^= (**g_951)) | (**g_951)) < p_15), p_15)))))));
    }
    else
    { 
        int32_t l_1074[7][3][3] = {{{(-6L),1L,(-4L)},{1L,0xC0DC597EL,(-10L)},{(-9L),0x6F6F61DEL,(-9L)}},{{0xC0DC597EL,0x661E27BDL,(-9L)},{1L,0L,(-10L)},{(-10L),(-9L),(-4L)}},{{0x661E27BDL,0L,(-1L)},{(-10L),0L,(-6L)},{1L,1L,0x6F6F61DEL}},{{0xC0DC597EL,1L,0L},{(-9L),0L,1L},{1L,0L,7L}},{{(-6L),(-9L),1L},{(-5L),0L,0L},{0xF9674E14L,0x661E27BDL,0x6F6F61DEL}},{{0xF9674E14L,0x6F6F61DEL,(-6L)},{(-5L),0xC0DC597EL,(-1L)},{(-6L),1L,(-4L)}},{{1L,0xC0DC597EL,(-10L)},{(-9L),0x6F6F61DEL,(-9L)},{0xC0DC597EL,0x661E27BDL,(-9L)}}};
        const struct S0 *l_1082 = &g_497.f4;
        int64_t ***l_1088 = &g_951;
        int32_t l_1097 = 0L;
        int32_t l_1098 = (-10L);
        int32_t l_1099[5][3] = {{(-4L),(-4L),(-4L)},{0xB61B4B04L,0xB61B4B04L,0xB61B4B04L},{(-4L),(-4L),(-4L)},{0xB61B4B04L,0xB61B4B04L,0xB61B4B04L},{(-4L),(-4L),(-4L)}};
        int i, j, k;
        for (g_337 = 12; (g_337 != 12); g_337 = safe_add_func_int8_t_s_s(g_337, 8))
        { 
            const struct S0 *l_1078 = (void*)0;
            int32_t l_1086[1][7] = {{7L,7L,7L,7L,7L,7L,7L}};
            uint64_t **l_1089 = &g_36;
            int32_t *l_1096[1];
            int i, j;
            for (i = 0; i < 1; i++)
                l_1096[i] = &g_67;
            if (l_1074[6][0][0])
            { 
                uint8_t **l_1077 = &g_977;
                int32_t l_1085 = 1L;
                uint32_t *l_1087 = &g_312;
                if ((safe_rshift_func_uint16_t_u_s(((void*)0 != l_1077), 12)))
                { 
                    const struct S0 **l_1079 = &g_582;
                    const struct S0 **l_1083 = (void*)0;
                    (*l_1079) = l_1078;
                    p_16 |= (safe_rshift_func_int16_t_s_u((((*l_1079) = &g_583) == (l_1082 = l_1082)), 1));
                }
                else
                { 
                    int32_t *l_1084 = &g_932;
                    (*l_1084) ^= l_1074[6][0][0];
                    if (l_1085)
                        break;
                    if (p_15)
                        continue;
                }
                if ((p_15 & (l_1086[0][3] > ((*l_1087) &= (l_1085 && p_16)))))
                { 
                    return p_16;
                }
                else
                { 
                    (*g_153) = (((void*)0 == l_1088) , (*g_153));
                    return l_868.f4.f0;
                }
            }
            else
            { 
                uint64_t ***l_1090 = (void*)0;
                uint64_t ***l_1091 = &l_1089;
                const union U1 l_1092[2][4][2] = {{{{{0xE3B3909BL,65534UL,255UL,0xF0C2E273B8A97049LL,-8L}},{{0xE3B3909BL,65534UL,255UL,0xF0C2E273B8A97049LL,-8L}}},{{{0xE3B3909BL,65534UL,255UL,0xF0C2E273B8A97049LL,-8L}},{{0xE3B3909BL,65534UL,255UL,0xF0C2E273B8A97049LL,-8L}}},{{{0xE3B3909BL,65534UL,255UL,0xF0C2E273B8A97049LL,-8L}},{{0xE3B3909BL,65534UL,255UL,0xF0C2E273B8A97049LL,-8L}}},{{{0xE3B3909BL,65534UL,255UL,0xF0C2E273B8A97049LL,-8L}},{{0xE3B3909BL,65534UL,255UL,0xF0C2E273B8A97049LL,-8L}}}},{{{{0xE3B3909BL,65534UL,255UL,0xF0C2E273B8A97049LL,-8L}},{{0xE3B3909BL,65534UL,255UL,0xF0C2E273B8A97049LL,-8L}}},{{{0xE3B3909BL,65534UL,255UL,0xF0C2E273B8A97049LL,-8L}},{{0xE3B3909BL,65534UL,255UL,0xF0C2E273B8A97049LL,-8L}}},{{{0xE3B3909BL,65534UL,255UL,0xF0C2E273B8A97049LL,-8L}},{{0xE3B3909BL,65534UL,255UL,0xF0C2E273B8A97049LL,-8L}}},{{{0xE3B3909BL,65534UL,255UL,0xF0C2E273B8A97049LL,-8L}},{{0xE3B3909BL,65534UL,255UL,0xF0C2E273B8A97049LL,-8L}}}}};
                int i, j, k;
                if ((g_497.f3 <= (((*l_1091) = l_1089) == (l_1092[0][2][0] , (void*)0))))
                { 
                    (*g_152) = (*g_152);
                    if (p_15)
                        break;
                    return (**g_951);
                }
                else
                { 
                    int32_t l_1093 = (-1L);
                    int32_t *l_1094 = &l_907[4];
                    (*l_1094) &= l_1093;
                }
                if (p_18)
                { 
                    if (p_15)
                        break;
                }
                else
                { 
                    int32_t *l_1095 = &l_907[0];
                    (*l_1095) |= l_1092[0][2][0].f2;
                }
            }
            ++l_1100;
            return l_868.f0.f2;
        }
        for (g_337 = (-8); (g_337 <= 2); g_337 = safe_add_func_int8_t_s_s(g_337, 1))
        { 
            for (g_169 = 4; (g_169 >= 0); g_169 -= 1)
            { 
                (**g_152) = (**g_152);
                for (g_497.f4.f0 = 0; (g_497.f4.f0 <= 2); g_497.f4.f0 += 1)
                { 
                    int i, j;
                    (*g_153) = &l_1099[(g_497.f4.f0 + 2)][g_497.f4.f0];
                }
            }
        }
    }
    return l_868.f2;
}



static int64_t  func_19(int64_t  p_20, uint32_t  p_21, int64_t * p_22, uint16_t  p_23, int64_t * const  p_24)
{ 
    uint16_t l_777 = 0xCCC2L;
    struct S0 *l_792 = &g_497.f0;
    int32_t *l_793[2][1];
    int8_t *l_811 = &g_315;
    int64_t l_829 = (-2L);
    struct S0 **l_842 = &l_792;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_793[i][j] = &g_67;
    }
    for (g_39 = (-28); (g_39 == 9); ++g_39)
    { 
        uint64_t l_776 = 0xFD68E4C79753F02CLL;
        union U1 l_806 = {{0x24F72035L,1UL,9UL,0xCF59E6D8C258317CLL,0x0F3B7C064F217653LL}};
        uint64_t l_816[3][4] = {{18446744073709551611UL,18446744073709551611UL,18446744073709551611UL,18446744073709551611UL},{18446744073709551611UL,18446744073709551611UL,18446744073709551611UL,18446744073709551611UL},{18446744073709551611UL,18446744073709551611UL,18446744073709551611UL,18446744073709551611UL}};
        int32_t l_831 = (-5L);
        int i, j;
        for (g_147 = 12; (g_147 > 42); ++g_147)
        { 
            int32_t ***l_815 = &g_153;
            int8_t *l_828 = &g_75;
            uint16_t *l_839[6][5][1] = {{{&g_497.f4.f1},{&g_173},{&g_151.f1},{&g_497.f4.f1},{&g_151.f1}},{{&g_173},{&g_497.f4.f1},{&g_527},{&g_527},{&g_497.f4.f1}},{{&g_173},{&g_151.f1},{&g_497.f4.f1},{&g_151.f1},{&g_173}},{{&g_497.f4.f1},{&g_527},{&g_527},{&g_497.f4.f1},{&g_173}},{{&g_151.f1},{&g_497.f4.f1},{&g_151.f1},{&g_173},{&g_497.f4.f1}},{{&g_527},{&g_527},{&g_497.f4.f1},{&g_173},{&g_151.f1}}};
            uint32_t *l_841 = &g_714;
            struct S0 * const *l_846 = &l_792;
            int32_t l_847[2];
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_847[i] = 1L;
            for (g_497.f0.f1 = 0; (g_497.f0.f1 <= 4); g_497.f0.f1 += 1)
            { 
                int32_t l_772 = 0L;
                int32_t *l_773 = &g_341;
                int8_t *l_812[5][3] = {{&g_315,&g_315,&g_453},{&g_453,&g_315,&g_453},{&g_453,&g_315,&g_453},{&g_453,&g_315,&g_453},{&g_453,&g_315,&g_453}};
                int i, j;
                if (((*l_773) = l_772))
                { 
                    uint8_t *l_790 = &g_144;
                    int32_t *l_791[6] = {&g_67,&g_256,&g_67,&g_67,&g_256,&g_67};
                    int8_t **l_813 = &l_812[4][2];
                    uint16_t *l_814 = &g_101;
                    int i;
                    l_776 = (safe_mod_func_uint16_t_u_u(p_21, (*l_773)));
                    g_38 ^= (l_777 >= (safe_add_func_int32_t_s_s(((*l_773) = (((*l_790) |= (p_21 >= (((((safe_mul_func_int16_t_s_s((4294967289UL & (safe_mul_func_int8_t_s_s(0L, (--g_604[g_497.f0.f1])))), p_20)) < (safe_div_func_uint16_t_u_u(1UL, 0xBC31L))) > p_20) , p_21) && 0x7CL))) | l_776)), l_777)));
                    g_582 = l_792;
                    (*g_153) = l_793[1][0];
                    (*l_773) = (safe_add_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(p_20, (safe_add_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s(((safe_div_func_uint16_t_u_u(((((***l_815) &= (safe_rshift_func_int16_t_s_u(((l_806 , (void*)0) == (((*p_22) ^= (safe_mul_func_uint16_t_u_u(((*l_814) = (safe_rshift_func_int8_t_s_u((l_811 != ((*l_813) = l_812[1][1])), p_21))), (**g_692)))) , l_815)), 6))) & g_600) , p_23), p_20)) > p_20), 2)) >= p_23), l_816[2][2])))) == p_20), (*l_773)));
                }
                else
                { 
                    return (*p_22);
                }
                for (g_171 = (-20); (g_171 > (-29)); g_171 = safe_sub_func_uint64_t_u_u(g_171, 1))
                { 
                    uint32_t *l_819 = &g_714;
                    int32_t l_830[1][5][4] = {{{7L,0xDD924F47L,1L,0xDD924F47L},{0xDD924F47L,0L,1L,1L},{7L,7L,0xDD924F47L,1L},{(-4L),0L,(-4L),0xDD924F47L},{(-4L),0xDD924F47L,0xDD924F47L,(-4L)}}};
                    int i, j, k;
                    l_831 = ((--(*l_819)) < ((**g_153) = ((safe_add_func_uint16_t_u_u(((((((g_101 < p_20) > ((p_21 && (0x626023F8D8F27FE7LL != ((safe_rshift_func_uint16_t_u_u((p_23 = (255UL == ((((((safe_div_func_uint8_t_u_u(g_151.f0, 1L)) , p_23) > p_21) & p_20) , l_828) == l_811))), p_21)) ^ l_829))) && 0x835DL)) , p_21) , (**g_692)) <= p_20) & l_830[0][2][0]), p_21)) ^ (*p_24))));
                }
                for (p_23 = 12; (p_23 < 22); p_23 = safe_add_func_int16_t_s_s(p_23, 7))
                { 
                    int32_t **l_834[7] = {&l_773,(void*)0,(void*)0,&l_773,(void*)0,(void*)0,&l_773};
                    int i;
                    g_629[1] = ((**l_815) = l_773);
                }
                (**g_152) = l_793[1][0];
            }
            l_847[1] &= ((safe_rshift_func_int16_t_s_u((((*l_841) = ((safe_add_func_uint64_t_u_u(p_20, ((g_840[3] ^= (g_64[0].f4.f1 &= (p_23 = 0x689AL))) != (*g_376)))) != 0xBF984F5854A649B0LL)) && (l_842 != (l_846 = (p_20 , ((((safe_add_func_int64_t_s_s((~18446744073709551615UL), g_583.f0)) < g_170) && p_20) , l_846))))), 14)) != g_274[0]);
        }
    }
    return g_64[0].f0.f3;
}



static uint32_t  func_29(int32_t  p_30, int64_t * p_31, const uint64_t  p_32)
{ 
    uint8_t l_764[2][7] = {{0xD6L,2UL,0xD6L,0xD6L,2UL,0xD6L,0xD6L},{2UL,2UL,0xE0L,2UL,2UL,0xE0L,2UL}};
    int32_t *l_765 = &g_170;
    int i, j;
    (*l_765) ^= l_764[0][3];
    return (*l_765);
}



static union U1  func_34(uint64_t * p_35)
{ 
    uint64_t l_61 = 18446744073709551615UL;
    int32_t l_65 = 0x8F014566L;
    int16_t l_95 = (-5L);
    int32_t l_172[7];
    union U1 l_184 = {{1L,0x66F2L,0UL,0xC781213417209D69LL,0x791E5CB46C47A42BLL}};
    const uint8_t *l_247 = &g_64[0].f0.f2;
    const uint8_t **l_246 = &l_247;
    int32_t ** const l_329 = (void*)0;
    uint16_t ***l_340 = &g_325;
    struct S0 * const *l_390 = &g_149;
    uint32_t l_433 = 18446744073709551615UL;
    int32_t l_452 = 0xEE5101F6L;
    int8_t l_477 = (-1L);
    int8_t *l_492[5][4] = {{&g_453,&g_453,&g_75,&g_75},{&g_453,&g_453,&g_75,&g_75},{&g_453,&g_453,&g_75,&g_75},{&g_453,&g_453,&g_75,&g_75},{&g_453,&g_453,&g_75,&g_75}};
    int8_t **l_491 = &l_492[2][0];
    int32_t l_520 = 0x5AA6AD06L;
    const struct S0 *l_579 = (void*)0;
    int32_t l_646 = 0x204840CDL;
    int64_t *l_650 = &g_497.f4.f4;
    int64_t **l_649 = &l_650;
    int64_t ***l_651 = &l_649;
    int16_t **l_759 = &g_376;
    int16_t ***l_758 = &l_759;
    uint8_t l_760[4] = {0x1FL,0x1FL,0x1FL,0x1FL};
    int i, j;
    for (i = 0; i < 7; i++)
        l_172[i] = 0x35AF2584L;
    for (g_38 = 6; (g_38 >= 1); g_38 -= 1)
    { 
        int8_t l_60 = 0xC4L;
        const int32_t l_62 = 0x6D172E30L;
        union U1 l_88 = {{0x42263F48L,0UL,5UL,0x7F7BC9C4D8F350A0LL,-8L}};
        int32_t l_98 = 0xC8172F04L;
        int32_t l_99 = 0x4AB8F1B9L;
        int32_t l_100 = 3L;
        int32_t l_116 = 0x552E4EBFL;
        struct S0 *l_150 = &g_151;
        int32_t ***l_156[4][2] = {{&g_153,&g_153},{&g_153,&g_153},{&g_153,&g_153},{&g_153,&g_153}};
        uint8_t *l_178 = &g_147;
        const int16_t *l_191 = &g_169;
        int8_t l_192 = 0x98L;
        uint16_t *l_193 = &l_88.f4.f1;
        uint8_t l_199 = 0x7CL;
        int16_t l_207 = (-5L);
        int8_t l_235 = 9L;
        uint32_t l_270 = 0x6E18AEF8L;
        int32_t l_322 = 0L;
        uint16_t l_323 = 3UL;
        const int16_t **l_345 = &g_168;
        int8_t l_377 = 0xC4L;
        int i, j;
    }
    for (l_184.f3 = (-3); (l_184.f3 == 29); l_184.f3++)
    { 
        uint64_t l_404[2][2];
        int32_t l_435 = (-7L);
        int32_t l_443 = (-4L);
        int32_t l_444 = 0x73F0B1D4L;
        int8_t l_455 = 8L;
        int16_t l_474 = 0xB9E5L;
        int32_t **l_475[2][6] = {{&g_154,&g_154,&g_154,&g_154,&g_154,&g_154},{&g_154,&g_154,&g_154,&g_154,&g_154,&g_154}};
        int16_t l_476 = 0x4F1EL;
        uint8_t l_478[5];
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
                l_404[i][j] = 0xDFB4BF605BB5954CLL;
        }
        for (i = 0; i < 5; i++)
            l_478[i] = 0xF4L;
        for (l_65 = 2; (l_65 <= 6); l_65 += 1)
        { 
            int32_t *l_438 = &g_256;
            int32_t *l_439 = &g_67;
            int32_t *l_440 = (void*)0;
            int32_t *l_441 = (void*)0;
            int32_t *l_442[2];
            uint16_t l_445[6] = {1UL,1UL,1UL,1UL,1UL,1UL};
            int32_t l_451 = 0x434BD609L;
            int i;
            for (i = 0; i < 2; i++)
                l_442[i] = &g_39;
            if (((g_124[l_65] ^ l_172[l_65]) > 0UL))
            { 
                --l_404[0][1];
            }
            else
            { 
                uint8_t l_407 = 1UL;
                uint32_t *l_431 = (void*)0;
                uint32_t *l_432 = &g_312;
                uint16_t *l_434[3];
                uint8_t *l_436 = &g_147;
                int i;
                for (i = 0; i < 3; i++)
                    l_434[i] = (void*)0;
                l_407++;
                (**g_153) |= ((safe_mul_func_int8_t_s_s(g_151.f3, (g_64[0].f4.f2 , ((*l_436) ^= ((safe_mod_func_int8_t_s_s(((safe_mul_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u((((g_101 &= (l_435 = (safe_div_func_int64_t_s_s((l_404[0][1] >= ((((((safe_mod_func_uint64_t_u_u((safe_sub_func_int64_t_s_s(g_64[0].f0.f1, (safe_div_func_uint32_t_u_u(0UL, (safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(l_172[l_65], (safe_unary_minus_func_uint32_t_u(((*l_432) ^= g_5[2][3]))))), l_404[0][1])))))), l_172[l_65])) & l_407) != l_433) > g_38) || 0xB7EEL) > 0xA3L)), 1L)))) != (*g_168)) ^ g_341), 3)) >= l_172[l_65]), g_64[0].f4.f0)) > l_404[0][0]), g_274[1])) && l_172[l_65]))))) || l_172[l_65]);
                (**g_153) = ((l_172[l_65] ^ (0xFE9BEB2116620879LL < 0xA7488B1E2EE2184DLL)) < (-3L));
            }
            for (g_39 = 0; (g_39 <= 6); g_39 += 1)
            { 
                for (g_337 = 2; (g_337 <= 6); g_337 += 1)
                { 
                    int16_t l_437[2][5][5] = {{{0x5786L,0x13BDL,0x13BDL,0x5786L,0x5786L},{0L,0xC8A1L,0L,0xC8A1L,0L},{0x5786L,0x5786L,0x13BDL,0x13BDL,0x5786L},{0L,0xC8A1L,0L,0xC8A1L,0L},{0x5786L,0x13BDL,0x13BDL,0x5786L,0x5786L}},{{0L,0xC8A1L,0L,0xC8A1L,0L},{0x5786L,0x5786L,0x13BDL,0x13BDL,0x5786L},{0L,0xC8A1L,0L,0xC8A1L,0L},{0x5786L,0x13BDL,0x13BDL,0x5786L,0x5786L},{0L,0xC8A1L,0L,0xC8A1L,0L}}};
                    int i, j, k;
                    l_437[1][2][1] |= 0xFB774F0EL;
                }
                if ((**g_153))
                    break;
                if (g_124[l_65])
                    break;
            }
            ++l_445[1];
            for (g_341 = 4; (g_341 >= 1); g_341 -= 1)
            { 
                const int32_t *l_449 = &g_170;
                const int32_t **l_450 = &l_449;
                uint64_t l_458 = 0x7D5ECB7AFEB5696CLL;
                if ((g_151.f3 , (-3L)))
                { 
                    (***g_152) = ((-5L) & g_256);
                }
                else
                { 
                    union U1 l_448 = {{0x5864A9A8L,0x1F09L,0x70L,-9L,0xFF048435DCC85183LL}};
                    return l_448;
                }
                (*l_450) = l_449;
                ++l_458;
                for (g_75 = 0; (g_75 <= 1); g_75 += 1)
                { 
                    uint16_t *l_461 = &g_64[0].f0.f1;
                    const uint16_t *l_463 = &g_464;
                    const uint16_t **l_462 = &l_463;
                    int i;
                    l_172[l_65] = (l_461 == ((*l_462) = (void*)0));
                }
            }
        }
        (***g_152) = (***g_152);
        l_478[1] ^= (safe_mul_func_int16_t_s_s((g_64[0].f0.f1 , (safe_div_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((~((safe_mod_func_int8_t_s_s(((l_435 = l_474) > ((l_475[0][2] != (void*)0) <= ((((((2L > (g_64[0].f0.f0 > ((l_61 <= g_151.f2) & (*g_376)))) < l_476) ^ g_40) != (-7L)) <= 0xDEEFL) , l_477))), l_65)) < (***g_152))), 13)), (*g_168)))), g_151.f3));
        return l_184;
    }
    if (l_452)
    { 
        uint8_t *l_481 = &g_144;
        int8_t *l_483 = &g_75;
        int8_t **l_482[1][7][2] = {{{(void*)0,&l_483},{&l_483,(void*)0},{&l_483,&l_483},{(void*)0,&l_483},{&l_483,(void*)0},{&l_483,&l_483},{(void*)0,&l_483}}};
        uint16_t *l_485 = &g_64[0].f4.f1;
        int8_t ***l_490 = &l_482[0][1][1];
        int32_t l_498[3];
        int8_t *l_499 = &g_315;
        int32_t l_522 = 1L;
        uint64_t **l_540 = &g_36;
        uint8_t **l_586 = &l_481;
        uint8_t ***l_585 = &l_586;
        uint64_t l_615 = 0xDE2A4439EECBE0EFLL;
        int32_t *l_630 = (void*)0;
        int32_t *l_631 = &l_65;
        int32_t *l_632 = &g_341;
        int32_t *l_633 = &l_172[2];
        int32_t *l_634 = &l_65;
        int32_t *l_635 = (void*)0;
        int32_t *l_636[1][7][5] = {{{&g_256,(void*)0,&g_170,&g_40,(void*)0},{&g_170,&g_38,(void*)0,(void*)0,&g_38},{&g_38,&g_170,&g_170,(void*)0,&l_520},{&g_40,&l_520,(void*)0,&g_40,&g_256},{&g_170,&g_38,&g_38,&g_170,&g_40},{(void*)0,&g_38,(void*)0,&g_40,&g_40},{&g_38,(void*)0,&g_256,&l_172[0],&g_256}}};
        int32_t l_647 = 0xCE91694DL;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_498[i] = (-4L);
        if ((safe_mod_func_uint16_t_u_u((((*l_481) = 6UL) & ((g_484 = &l_477) != ((((*l_485)++) ^ (((safe_div_func_int8_t_s_s((((*l_490) = &l_483) != l_491), 0x87L)) != ((safe_div_func_int64_t_s_s(((safe_div_func_int32_t_s_s((*g_154), (((g_497 , l_498[0]) , l_498[0]) && g_497.f0.f2))) || l_498[2]), l_498[2])) < 253UL)) ^ 0xD8L)) , l_499))), (*g_376))))
        { 
            uint16_t ** const *l_516[6] = {&g_325,&g_325,&g_325,&g_325,&g_325,&g_325};
            int32_t *l_517 = (void*)0;
            int32_t l_521 = 0x68EDB20FL;
            int32_t *l_523 = &g_341;
            uint16_t l_526 = 0x6342L;
            int32_t l_560 = 0xEC3F0370L;
            int32_t l_561 = 7L;
            int32_t *l_565 = &l_172[1];
            uint64_t *l_578[4] = {&g_497.f3,&g_497.f3,&g_497.f3,&g_497.f3};
            const struct S0 **l_580 = (void*)0;
            const struct S0 **l_581[6][5] = {{&l_579,&l_579,&l_579,&l_579,&l_579},{&l_579,&l_579,(void*)0,&l_579,&l_579},{&l_579,&l_579,&l_579,&l_579,&l_579},{&l_579,&l_579,&l_579,&l_579,&l_579},{&l_579,&l_579,(void*)0,&l_579,&l_579},{&l_579,&l_579,&l_579,&l_579,&l_579}};
            int32_t *l_584 = &g_170;
            int i, j;
            (*l_523) &= (l_522 &= ((!(safe_sub_func_int64_t_s_s(((((safe_rshift_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(((safe_mod_func_int32_t_s_s(((***g_152) |= (safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((*g_376) = (0x981039DEL || (+(safe_lshift_func_uint16_t_u_u(((void*)0 == l_516[1]), (g_342[2] , ((((l_517 != (*g_153)) <= (safe_mod_func_uint8_t_u_u(l_520, (*g_484)))) == l_521) & l_521))))))), g_101)), l_498[2]))), l_521)) == 0xA2L), l_521)) != l_498[2]), l_498[0])) > g_40) ^ l_498[0]) || g_169), 0xFAD6B3BE48020639LL))) ^ g_64[0].f0.f0));
            if ((safe_mod_func_uint8_t_u_u(((g_64[0] , g_147) , (((*g_484) >= (*l_523)) || ((l_526 | 0x22FBL) || ((0xCBA77C3AF9F30E17LL | (*l_523)) || 0UL)))), (*l_523))))
            { 
                const uint8_t l_532 = 250UL;
                uint64_t *l_533 = &l_61;
                int64_t *l_536[7] = {&l_184.f0.f3,&g_64[0].f4.f4,&g_64[0].f4.f4,&l_184.f0.f3,&g_64[0].f4.f4,&g_64[0].f4.f4,&l_184.f0.f3};
                int16_t *l_537 = &g_457;
                struct S0 *l_539 = (void*)0;
                int i;
                if (((((*g_376) | (g_527 != ((l_522 & ((*l_485) = (l_498[1] != (safe_div_func_uint64_t_u_u((safe_div_func_uint16_t_u_u((((*l_537) ^= (l_532 >= (g_497.f4.f3 = (((*l_533) = 0x8B250DDDAD8C6941LL) , (safe_div_func_uint8_t_u_u(g_169, l_498[0])))))) , 9UL), 0x556AL)), 0x64A0943533A8F944LL))))) < (*g_376)))) ^ (*g_168)) <= 0x2A8AL))
                { 
                    struct S0 **l_538[3][3] = {{&g_149,&g_149,&g_149},{&g_149,&g_149,&g_149},{&g_149,&g_149,&g_149}};
                    uint64_t ***l_541 = &l_540;
                    int i, j;
                    l_539 = &g_151;
                    (*l_541) = l_540;
                }
                else
                { 
                    (**g_153) &= (~(*g_376));
                }
                for (g_169 = 1; (g_169 <= 5); g_169 += 1)
                { 
                    uint64_t l_543 = 0UL;
                    int i;
                    (*l_523) &= (l_543 >= ((*l_481) = (&g_168 == &g_376)));
                }
                (**g_152) = &l_498[1];
            }
            else
            { 
                int32_t *l_552 = &g_341;
                int32_t *l_553 = &l_498[0];
                int32_t *l_554 = &g_39;
                int32_t *l_555 = &g_170;
                int32_t *l_556 = (void*)0;
                int32_t *l_557 = &l_498[0];
                int32_t *l_558[7] = {&g_256,&l_522,&g_256,&g_256,&l_522,&g_256,&g_256};
                int32_t l_559 = (-1L);
                int i;
                g_562++;
            }
            (*l_565) ^= ((*l_523) = l_498[0]);
            (*l_584) ^= (l_498[0] != (safe_add_func_int16_t_s_s((((safe_mod_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u(0x89L, ((((((((safe_rshift_func_uint16_t_u_s((((safe_lshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s(((l_522 = (g_497.f3 < (((*l_565) = (*l_565)) , ((g_582 = l_579) != &g_583)))) >= (g_274[0] = (((**g_153) , 0x093BC3F6L) & 0xBF506B4EL))), g_341)), 2)) | 0x9539L) <= l_498[0]), 10)) != 0x30L) || l_498[2]) | g_173) & 0x2172L) == l_498[0]) > l_498[0]) , 0x30L))), l_498[1])) >= l_498[0]) , (*g_376)), 3L)));
        }
        else
        { 
            uint64_t l_589 = 0x9B9E8AD523855F5DLL;
            int16_t l_590[2];
            int32_t l_594 = 0xCDCF11DCL;
            int32_t l_596 = 0x754166C0L;
            int32_t l_598 = 0x797C532EL;
            int32_t l_599 = 0x27FCA6B8L;
            int32_t *l_603[6] = {&g_341,&g_341,&g_341,&g_341,&g_341,&g_341};
            int i;
            for (i = 0; i < 2; i++)
                l_590[i] = 0L;
            for (g_497.f0.f4 = 0; (g_497.f0.f4 <= 4); g_497.f0.f4 += 1)
            { 
                int32_t l_595 = (-1L);
                int32_t l_597[3][4][2] = {{{1L,0xAF80B051L},{(-8L),1L},{0x2F239DD3L,0x2F239DD3L},{0x2F239DD3L,1L}},{{(-8L),0xAF80B051L},{1L,0xAF80B051L},{(-8L),1L},{0x2F239DD3L,0x2F239DD3L}},{{0x2F239DD3L,1L},{(-8L),0xAF80B051L},{1L,0xAF80B051L},{(-8L),1L}}};
                int i, j, k;
                l_522 &= 0xC672E5EFL;
            }
            if (g_497.f0.f2)
                goto lbl_607;
lbl_607:
            g_604[1]++;
            return l_184;
        }
        for (l_477 = (-14); (l_477 == 3); l_477 = safe_add_func_int64_t_s_s(l_477, 4))
        { 
            int32_t *l_610 = &g_38;
            int32_t *l_611 = &l_522;
            int32_t *l_612 = &l_172[0];
            int32_t *l_613 = &l_172[2];
            int32_t *l_614[3];
            const int32_t *l_623 = &g_624[1][4][0];
            const int32_t **l_622 = &l_623;
            int i;
            for (i = 0; i < 3; i++)
                l_614[i] = &g_38;
            for (g_173 = 1; (g_173 <= 6); g_173 += 1)
            { 
                return g_64[0];
            }
            l_615--;
            (**g_153) = (+((safe_mul_func_uint8_t_u_u((~(l_615 && (*g_168))), ((*l_499) = (*g_484)))) & ((l_498[1] , ((*l_622) = (*g_153))) == ((l_522 == ((((safe_lshift_func_int8_t_s_s((safe_add_func_int8_t_s_s((*l_610), 0UL)), 1)) < g_600) == l_615) <= g_257)) , (**g_152)))));
            g_629[1] = (*l_622);
        }
        --g_637;
        (***g_152) = (((safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(((((*g_484) , (safe_div_func_uint32_t_u_u((((*g_484) &= (((void*)0 != &g_484) ^ ((*l_632) != (((((*l_540) = (void*)0) != p_35) , (((*l_631) >= l_433) , (*g_149))) , (*l_633))))) < (*l_633)), l_646))) > g_457) | l_647), (*l_632))), (*l_631))) , (void*)0) != &l_482[0][5][1]);
    }
    else
    { 
        union U1 l_648 = {{0x5DD87D00L,0x8A14L,248UL,3L,9L}};
        return l_648;
    }
    (*l_651) = l_649;
    for (g_497.f4.f1 = 1; (g_497.f4.f1 <= 4); g_497.f4.f1 += 1)
    { 
        int32_t l_657 = 1L;
        int8_t l_713 = 0L;
        union U1 l_761 = {{-7L,0x7CC1L,0xB3L,0x753FD463E08CC656LL,0x413931FE16A4AA7ELL}};
        int i;
        if (((safe_mod_func_uint32_t_u_u(((((((safe_unary_minus_func_uint8_t_u(((((g_342[g_497.f4.f1] ^ ((0xD2L && l_184.f1) > g_342[g_497.f4.f1])) & (((l_657 &= (safe_mod_func_int16_t_s_s((g_342[g_497.f4.f1] != (g_342[g_497.f4.f1] <= 1UL)), g_342[g_497.f4.f1]))) >= 0x1091679DD4436787LL) | (*g_168))) , 7UL) != g_342[g_497.f4.f1]))) && l_452) , g_325) == (*l_340)) , g_342[g_497.f4.f1]) < 0L), l_172[2])) > 7UL))
        { 
            int32_t *l_658 = &g_170;
            int32_t l_712[6][3][2] = {{{0xFDF5B400L,(-10L)},{0xC1AE11C1L,(-10L)},{0xFDF5B400L,0L}},{{0L,0xFDF5B400L},{(-10L),0xC1AE11C1L},{(-10L),0xFDF5B400L}},{{0L,0L},{0xFDF5B400L,(-10L)},{0xC1AE11C1L,(-10L)}},{{0xFDF5B400L,0L},{0L,0xFDF5B400L},{(-10L),0xC1AE11C1L}},{{(-10L),0xFDF5B400L},{0L,0L},{0xFDF5B400L,(-10L)}},{{0xC1AE11C1L,(-10L)},{0xFDF5B400L,0L},{0L,0xFDF5B400L}}};
            uint8_t **l_747 = (void*)0;
            int i, j, k;
            for (l_184.f4.f4 = 4; (l_184.f4.f4 >= 0); l_184.f4.f4 -= 1)
            { 
                uint32_t *l_663[3];
                int32_t l_664[7] = {0x93D877C0L,0x93D877C0L,0x93D877C0L,0x93D877C0L,0x93D877C0L,0x93D877C0L,0x93D877C0L};
                int32_t *l_702 = &g_38;
                int32_t *l_703 = &g_40;
                int32_t *l_704 = &g_256;
                int32_t *l_705 = (void*)0;
                int32_t *l_706 = &g_38;
                int32_t *l_707 = &l_172[1];
                int32_t *l_708 = (void*)0;
                int32_t *l_709 = &l_172[2];
                int32_t *l_710 = &g_39;
                int32_t *l_711[4][6][4] = {{{&l_65,&l_520,(void*)0,(void*)0},{(void*)0,&l_657,&g_256,&l_520},{&l_65,&g_67,&g_256,&g_39},{(void*)0,&g_67,(void*)0,(void*)0},{&l_65,&l_65,&l_657,&l_65},{&l_657,&l_65,&l_172[2],&g_170}},{{&g_170,&l_65,&l_65,&l_172[2]},{&g_67,&l_65,&l_65,&g_170},{&l_65,&l_65,(void*)0,&l_520},{(void*)0,&g_67,&l_65,(void*)0},{&l_657,&g_39,(void*)0,&l_65},{(void*)0,(void*)0,&l_65,&l_65}},{{(void*)0,&l_657,(void*)0,&l_172[2]},{&l_657,&l_65,&l_65,&l_657},{(void*)0,&g_67,&l_657,(void*)0},{&l_65,&l_172[2],&g_170,&g_256},{&g_256,&l_65,&g_67,&g_256},{&g_67,&l_172[2],&l_65,(void*)0}},{{&l_657,&g_67,&l_657,&l_657},{&g_67,&l_65,(void*)0,&l_172[2]},{&g_256,&l_657,(void*)0,&l_65},{&l_520,(void*)0,(void*)0,&l_65},{&g_256,&g_39,(void*)0,(void*)0},{&g_67,&g_67,&l_657,&l_520}}};
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_663[i] = &g_312;
                l_658 = &l_172[2];
                if ((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(g_38, l_172[2])), ((l_664[1] = g_342[g_497.f4.f1]) , 1UL))))
                { 
                    uint16_t *l_667 = (void*)0;
                    uint16_t *l_668 = &g_64[0].f4.f1;
                    int32_t l_671 = (-8L);
                    int32_t **l_690[1][3];
                    int16_t * const ***l_693 = (void*)0;
                    int16_t * const ***l_694 = &g_691;
                    int32_t ****l_695 = &g_152;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_690[i][j] = &l_658;
                    }
                    (*l_658) = (safe_sub_func_int32_t_s_s((((*l_668)--) ^ (l_657 != l_671)), (safe_sub_func_int16_t_s_s((-1L), (safe_add_func_uint32_t_u_u(0x2BBCE498L, (safe_sub_func_int64_t_s_s(((((safe_div_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((*l_658), (safe_mod_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((safe_div_func_int64_t_s_s((safe_sub_func_uint16_t_u_u((((*l_658) == 0xE0B9CDFCL) > (*l_658)), l_664[4])), l_664[3])), g_342[g_497.f4.f1])), 0x4BL)))), l_671)) && g_457) , (void*)0) != l_690[0][1]), g_342[g_497.f4.f1]))))))));
                    (*l_694) = g_691;
                    (*l_658) |= l_520;
                    (*l_695) = &g_153;
                }
                else
                { 
                    struct S0 **l_696 = &g_149;
                    int32_t l_697 = 0x996E3351L;
                    (*l_696) = &g_151;
                    (*l_658) = (l_697 && (safe_mul_func_int8_t_s_s(((g_5[3][5] <= l_697) < (&g_691 == ((safe_add_func_uint8_t_u_u(0x05L, (*g_484))) , &g_691))), (*l_658))));
                    return g_64[0];
                }
                g_714++;
                if ((*l_658))
                    break;
            }
            for (g_144 = 1; (g_144 <= 4); g_144 += 1)
            { 
                struct S0 **l_717 = &g_149;
                int32_t l_744 = 0xF7D35282L;
                uint8_t *l_748 = &g_147;
                int32_t *l_749 = &l_65;
                (*l_717) = (void*)0;
                (*l_749) = (safe_rshift_func_uint16_t_u_s(((((*l_748) = (safe_add_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s((g_64[0].f4.f3 < (((safe_rshift_func_uint8_t_u_u((((*l_658) = ((safe_sub_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s(((~0x524B2F0177ECA8F2LL) || (g_342[g_497.f4.f1] | ((((((safe_add_func_uint64_t_u_u((((safe_rshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_mod_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u(((+l_744) | (safe_add_func_int64_t_s_s((l_646 | l_713), 1L))), l_744)), g_257)), 0xD80AL)), (*g_484))) > g_342[g_497.f4.f1]) | 0x399541CE125232E3LL), g_256)) , l_747) == (void*)0) > l_184.f3) <= g_67) < 0x3D451D25L))), (-1L))) , g_562), 0x8EL)) && g_38)) | l_477), l_744)) | l_477) , 0x3DL)), 0x7AAB8776L)) < (*g_484)), l_744)), l_646))) < 0x17L) > (-10L)), l_712[5][1][0]));
            }
            if ((safe_lshift_func_uint16_t_u_u((6L != (((*l_658) <= (*g_484)) > (safe_mod_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((*l_658), (safe_rshift_func_uint8_t_u_u((l_758 != (void*)0), 0)))), ((l_760[1] ^ 0x5DCD0281A9443F3ALL) , 6L))))), 15)))
            { 
                return l_761;
            }
            else
            { 
                return g_64[0];
            }
        }
        else
        { 
            int8_t l_762 = 0xB1L;
            int32_t *l_763[4];
            int i;
            for (i = 0; i < 4; i++)
                l_763[i] = &l_172[2];
            l_657 ^= l_762;
        }
    }
    return g_497;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_5[i][j], "g_5[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_26, "g_26", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_37[i][j], "g_37[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_64[i].f0.f0, "g_64[i].f0.f0", print_hash_value);
        transparent_crc(g_64[i].f0.f1, "g_64[i].f0.f1", print_hash_value);
        transparent_crc(g_64[i].f0.f2, "g_64[i].f0.f2", print_hash_value);
        transparent_crc(g_64[i].f0.f3, "g_64[i].f0.f3", print_hash_value);
        transparent_crc(g_64[i].f0.f4, "g_64[i].f0.f4", print_hash_value);
        transparent_crc(g_64[i].f1, "g_64[i].f1", print_hash_value);
        transparent_crc(g_64[i].f2, "g_64[i].f2", print_hash_value);
        transparent_crc(g_64[i].f3, "g_64[i].f3", print_hash_value);
        transparent_crc(g_64[i].f4.f0, "g_64[i].f4.f0", print_hash_value);
        transparent_crc(g_64[i].f4.f1, "g_64[i].f4.f1", print_hash_value);
        transparent_crc(g_64[i].f4.f2, "g_64[i].f4.f2", print_hash_value);
        transparent_crc(g_64[i].f4.f3, "g_64[i].f4.f3", print_hash_value);
        transparent_crc(g_64[i].f4.f4, "g_64[i].f4.f4", print_hash_value);

    }
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_124[i], "g_124[i]", print_hash_value);

    }
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_151.f0, "g_151.f0", print_hash_value);
    transparent_crc(g_151.f1, "g_151.f1", print_hash_value);
    transparent_crc(g_151.f2, "g_151.f2", print_hash_value);
    transparent_crc(g_151.f3, "g_151.f3", print_hash_value);
    transparent_crc(g_151.f4, "g_151.f4", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_173, "g_173", print_hash_value);
    transparent_crc(g_256, "g_256", print_hash_value);
    transparent_crc(g_257, "g_257", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_274[i], "g_274[i]", print_hash_value);

    }
    transparent_crc(g_312, "g_312", print_hash_value);
    transparent_crc(g_315, "g_315", print_hash_value);
    transparent_crc(g_337, "g_337", print_hash_value);
    transparent_crc(g_341, "g_341", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_342[i], "g_342[i]", print_hash_value);

    }
    transparent_crc(g_453, "g_453", print_hash_value);
    transparent_crc(g_454, "g_454", print_hash_value);
    transparent_crc(g_456, "g_456", print_hash_value);
    transparent_crc(g_457, "g_457", print_hash_value);
    transparent_crc(g_464, "g_464", print_hash_value);
    transparent_crc(g_497.f0.f0, "g_497.f0.f0", print_hash_value);
    transparent_crc(g_497.f0.f1, "g_497.f0.f1", print_hash_value);
    transparent_crc(g_497.f0.f2, "g_497.f0.f2", print_hash_value);
    transparent_crc(g_497.f0.f3, "g_497.f0.f3", print_hash_value);
    transparent_crc(g_497.f0.f4, "g_497.f0.f4", print_hash_value);
    transparent_crc(g_497.f1, "g_497.f1", print_hash_value);
    transparent_crc(g_497.f2, "g_497.f2", print_hash_value);
    transparent_crc(g_497.f3, "g_497.f3", print_hash_value);
    transparent_crc(g_497.f4.f0, "g_497.f4.f0", print_hash_value);
    transparent_crc(g_497.f4.f1, "g_497.f4.f1", print_hash_value);
    transparent_crc(g_497.f4.f2, "g_497.f4.f2", print_hash_value);
    transparent_crc(g_497.f4.f3, "g_497.f4.f3", print_hash_value);
    transparent_crc(g_497.f4.f4, "g_497.f4.f4", print_hash_value);
    transparent_crc(g_527, "g_527", print_hash_value);
    transparent_crc(g_562, "g_562", print_hash_value);
    transparent_crc(g_583.f0, "g_583.f0", print_hash_value);
    transparent_crc(g_583.f1, "g_583.f1", print_hash_value);
    transparent_crc(g_583.f2, "g_583.f2", print_hash_value);
    transparent_crc(g_583.f3, "g_583.f3", print_hash_value);
    transparent_crc(g_583.f4, "g_583.f4", print_hash_value);
    transparent_crc(g_600, "g_600", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_604[i], "g_604[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_624[i][j][k], "g_624[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_637, "g_637", print_hash_value);
    transparent_crc(g_714, "g_714", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_840[i], "g_840[i]", print_hash_value);

    }
    transparent_crc(g_908, "g_908", print_hash_value);
    transparent_crc(g_930, "g_930", print_hash_value);
    transparent_crc(g_932, "g_932", print_hash_value);
    transparent_crc(g_933, "g_933", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_934[i], "g_934[i]", print_hash_value);

    }
    transparent_crc(g_1050, "g_1050", print_hash_value);
    transparent_crc(g_1055, "g_1055", print_hash_value);
    transparent_crc(g_1135, "g_1135", print_hash_value);
    transparent_crc(g_1264, "g_1264", print_hash_value);
    transparent_crc(g_1315, "g_1315", print_hash_value);
    transparent_crc(g_1371, "g_1371", print_hash_value);
    transparent_crc(g_1419, "g_1419", print_hash_value);
    transparent_crc(g_1522, "g_1522", print_hash_value);
    transparent_crc(g_1621, "g_1621", print_hash_value);
    transparent_crc(g_1632, "g_1632", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1633[i], "g_1633[i]", print_hash_value);

    }
    transparent_crc(g_1679, "g_1679", print_hash_value);
    transparent_crc(g_1682, "g_1682", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1683[i], "g_1683[i]", print_hash_value);

    }
    transparent_crc(g_1710.f0, "g_1710.f0", print_hash_value);
    transparent_crc(g_1710.f1, "g_1710.f1", print_hash_value);
    transparent_crc(g_1710.f2, "g_1710.f2", print_hash_value);
    transparent_crc(g_1710.f3, "g_1710.f3", print_hash_value);
    transparent_crc(g_1710.f4, "g_1710.f4", print_hash_value);
    transparent_crc(g_1731, "g_1731", print_hash_value);
    transparent_crc(g_1785, "g_1785", print_hash_value);
    transparent_crc(g_1948, "g_1948", print_hash_value);
    transparent_crc(g_2041.f0, "g_2041.f0", print_hash_value);
    transparent_crc(g_2041.f1, "g_2041.f1", print_hash_value);
    transparent_crc(g_2041.f2, "g_2041.f2", print_hash_value);
    transparent_crc(g_2041.f3, "g_2041.f3", print_hash_value);
    transparent_crc(g_2041.f4, "g_2041.f4", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
