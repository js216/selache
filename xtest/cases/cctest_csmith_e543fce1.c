// SPDX-License-Identifier: MIT
// cctest_csmith_e543fce1.c --- cctest case csmith_e543fce1 (csmith seed 3846438113)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x4808e5f2 */
/* @exp_ticks 0xa13a */

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

// Options:   -s 3846438113 -o /tmp/csmith_gen_vfxyo57w/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int8_t  f0;
   uint32_t  f1;
   int8_t  f2;
   int32_t  f3;
   uint16_t  f4;
   uint16_t  f5;
};
#pragma pack(pop)

union U1 {
   uint32_t  f0;
   const int32_t  f1;
   uint16_t  f2;
   int16_t  f3;
};


static int32_t g_2[4] = {(-1L),(-1L),(-1L),(-1L)};
static int32_t g_5 = 0x4B283066L;
static uint8_t g_14 = 0x00L;
static union U1 g_32 = {0x826F3938L};
static uint16_t g_37 = 0x4782L;
static uint8_t g_54 = 1UL;
static uint8_t *g_53 = &g_54;
static int32_t g_75 = 0xCD027BAEL;
static uint64_t g_89 = 0UL;
static int8_t g_90 = 0x0CL;
static int8_t g_91 = (-1L);
static int32_t g_96[3] = {(-5L),(-5L),(-5L)};
static int8_t g_97[6][2][4] = {{{1L,0x2DL,(-1L),0x2DL},{1L,(-1L),(-1L),(-1L)}},{{1L,0x2DL,(-1L),0x2DL},{1L,(-1L),(-1L),(-1L)}},{{1L,0x2DL,(-1L),0x2DL},{1L,(-1L),(-1L),(-1L)}},{{1L,0x2DL,(-1L),0x2DL},{1L,(-1L),(-1L),(-1L)}},{{1L,0x2DL,(-1L),0x2DL},{1L,(-1L),(-1L),(-1L)}},{{1L,0x2DL,(-1L),0x2DL},{1L,(-1L),(-1L),(-1L)}}};
static uint8_t g_109[6][4] = {{0xA6L,9UL,0xA6L,9UL},{0xA6L,9UL,0xA6L,9UL},{0xA6L,9UL,0xA6L,9UL},{0xA6L,9UL,0xA6L,9UL},{0xA6L,9UL,0xA6L,9UL},{0xA6L,9UL,0xA6L,9UL}};
static uint32_t g_139 = 18446744073709551609UL;
static int32_t g_147 = 0x69535F3DL;
static int64_t g_148 = 0x5FB264BA2F5D31D5LL;
static int32_t g_150 = 0xA7A0367BL;
static int8_t g_151[2][6][2] = {{{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}},{{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}}};
static int8_t g_152 = 0x3AL;
static uint16_t g_153 = 0xD794L;
static uint16_t *g_175 = &g_32.f2;
static uint16_t **g_174 = &g_175;
static const struct S0 g_186 = {5L,0UL,0xECL,-1L,0UL,1UL};
static const struct S0 *g_185 = &g_186;
static const struct S0 **g_184 = &g_185;
static int32_t *g_188 = &g_75;
static uint16_t g_192[5][7][5] = {{{65533UL,65531UL,65534UL,0x79C0L,0xFCF0L},{65534UL,0UL,65535UL,0xAE14L,65533UL},{65534UL,2UL,0x20A7L,65533UL,65528UL},{0x4DA7L,0x8765L,0x6A97L,0x7956L,0xE5A9L},{65526UL,65534UL,0x1C40L,3UL,65535UL},{0UL,1UL,0xAD15L,0x5C27L,0x09CBL},{0UL,0x79C0L,0xF404L,65532UL,0xE47DL}},{{65526UL,65535UL,2UL,0UL,0x5C27L},{0x4DA7L,0xAD15L,0x174EL,0xAD15L,0x4DA7L},{65534UL,0x09CBL,0x7956L,0xFCF0L,2UL},{65534UL,1UL,0UL,5UL,65526UL},{65533UL,0x064CL,65528UL,0x09CBL,2UL},{0x4B32L,5UL,0xC186L,0x2BDFL,0x4DA7L},{2UL,0x20A7L,65533UL,65528UL,0x5C27L}},{{0x2BDFL,65534UL,65534UL,0x20A7L,0xE47DL},{5UL,65534UL,65526UL,0xDA62L,0x09CBL},{0x7956L,0x1C40L,65532UL,0xDA62L,65535UL},{0UL,3UL,0x79C0L,0x20A7L,0xE5A9L},{0xF066L,0xAE14L,1UL,65528UL,65528UL},{3UL,0x4B32L,3UL,0x2BDFL,65533UL},{0xE5A9L,1UL,65534UL,0x09CBL,0xFCF0L}},{{1UL,0x4E3BL,0x2BDFL,5UL,0xD120L},{0xDA62L,0x4DA7L,65534UL,0xFCF0L,0UL},{0xA74AL,0xE5A9L,3UL,0xAD15L,65534UL},{1UL,0x5024L,1UL,0UL,1UL},{0x20A7L,0xA74AL,0x79C0L,65532UL,65534UL},{0xFCF0L,1UL,65532UL,0x5C27L,0UL},{65528UL,0x064CL,65533UL,0x8765L,0UL}},{{0x7956L,0x4E3BL,0x1C40L,0xF404L,65534UL},{0xF066L,65534UL,0xAE14L,0xAE14L,65534UL},{0x5024L,0UL,0xDC26L,3UL,0x4DA7L},{0x4B32L,0UL,0xA74AL,0xAD15L,0xC186L},{0xA74AL,65532UL,0x20A7L,0x4B32L,5UL},{0x4B32L,2UL,0xF404L,3UL,0x174EL},{0x5024L,0xD120L,0x7956L,0x4DA7L,3UL}}};
static int32_t g_213[2][5] = {{2L,2L,2L,2L,2L},{0x858C9672L,0x858C9672L,0x858C9672L,0x858C9672L,0x858C9672L}};
static uint64_t g_288 = 18446744073709551615UL;
static uint64_t *g_289 = &g_288;
static uint32_t g_361 = 7UL;
static uint32_t *g_409 = &g_361;
static uint32_t **g_408[4] = {&g_409,&g_409,&g_409,&g_409};
static int32_t g_416[6] = {0x7D6AC2BEL,0x7D6AC2BEL,0x7D6AC2BEL,0x7D6AC2BEL,0x7D6AC2BEL,0x7D6AC2BEL};
static uint64_t g_421 = 6UL;
static int32_t g_430 = (-2L);
static int64_t g_435 = 0L;
static union U1 g_448 = {0x68A76CA1L};
static union U1 *g_447 = &g_448;
static uint32_t *g_460[6][2] = {{&g_448.f0,&g_448.f0},{&g_448.f0,&g_448.f0},{&g_448.f0,&g_448.f0},{&g_448.f0,&g_448.f0},{&g_448.f0,&g_448.f0},{&g_448.f0,&g_448.f0}};
static uint32_t g_519 = 2UL;
static int32_t g_533 = 0L;
static int32_t ** const *g_628 = (void*)0;
static uint32_t g_737[4] = {0x1B3F7175L,0x1B3F7175L,0x1B3F7175L,0x1B3F7175L};
static int32_t *g_766[5][4] = {{&g_213[0][4],&g_213[0][4],&g_213[0][4],&g_213[0][4]},{&g_213[0][4],&g_213[0][4],&g_213[0][4],&g_213[0][4]},{&g_213[0][4],&g_213[0][4],&g_213[0][4],&g_213[0][4]},{&g_213[0][4],&g_213[0][4],&g_213[0][4],&g_213[0][4]},{&g_213[0][4],&g_213[0][4],&g_213[0][4],&g_213[0][4]}};
static int8_t *g_782[5] = {&g_90,&g_90,&g_90,&g_90,&g_90};
static int8_t **g_781 = &g_782[3];
static int8_t ***g_780 = &g_781;
static uint32_t g_855 = 0x6B6091F0L;
static uint32_t * const g_854 = &g_855;
static uint32_t * const *g_853[1][7][2] = {{{&g_854,&g_854},{&g_854,&g_854},{(void*)0,&g_854},{&g_854,&g_854},{(void*)0,&g_854},{&g_854,&g_854},{&g_854,&g_854}}};
static uint32_t * const **g_852 = &g_853[0][0][0];
static int8_t g_879 = 0x36L;
static struct S0 g_944 = {0xB1L,4294967293UL,-1L,0x4806D911L,65535UL,0xE155L};
static struct S0 *g_943[2][6][4] = {{{&g_944,(void*)0,&g_944,(void*)0},{&g_944,&g_944,&g_944,&g_944},{&g_944,&g_944,(void*)0,(void*)0},{&g_944,(void*)0,&g_944,&g_944},{&g_944,(void*)0,(void*)0,&g_944},{&g_944,&g_944,&g_944,&g_944}},{{&g_944,&g_944,&g_944,&g_944},{&g_944,&g_944,&g_944,&g_944},{&g_944,(void*)0,(void*)0,&g_944},{&g_944,&g_944,(void*)0,&g_944},{(void*)0,(void*)0,&g_944,&g_944},{&g_944,&g_944,&g_944,&g_944}}};
static struct S0 **g_942 = &g_943[0][4][3];
static struct S0 ***g_941 = &g_942;
static struct S0 ****g_940[6][7][3] = {{{&g_941,&g_941,&g_941},{&g_941,&g_941,(void*)0},{(void*)0,&g_941,&g_941},{&g_941,&g_941,&g_941},{&g_941,&g_941,&g_941},{&g_941,&g_941,&g_941},{&g_941,&g_941,&g_941}},{{&g_941,&g_941,&g_941},{&g_941,&g_941,&g_941},{&g_941,&g_941,&g_941},{&g_941,(void*)0,&g_941},{&g_941,&g_941,&g_941},{&g_941,&g_941,&g_941},{&g_941,&g_941,&g_941}},{{&g_941,&g_941,&g_941},{&g_941,&g_941,&g_941},{(void*)0,&g_941,(void*)0},{&g_941,&g_941,&g_941},{&g_941,&g_941,&g_941},{&g_941,&g_941,&g_941},{&g_941,&g_941,&g_941}},{{&g_941,&g_941,&g_941},{&g_941,(void*)0,&g_941},{&g_941,&g_941,(void*)0},{&g_941,&g_941,&g_941},{(void*)0,&g_941,(void*)0},{&g_941,&g_941,&g_941},{&g_941,&g_941,&g_941}},{{&g_941,&g_941,&g_941},{&g_941,&g_941,&g_941},{&g_941,&g_941,&g_941},{&g_941,&g_941,&g_941},{&g_941,&g_941,(void*)0},{&g_941,&g_941,&g_941},{&g_941,&g_941,&g_941}},{{&g_941,(void*)0,&g_941},{&g_941,&g_941,&g_941},{&g_941,&g_941,&g_941},{&g_941,&g_941,&g_941},{&g_941,&g_941,&g_941},{&g_941,&g_941,&g_941},{(void*)0,&g_941,(void*)0}}};
static const int32_t **g_984 = (void*)0;
static const int32_t ***g_983 = &g_984;
static const int32_t ****g_982 = &g_983;
static const int32_t *****g_981 = &g_982;
static uint64_t g_1035 = 18446744073709551608UL;
static uint32_t **g_1093 = &g_460[0][1];
static union U1 g_1159 = {0xBA1F68B3L};
static union U1 g_1161 = {3UL};
static union U1 g_1164[1] = {{18446744073709551615UL}};
static uint16_t g_1202 = 0xA8B6L;
static uint8_t g_1325[6] = {255UL,255UL,255UL,255UL,255UL,255UL};
static const int64_t g_1330 = 0x775E5483EC4D3756LL;
static int32_t **g_1411 = &g_188;
static int32_t ***g_1410 = &g_1411;
static int32_t ****g_1409 = &g_1410;
static int32_t *****g_1408[1] = {&g_1409};
static int16_t g_1496 = 0L;
static uint8_t g_1657 = 0x26L;
static uint8_t g_1699[4][5] = {{1UL,1UL,1UL,1UL,1UL},{0xA4L,0xA4L,0xA4L,0xA4L,0xA4L},{1UL,1UL,1UL,1UL,1UL},{0xA4L,0xA4L,0xA4L,0xA4L,0xA4L}};
static uint64_t g_1745 = 3UL;
static int32_t *g_1764 = &g_5;
static int64_t *g_1816 = &g_148;
static int64_t **g_1815 = &g_1816;
static int64_t g_1825 = (-1L);
static int8_t g_1902 = 0x34L;
static struct S0 ***g_1929 = &g_942;
static union U1 **g_1935 = &g_447;
static union U1 ***g_1934 = &g_1935;
static union U1 ****g_1933[4] = {&g_1934,&g_1934,&g_1934,&g_1934};
static uint32_t g_1953 = 6UL;
static uint32_t g_1956 = 1UL;



static int32_t  func_1(void);
static int32_t * func_8(uint32_t  p_9, uint8_t  p_10, int16_t  p_11);
static union U1  func_17(int8_t  p_18, uint64_t  p_19, int32_t * p_20, uint8_t * const  p_21, uint8_t  p_22);
static uint32_t  func_24(uint32_t  p_25, uint8_t * p_26, int32_t * p_27);
static uint64_t  func_28(uint64_t  p_29);
static uint64_t  func_30(union U1  p_31);
static uint32_t  func_43(uint16_t * p_44, union U1  p_45, int32_t * p_46, int64_t  p_47, const int8_t  p_48);
static uint16_t * func_49(int32_t * p_50, int16_t  p_51, uint8_t * p_52);




static int32_t  func_1(void)
{ 
    const int64_t l_23 = 0x87110E6B6CD33356LL;
    int32_t l_1090 = (-1L);
    int32_t l_1768 = (-2L);
    int32_t l_1771 = (-3L);
    int32_t l_1776[1];
    union U1 l_1840 = {18446744073709551612UL};
    int32_t l_1852 = 0xD514AF6AL;
    struct S0 l_1868 = {0L,0x8F7C4117L,0x86L,8L,0x5E6FL,0x2AD1L};
    uint8_t l_1936 = 255UL;
    int i;
    for (i = 0; i < 1; i++)
        l_1776[i] = 7L;
    for (g_2[0] = (-19); (g_2[0] <= 2); g_2[0] = safe_add_func_int16_t_s_s(g_2[0], 6))
    { 
        uint8_t *l_815[1][3];
        int32_t *l_816 = (void*)0;
        int32_t l_1774 = 0x48C30C97L;
        uint16_t l_1777 = 8UL;
        const uint16_t l_1792 = 0x2415L;
        uint32_t l_1802 = 0xA2120414L;
        uint32_t ***l_1864 = &g_1093;
        int32_t l_1873 = 0x082D3022L;
        int32_t l_1874 = 9L;
        int32_t l_1877 = 1L;
        uint64_t l_1880 = 0UL;
        struct S0 l_1883[1][4][2] = {{{{-2L,4294967286UL,0x54L,-10L,1UL,4UL},{-2L,4294967286UL,0x54L,-10L,1UL,4UL}},{{0x76L,1UL,0x2DL,9L,0x5294L,8UL},{-2L,4294967286UL,0x54L,-10L,1UL,4UL}},{{-2L,4294967286UL,0x54L,-10L,1UL,4UL},{0x76L,1UL,0x2DL,9L,0x5294L,8UL}},{{-2L,4294967286UL,0x54L,-10L,1UL,4UL},{-2L,4294967286UL,0x54L,-10L,1UL,4UL}}}};
        int32_t l_1903 = 0xB7796842L;
        int32_t l_1904 = 0L;
        uint32_t l_1905 = 0x68F827D0L;
        uint64_t l_1937 = 5UL;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_815[i][j] = &g_109[4][1];
        }
        for (g_5 = 0; (g_5 <= (-9)); --g_5)
        { 
            int64_t l_12[2];
            uint8_t *l_13 = &g_14;
            int64_t l_829 = 0xC441B05D465E4253LL;
            int32_t l_1782 = (-1L);
            int16_t l_1853 = 9L;
            int64_t l_1875 = (-1L);
            int32_t l_1876 = 0x99043086L;
            int32_t l_1878 = 1L;
            int32_t l_1879 = (-1L);
            int16_t *l_1891 = (void*)0;
            int16_t *l_1892 = (void*)0;
            int16_t *l_1893 = (void*)0;
            int16_t *l_1894[7][7][5] = {{{&g_1159.f3,&g_1496,&g_1496,&g_1159.f3,(void*)0},{&l_1840.f3,&g_32.f3,&g_32.f3,&l_1840.f3,&g_1161.f3},{&g_1159.f3,&g_1496,&g_1496,&g_1159.f3,(void*)0},{&l_1840.f3,&g_32.f3,&g_32.f3,&l_1840.f3,&g_1161.f3},{&g_1159.f3,&g_1496,&g_1496,&g_1159.f3,(void*)0},{&l_1840.f3,&g_32.f3,&g_32.f3,&l_1840.f3,&g_1161.f3},{&g_1159.f3,&g_1496,&g_1496,&g_1159.f3,(void*)0}},{{&l_1840.f3,&g_32.f3,&g_32.f3,&l_1840.f3,&g_1161.f3},{&g_1159.f3,&g_1496,&g_1496,&g_1159.f3,(void*)0},{&l_1840.f3,&g_32.f3,&g_32.f3,&l_1840.f3,&g_1161.f3},{&g_1159.f3,&g_1159.f3,&g_1159.f3,(void*)0,&g_32.f3},{&g_448.f3,&l_1840.f3,&l_1840.f3,&g_448.f3,(void*)0},{(void*)0,&g_1159.f3,&g_1159.f3,(void*)0,&g_32.f3},{&g_448.f3,&l_1840.f3,&l_1840.f3,&g_448.f3,(void*)0}},{{(void*)0,&g_1159.f3,&g_1159.f3,(void*)0,&g_32.f3},{&g_448.f3,&l_1840.f3,&l_1840.f3,&g_448.f3,(void*)0},{(void*)0,&g_1159.f3,&g_1159.f3,(void*)0,&g_32.f3},{&g_448.f3,&l_1840.f3,&l_1840.f3,&g_448.f3,(void*)0},{(void*)0,&g_1159.f3,&g_1159.f3,(void*)0,&g_32.f3},{&g_448.f3,&l_1840.f3,&l_1840.f3,&g_448.f3,(void*)0},{(void*)0,&g_1159.f3,&g_1159.f3,(void*)0,&g_32.f3}},{{&g_448.f3,&l_1840.f3,&l_1840.f3,&g_448.f3,(void*)0},{(void*)0,&g_1159.f3,&g_1159.f3,(void*)0,&g_32.f3},{&g_448.f3,&l_1840.f3,&l_1840.f3,&g_448.f3,(void*)0},{(void*)0,&g_1159.f3,&g_1159.f3,(void*)0,&g_32.f3},{&g_448.f3,&l_1840.f3,&l_1840.f3,&g_448.f3,(void*)0},{(void*)0,&g_1159.f3,&g_1159.f3,(void*)0,&g_32.f3},{&g_448.f3,&l_1840.f3,&l_1840.f3,&g_448.f3,(void*)0}},{{(void*)0,&g_1159.f3,&g_1159.f3,(void*)0,&g_32.f3},{&g_448.f3,&l_1840.f3,&l_1840.f3,&g_448.f3,(void*)0},{(void*)0,&g_1159.f3,&g_1159.f3,(void*)0,&g_32.f3},{&g_448.f3,&l_1840.f3,&l_1840.f3,&g_448.f3,(void*)0},{(void*)0,&g_1159.f3,&g_1159.f3,(void*)0,&g_32.f3},{&g_448.f3,&l_1840.f3,&l_1840.f3,&g_448.f3,(void*)0},{(void*)0,&g_1159.f3,&g_1159.f3,(void*)0,&g_32.f3}},{{&g_448.f3,&l_1840.f3,&l_1840.f3,&g_448.f3,(void*)0},{(void*)0,&g_1159.f3,&g_1159.f3,(void*)0,&g_32.f3},{&g_448.f3,&l_1840.f3,&l_1840.f3,&g_448.f3,(void*)0},{(void*)0,&g_1159.f3,&g_1159.f3,(void*)0,&g_32.f3},{&g_448.f3,&l_1840.f3,&l_1840.f3,&g_448.f3,(void*)0},{(void*)0,&g_1159.f3,&g_1159.f3,(void*)0,&g_32.f3},{&g_448.f3,&l_1840.f3,&l_1840.f3,&g_448.f3,(void*)0}},{{(void*)0,&g_1159.f3,&g_1159.f3,(void*)0,&g_32.f3},{&g_448.f3,&l_1840.f3,&l_1840.f3,&g_448.f3,(void*)0},{(void*)0,&g_1159.f3,&g_1159.f3,(void*)0,&g_32.f3},{&g_448.f3,&l_1840.f3,&l_1840.f3,&g_448.f3,(void*)0},{(void*)0,&g_1159.f3,&g_1159.f3,(void*)0,&g_32.f3},{&g_448.f3,&l_1840.f3,&l_1840.f3,&g_448.f3,(void*)0},{(void*)0,&g_1159.f3,(void*)0,(void*)0,&g_1496}}};
            int32_t *l_1895 = &l_1873;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_12[i] = (-1L);
        }
    }
    return l_1776[0];
}



static int32_t * func_8(uint32_t  p_9, uint8_t  p_10, int16_t  p_11)
{ 
    uint32_t **l_1091 = &g_460[0][1];
    uint32_t ***l_1092[1][1][1];
    int32_t l_1095 = 0xD02A5269L;
    int32_t **l_1101 = (void*)0;
    int32_t ***l_1100 = &l_1101;
    int8_t *l_1109 = &g_944.f0;
    int8_t l_1117 = 0L;
    uint32_t l_1118 = 4294967295UL;
    struct S0 **l_1128[2][7] = {{&g_943[0][4][3],&g_943[0][4][3],&g_943[0][4][3],&g_943[0][4][3],&g_943[0][4][3],&g_943[0][2][2],&g_943[0][4][3]},{&g_943[0][4][3],&g_943[0][4][3],&g_943[0][4][3],&g_943[0][4][3],&g_943[0][4][3],&g_943[0][2][2],&g_943[0][4][3]}};
    union U1 *l_1158 = &g_1159;
    int32_t l_1173 = 0x230F4EEFL;
    int32_t l_1174 = 3L;
    int32_t l_1176 = 0xB036EE13L;
    int32_t l_1180 = 1L;
    int32_t l_1182[3][6] = {{1L,1L,0xB8C74900L,0xB8C74900L,1L,1L},{1L,0xB8C74900L,0xB8C74900L,1L,1L,0xB8C74900L},{1L,1L,0xB8C74900L,0xB8C74900L,1L,1L}};
    uint16_t l_1197 = 0xD362L;
    int16_t l_1304 = 0L;
    int32_t ****l_1318 = &l_1100;
    int64_t *l_1331 = &g_148;
    int32_t *l_1508 = &g_2[3];
    uint64_t l_1532 = 0x43E9974625683471LL;
    const int32_t *l_1566[6];
    const uint32_t *l_1588[4] = {&g_737[0],&g_737[0],&g_737[0],&g_737[0]};
    const uint32_t **l_1587 = &l_1588[0];
    int16_t l_1589 = 0x5197L;
    uint16_t l_1592 = 65528UL;
    const int8_t l_1662 = 0L;
    uint32_t l_1741 = 0xE073451DL;
    int32_t *l_1754 = &g_96[1];
    struct S0 l_1757 = {0xF6L,4294967288UL,-1L,1L,65529UL,65528UL};
    int64_t l_1759 = 0L;
    int32_t l_1763 = 0x2DC367A4L;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_1092[i][j][k] = (void*)0;
        }
    }
    for (i = 0; i < 6; i++)
        l_1566[i] = &l_1176;
lbl_1595:
    (*g_188) |= ((*g_289) | (((((l_1091 = l_1091) == (g_1093 = &g_460[0][1])) , (-7L)) || (~(65535UL <= ((0UL < g_855) & l_1095)))) == (-4L)));
    if ((safe_rshift_func_uint16_t_u_s((((safe_mul_func_int8_t_s_s(((l_1100 == (((safe_unary_minus_func_int32_t_s(((safe_sub_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(((l_1109 != (void*)0) == (safe_mod_func_uint64_t_u_u((+(safe_add_func_uint64_t_u_u((((safe_rshift_func_int8_t_s_s(p_11, ((void*)0 == &l_1091))) != 9UL) && 0x1711E7EBL), 0x4A3BBB6D561D9170LL))), l_1117))), 251UL)), 7)) | (**g_174)), p_9)) , l_1117))) , 0UL) , (void*)0)) & 1L), (*g_53))) == l_1118) || p_10), p_9)))
    { 
        const struct S0 **l_1125 = &g_185;
        int32_t l_1131 = 0x8C39835DL;
        int16_t l_1167[3];
        int32_t l_1172 = 4L;
        int32_t l_1181 = 0x50CCF4ADL;
        int32_t l_1183[2];
        union U1 l_1242 = {18446744073709551611UL};
        uint16_t l_1323 = 0UL;
        int16_t l_1351 = 0x92EFL;
        uint16_t l_1354[6][7][6] = {{{0x7B09L,0x42D3L,1UL,65528UL,65535UL,1UL},{65528UL,65535UL,1UL,0xAEE0L,1UL,1UL},{65528UL,0x42D3L,0x42D3L,65528UL,1UL,1UL},{0x7B09L,65535UL,0x42D3L,0xAEE0L,65535UL,1UL},{0x7B09L,0x42D3L,1UL,65528UL,65535UL,1UL},{65528UL,65535UL,1UL,0xAEE0L,1UL,1UL},{65528UL,0x42D3L,0x42D3L,65528UL,1UL,1UL}},{{0x7B09L,65535UL,0x42D3L,0xAEE0L,65535UL,1UL},{0x7B09L,0x42D3L,1UL,65528UL,65535UL,1UL},{65528UL,65535UL,1UL,0xAEE0L,1UL,1UL},{65528UL,0x42D3L,0x42D3L,65528UL,1UL,1UL},{0x7B09L,65535UL,0x42D3L,0xAEE0L,65535UL,1UL},{0x7B09L,0x42D3L,1UL,65528UL,65535UL,1UL},{65528UL,65535UL,1UL,0xAEE0L,1UL,1UL}},{{65528UL,0x42D3L,0x42D3L,65528UL,1UL,1UL},{0x7B09L,65535UL,0x42D3L,0xAEE0L,65535UL,1UL},{0x7B09L,0x42D3L,1UL,65528UL,65535UL,1UL},{65528UL,65535UL,1UL,0xAEE0L,1UL,1UL},{65528UL,0x42D3L,0x42D3L,65528UL,1UL,1UL},{0x7B09L,65535UL,0x42D3L,0xAEE0L,65535UL,1UL},{0x7B09L,0x42D3L,1UL,65528UL,65535UL,1UL}},{{65528UL,65535UL,1UL,0xAEE0L,1UL,1UL},{65528UL,0x42D3L,0x42D3L,65528UL,1UL,1UL},{0x7B09L,65535UL,0x42D3L,0xAEE0L,65535UL,1UL},{0x7B09L,0x42D3L,1UL,65528UL,65535UL,1UL},{65528UL,65535UL,0x714CL,0x42D3L,0x8AF2L,0x8AF2L},{65535UL,65535UL,65535UL,65535UL,0x8AF2L,0x714CL},{1UL,0x3EB0L,65535UL,0x42D3L,0x3EB0L,0x8AF2L}},{{1UL,65535UL,0x714CL,65535UL,0x3EB0L,0x714CL},{65535UL,0x3EB0L,0x714CL,0x42D3L,0x8AF2L,0x8AF2L},{65535UL,65535UL,65535UL,65535UL,0x8AF2L,0x714CL},{1UL,0x3EB0L,65535UL,0x42D3L,0x3EB0L,0x8AF2L},{1UL,65535UL,0x714CL,65535UL,0x3EB0L,0x714CL},{65535UL,0x3EB0L,0x714CL,0x42D3L,0x8AF2L,0x8AF2L},{65535UL,65535UL,65535UL,65535UL,0x8AF2L,0x714CL}},{{1UL,0x3EB0L,65535UL,0x42D3L,0x3EB0L,0x8AF2L},{1UL,65535UL,0x714CL,65535UL,0x3EB0L,0x714CL},{65535UL,0x3EB0L,0x714CL,0x42D3L,0x8AF2L,0x8AF2L},{65535UL,65535UL,65535UL,65535UL,0x8AF2L,0x714CL},{1UL,0x3EB0L,65535UL,0x42D3L,0x3EB0L,0x8AF2L},{1UL,65535UL,0x714CL,65535UL,0x3EB0L,0x714CL},{65535UL,0x3EB0L,0x714CL,0x42D3L,0x8AF2L,0x8AF2L}}};
        uint32_t l_1368[4];
        int32_t *l_1371[3][6][7];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1167[i] = 1L;
        for (i = 0; i < 2; i++)
            l_1183[i] = 1L;
        for (i = 0; i < 4; i++)
            l_1368[i] = 0xE68B5049L;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 6; j++)
            {
                for (k = 0; k < 7; k++)
                    l_1371[i][j][k] = &l_1183[1];
            }
        }
        if ((safe_lshift_func_uint8_t_u_s((*g_53), 4)))
        { 
            int8_t l_1127 = 0xEBL;
            uint64_t *l_1143 = &g_1035;
            union U1 *l_1155 = &g_448;
            int32_t *l_1168 = (void*)0;
            int32_t l_1175 = 0xB0BE93F1L;
            int32_t l_1177 = (-5L);
            int32_t l_1178 = 0xDF291728L;
            int32_t l_1179[1];
            int16_t l_1192 = 0x05B1L;
            int8_t l_1193 = 0x1DL;
            struct S0 *l_1236[7][2][7] = {{{&g_944,&g_944,(void*)0,(void*)0,&g_944,&g_944,&g_944},{(void*)0,&g_944,&g_944,(void*)0,&g_944,(void*)0,&g_944}},{{&g_944,&g_944,&g_944,(void*)0,&g_944,&g_944,&g_944},{&g_944,&g_944,(void*)0,&g_944,&g_944,&g_944,&g_944}},{{(void*)0,&g_944,(void*)0,&g_944,&g_944,(void*)0,&g_944},{&g_944,&g_944,(void*)0,(void*)0,&g_944,&g_944,&g_944}},{{(void*)0,&g_944,&g_944,(void*)0,&g_944,(void*)0,&g_944},{&g_944,&g_944,&g_944,(void*)0,&g_944,&g_944,&g_944}},{{&g_944,&g_944,(void*)0,&g_944,&g_944,&g_944,&g_944},{(void*)0,&g_944,(void*)0,&g_944,&g_944,(void*)0,&g_944}},{{&g_944,&g_944,(void*)0,(void*)0,&g_944,&g_944,&g_944},{(void*)0,&g_944,&g_944,(void*)0,&g_944,(void*)0,&g_944}},{{&g_944,&g_944,&g_944,(void*)0,&g_944,&g_944,&g_944},{&g_944,(void*)0,&g_944,(void*)0,&g_944,&g_944,(void*)0}}};
            struct S0 l_1275 = {0xB1L,1UL,0x3CL,0xFE18F910L,0UL,0x705FL};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_1179[i] = 0x9B357446L;
            for (g_139 = 0; (g_139 > 29); g_139 = safe_add_func_uint16_t_u_u(g_139, 5))
            { 
                union U1 *l_1160 = &g_1161;
                union U1 *l_1162 = &g_1159;
                union U1 *l_1163 = &g_1164[0];
                int32_t l_1170 = 0L;
                int32_t l_1184 = (-1L);
                int32_t l_1185 = 0x83BD4317L;
                int32_t l_1186 = 0x05748BA3L;
                int32_t l_1187 = 8L;
                int32_t l_1188 = 0xC174EE79L;
                int32_t l_1189[6] = {0x10EC4A21L,0x10EC4A21L,(-2L),0x10EC4A21L,0x10EC4A21L,(-2L)};
                int16_t l_1190[6] = {0x953AL,0x953AL,0x404AL,0x953AL,0x953AL,0x404AL};
                int64_t l_1191 = 9L;
                int i;
                if ((safe_lshift_func_uint16_t_u_u((((*g_781) = &l_1117) != (void*)0), 12)))
                { 
                    const struct S0 ***l_1126 = &g_184;
                    uint32_t l_1136 = 0xC01EF918L;
                    int64_t *l_1147 = &g_148;
                    int64_t *l_1152 = (void*)0;
                    int64_t *l_1153 = &g_435;
                    union U1 **l_1156 = (void*)0;
                    union U1 **l_1157[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_1157[i] = &g_447;
                    (*g_188) |= ((((*l_1126) = l_1125) != (l_1127 , l_1128[1][2])) > (safe_div_func_uint8_t_u_u((*g_53), l_1131)));
                    l_1131 = ((safe_lshift_func_int8_t_s_u((**g_781), l_1136)) == (safe_mul_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s((((safe_sub_func_uint8_t_u_u((l_1143 != &g_288), ((((++(*g_854)) <= (((*l_1147) ^= (((*l_1143) = (+p_9)) == 0x459AA5208F1961B5LL)) & (safe_add_func_int64_t_s_s(((((*l_1153) &= (safe_sub_func_int32_t_s_s(0x91E4372BL, 1L))) & g_2[2]) , 0x44ECAC9E2E5D52B8LL), l_1127)))) < g_14) && (-7L)))) > 0x3B5F2452L) != p_10), l_1131)) , 0UL), (-3L))));
                    l_1167[1] ^= ((((safe_unary_minus_func_int8_t_s(p_11)) >= ((l_1160 = (l_1158 = l_1155)) != l_1162)) | (((((((((l_1163 = &g_448) != l_1162) , ((safe_mul_func_uint16_t_u_u((**g_174), g_737[0])) == 0x1AA7L)) ^ 18446744073709551611UL) <= p_9) , p_11) , p_9) < p_11) || 1L)) | g_448.f0);
                }
                else
                { 
                    int32_t **l_1169 = &l_1168;
                    int32_t *l_1171[2][6] = {{&g_2[0],&g_2[0],&l_1131,&g_2[0],&g_2[0],&l_1131},{&g_2[0],&g_2[0],&l_1131,&g_2[0],&g_2[0],&l_1131}};
                    uint32_t l_1194 = 1UL;
                    int i, j;
                    (*l_1169) = l_1168;
                    (*g_188) &= l_1170;
                    ++l_1194;
                    (*l_1169) = &l_1177;
                }
            }
            l_1197++;
            if ((g_1202 | (((*g_289) = (*g_289)) > (1L >= 18446744073709551615UL))))
            { 
                struct S0 *l_1235 = &g_944;
                int32_t l_1255 = (-9L);
                int32_t l_1256 = 1L;
                l_1178 |= ((safe_rshift_func_int8_t_s_u(0L, 4)) , p_10);
                for (g_152 = (-18); (g_152 != (-6)); ++g_152)
                { 
                    int32_t l_1216 = 0xB99EFDFFL;
                    uint8_t *l_1227 = &g_109[2][2];
                    l_1216 = (((safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_int32_t_s(0L)), (safe_add_func_int8_t_s_s((((*g_188) ^= (safe_rshift_func_uint8_t_u_u(((*g_53) ^= l_1216), 0))) , ((**g_781) |= ((*g_780) == (*g_780)))), (5L && (safe_sub_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u((((*l_1227) = (safe_mul_func_uint8_t_u_u(p_10, (safe_mod_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((g_32 , (-5L)), p_9)), p_11))))) > 0x88L), (*g_409))), l_1183[0]))))))) && g_186.f3), 246UL)) == l_1131) == 0x1BL);
                    if (p_11)
                        break;
                }
                (*g_188) ^= (p_9 != ((((*g_941) = l_1128[0][3]) == l_1125) && (safe_add_func_int16_t_s_s((safe_add_func_int16_t_s_s((p_11 <= (safe_mod_func_int8_t_s_s((((~((l_1235 == ((**g_941) = l_1236[0][0][2])) & ((safe_rshift_func_int16_t_s_s(0x0844L, p_9)) < 0xB340L))) || 0x11D025C101CFB27BLL) | p_10), p_10))), p_11)), g_90))));
                l_1255 = ((((!(safe_mod_func_int64_t_s_s((l_1242 , (safe_unary_minus_func_int32_t_s(p_11))), 0x60ABE837410B5D03LL))) <= (*g_289)) , (((0x40BA7DA6L > (l_1256 |= (~(safe_rshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(((*g_53) <= (safe_sub_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u((((0x89A2B007L >= 7UL) > p_11) >= p_10), (*g_175))) , (*g_53)), 0x2CL)) != 4294967295UL), l_1255))), l_1255)), 1))))) < 0x044E0623DFB69441LL) ^ p_10)) > 0xF39D61F27CDD208BLL);
            }
            else
            { 
                int32_t *l_1267 = &l_1182[0][1];
                struct S0 l_1274 = {0x95L,9UL,0x07L,0xCC303781L,0UL,0x60B8L};
                uint32_t l_1280 = 1UL;
                if ((safe_unary_minus_func_int64_t_s(g_1159.f1)))
                { 
                    int32_t **l_1258 = &l_1168;
                    int16_t *l_1266 = &l_1167[1];
                    (*l_1258) = &l_1177;
                    l_1267 = ((0xD0L != ((**l_1125) , ((*g_53) = (safe_mul_func_uint8_t_u_u(((safe_div_func_int64_t_s_s((((((0xBBL && ((**l_1258) , ((+0L) <= ((*l_1266) = (safe_rshift_func_int8_t_s_s((**l_1258), (g_37 <= p_9))))))) < (*g_289)) >= (-10L)) >= p_10) || g_448.f2), g_288)) < p_10), (***g_780)))))) , &l_1177);
                }
                else
                { 
                    int32_t *l_1268 = (void*)0;
                    return l_1268;
                }
                (*g_188) = (safe_lshift_func_uint8_t_u_s((0x8C07L ^ (**g_174)), 3));
                for (g_944.f4 = 1; (g_944.f4 != 49); g_944.f4 = safe_add_func_uint16_t_u_u(g_944.f4, 2))
                { 
                    struct S0 l_1273 = {0x86L,4294967295UL,0xFBL,0L,0xCF74L,0x77B1L};
                    l_1275 = (l_1274 = l_1273);
                    if (p_10)
                        continue;
                }
                (*l_1267) = (safe_mul_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u(((**g_174) = l_1280), l_1172)) , ((*l_1155) , ((*g_409) = ((**g_174) == (l_1158 != (l_1274 , l_1155)))))) || 1UL), 2L));
            }
        }
        else
        { 
            int32_t l_1289 = 0x7E45B26FL;
            union U1 **l_1290 = &l_1158;
            uint32_t ***l_1302 = &g_408[3];
            uint64_t *l_1303[3][7] = {{&g_421,&g_421,&g_421,&g_421,&g_421,&g_421,&g_421},{&g_288,(void*)0,&g_288,(void*)0,&g_288,(void*)0,&g_288},{&g_421,&g_421,&g_421,&g_421,&g_421,&g_421,&g_421}};
            int32_t * const ***l_1317 = (void*)0;
            int16_t *l_1324 = &g_448.f3;
            uint8_t *l_1326 = (void*)0;
            uint8_t *l_1327 = &g_109[0][2];
            const int64_t *l_1329[5];
            const int64_t **l_1328 = &l_1329[0];
            struct S0 l_1334 = {0x94L,0UL,-10L,0x46528F4AL,0xC06FL,0x1063L};
            int32_t l_1343[5][7] = {{0xFE2ADFF5L,0x50E11F95L,0xFE2ADFF5L,0xFE18ECE7L,0xFE18ECE7L,0xFE2ADFF5L,0x50E11F95L},{0xFE18ECE7L,0x50E11F95L,0x67317640L,0x67317640L,0x50E11F95L,0xFE18ECE7L,0x50E11F95L},{0xFE2ADFF5L,0xFE18ECE7L,0xFE18ECE7L,0xFE2ADFF5L,0x50E11F95L,0xFE2ADFF5L,0xFE18ECE7L},{0xAB1C4165L,0xAB1C4165L,0xFE18ECE7L,0x67317640L,0xFE18ECE7L,0xAB1C4165L,0xAB1C4165L},{0xAB1C4165L,0xFE18ECE7L,0x67317640L,0xFE18ECE7L,0xAB1C4165L,0xAB1C4165L,0xFE18ECE7L}};
            uint32_t l_1346 = 7UL;
            int32_t l_1350 = 6L;
            int32_t l_1352 = 0xDBE61F13L;
            int32_t l_1353 = 8L;
            int32_t l_1357 = 0L;
            uint32_t l_1358 = 0x63918CCBL;
            int i, j;
            for (i = 0; i < 5; i++)
                l_1329[i] = &g_1330;
            (*g_188) ^= ((safe_lshift_func_uint8_t_u_s(((*g_53) <= (safe_rshift_func_int16_t_s_s(((((safe_mul_func_uint8_t_u_u((*g_53), (safe_add_func_int8_t_s_s(0x63L, (*g_53))))) , 2L) <= (l_1289 <= (l_1289 , l_1167[1]))) || l_1289), g_737[2]))), p_10)) != l_1181);
            (*l_1290) = (p_10 , &g_32);
            l_1183[0] ^= (safe_rshift_func_int16_t_s_u((l_1242 , (safe_mod_func_int16_t_s_s(1L, ((((((*g_289) & ((g_421 = (safe_add_func_uint8_t_u_u(0x0DL, ((safe_unary_minus_func_int16_t_s((0x95FE9D48B55F1A77LL <= (safe_sub_func_int8_t_s_s(l_1242.f2, (safe_lshift_func_int8_t_s_s((((*l_1302) = &g_409) == (void*)0), p_9))))))) , 9UL)))) & g_213[1][2])) | l_1304) == (*g_175)) > l_1242.f3) ^ p_10)))), 4));
            if ((safe_rshift_func_uint8_t_u_s((((*l_1328) = (((safe_lshift_func_int8_t_s_u((safe_add_func_uint64_t_u_u((*g_289), ((void*)0 != &g_1035))), ((*l_1327) = ((safe_mul_func_uint8_t_u_u(((*g_53) |= (safe_mul_func_int8_t_s_s(((0x13FA8CFBL | (safe_mul_func_int16_t_s_s(((l_1317 == l_1318) >= ((*l_1324) = ((safe_mul_func_int16_t_s_s(((safe_div_func_uint64_t_u_u((0x8D06A197DEFCD0E4LL != 0xD2C13AD84BD97D03LL), (*g_289))) != l_1323), l_1172)) | 0x58004C8E4F3AF8F7LL))), (-2L)))) || g_1325[1]), 255UL))), p_9)) ^ 0x5D99BF8AD894BE9CLL)))) < g_75) , (void*)0)) == l_1331), p_10)))
            { 
                int64_t l_1338 = 0x041B61066ADACB28LL;
                int32_t l_1342 = 1L;
                int32_t l_1344 = (-1L);
                int32_t l_1345[1];
                struct S0 l_1361 = {4L,1UL,1L,0x9D2A5A1CL,5UL,65527UL};
                int i;
                for (i = 0; i < 1; i++)
                    l_1345[i] = (-9L);
                for (l_1174 = 29; (l_1174 > 6); l_1174 = safe_sub_func_int32_t_s_s(l_1174, 4))
                { 
                    struct S0 l_1335 = {6L,0UL,-1L,1L,0x26F2L,0UL};
                    l_1335 = l_1334;
                    return &g_5;
                }
                for (g_148 = 0; (g_148 != (-13)); g_148--)
                { 
                    int32_t *l_1339 = &l_1176;
                    int32_t *l_1340 = &l_1180;
                    int32_t *l_1341[6];
                    int64_t l_1349 = 0xDC680E181B188DE6LL;
                    int i;
                    for (i = 0; i < 6; i++)
                        l_1341[i] = &l_1174;
                    l_1346--;
                    --l_1354[2][0][1];
                    ++l_1358;
                    l_1361 = l_1361;
                    if (p_10)
                        break;
                }
            }
            else
            { 
                int8_t l_1362 = (-6L);
                (*g_188) = l_1362;
                for (g_32.f0 = 0; (g_32.f0 <= 2); g_32.f0 += 1)
                { 
                    int32_t *l_1363 = (void*)0;
                    int32_t *l_1364 = &l_1182[2][4];
                    int32_t *l_1365 = &l_1350;
                    int32_t *l_1366 = (void*)0;
                    int32_t *l_1367[6] = {&l_1095,&g_5,&l_1095,&l_1095,&g_5,&l_1095};
                    int i;
                    ++l_1368[3];
                }
            }
        }
        l_1371[0][5][6] = &l_1172;
        return &g_213[1][2];
    }
    else
    { 
        uint32_t l_1378 = 4UL;
        uint32_t **l_1387 = &g_460[3][1];
        uint8_t l_1402[3];
        int32_t *****l_1407 = &l_1318;
        uint8_t l_1430 = 0x44L;
        int32_t l_1446 = 0L;
        int64_t **l_1472 = (void*)0;
        union U1 l_1476 = {0x3635C606L};
        struct S0 l_1480[7][3][4] = {{{{0xC8L,2UL,0x1BL,0x36430375L,0x789EL,0x78BEL},{-1L,8UL,0x6AL,1L,65530UL,0UL},{-1L,4294967295UL,-1L,1L,0x406FL,0x0632L},{0x02L,4294967287UL,0xACL,0x637FD767L,0x69FFL,1UL}},{{0L,0x7F3D6A2EL,0xB9L,4L,65532UL,0x1075L},{-1L,8UL,0x6AL,1L,65530UL,0UL},{0x46L,0x51E57DCCL,0x92L,-10L,65534UL,0x425CL},{-1L,0UL,3L,1L,0x5AB7L,0x11CCL}},{{-1L,8UL,0x6AL,1L,65530UL,0UL},{1L,0x7861AF5BL,0x38L,0L,0xAB61L,0xF143L},{0L,0x7F3D6A2EL,0xB9L,4L,65532UL,0x1075L},{0x9BL,0x3ED682BAL,-10L,0x5BAF6370L,0x3E50L,0x5103L}}},{{{0xA8L,4294967292UL,0xE8L,0x5651A398L,3UL,0x9423L},{0xF0L,0UL,0x02L,-1L,0x4756L,65526UL},{0xA7L,0xB98EA04BL,6L,-1L,6UL,0UL},{0xF0L,0UL,0x02L,-1L,0x4756L,65526UL}},{{0x00L,6UL,0xAFL,0x63F00988L,0xBD57L,0x5B22L},{0x47L,3UL,0x51L,7L,1UL,0xEC71L},{-1L,0UL,3L,1L,0x5AB7L,0x11CCL},{-10L,0x6C38B618L,0x49L,5L,0UL,65535UL}},{{0xC3L,0x616014C5L,0x4BL,6L,0xDD3FL,0x76D5L},{0x02L,4294967287UL,0xACL,0x637FD767L,0x69FFL,1UL},{0x5CL,4UL,-2L,-1L,1UL,1UL},{0xC8L,2UL,0x1BL,0x36430375L,0x789EL,0x78BEL}}},{{{0xA7L,0xB98EA04BL,6L,-1L,6UL,0UL},{-1L,4294967295UL,-1L,1L,0x406FL,0x0632L},{1L,0xF7738054L,0x04L,0x190631F7L,1UL,1UL},{0L,0x7F3D6A2EL,0xB9L,4L,65532UL,0x1075L}},{{0xA7L,0xB98EA04BL,6L,-1L,6UL,0UL},{0x46L,0x51E57DCCL,0x92L,-10L,65534UL,0x425CL},{0x5CL,4UL,-2L,-1L,1UL,1UL},{-1L,8UL,0x6AL,1L,65530UL,0UL}},{{0xC3L,0x616014C5L,0x4BL,6L,0xDD3FL,0x76D5L},{0L,0x7F3D6A2EL,0xB9L,4L,65532UL,0x1075L},{-1L,0UL,3L,1L,0x5AB7L,0x11CCL},{0xA8L,4294967292UL,0xE8L,0x5651A398L,3UL,0x9423L}}},{{{0x00L,6UL,0xAFL,0x63F00988L,0xBD57L,0x5B22L},{0xA7L,0xB98EA04BL,6L,-1L,6UL,0UL},{0xA7L,0xB98EA04BL,6L,-1L,6UL,0UL},{0x00L,6UL,0xAFL,0x63F00988L,0xBD57L,0x5B22L}},{{0xA8L,4294967292UL,0xE8L,0x5651A398L,3UL,0x9423L},{-1L,0UL,3L,1L,0x5AB7L,0x11CCL},{0L,0x7F3D6A2EL,0xB9L,4L,65532UL,0x1075L},{0xC3L,0x616014C5L,0x4BL,6L,0xDD3FL,0x76D5L}},{{-1L,8UL,0x6AL,1L,65530UL,0UL},{0x5CL,4UL,-2L,-1L,1UL,1UL},{0x46L,0x51E57DCCL,0x92L,-10L,65534UL,0x425CL},{0xA7L,0xB98EA04BL,6L,-1L,6UL,0UL}}},{{{0L,0x7F3D6A2EL,0xB9L,4L,65532UL,0x1075L},{1L,0xF7738054L,0x04L,0x190631F7L,1UL,1UL},{-1L,4294967295UL,-1L,1L,0x406FL,0x0632L},{0xA7L,0xB98EA04BL,6L,-1L,6UL,0UL}},{{0xC8L,2UL,0x1BL,0x36430375L,0x789EL,0x78BEL},{0x5CL,4UL,-2L,-1L,1UL,1UL},{0x02L,4294967287UL,0xACL,0x637FD767L,0x69FFL,1UL},{0xC3L,0x616014C5L,0x4BL,6L,0xDD3FL,0x76D5L}},{{-10L,0x6C38B618L,0x49L,5L,0UL,65535UL},{-1L,0UL,3L,1L,0x5AB7L,0x11CCL},{0x47L,3UL,0x51L,7L,1UL,0xEC71L},{0x00L,6UL,0xAFL,0x63F00988L,0xBD57L,0x5B22L}}},{{{0xF0L,0UL,0x02L,-1L,0x4756L,65526UL},{0xA7L,0xB98EA04BL,6L,-1L,6UL,0UL},{0xF0L,0UL,0x02L,-1L,0x4756L,65526UL},{0xA8L,4294967292UL,0xE8L,0x5651A398L,3UL,0x9423L}},{{0x9BL,0x3ED682BAL,-10L,0x5BAF6370L,0x3E50L,0x5103L},{0L,0x7F3D6A2EL,0xB9L,4L,65532UL,0x1075L},{1L,0x7861AF5BL,0x38L,0L,0xAB61L,0xF143L},{-1L,8UL,0x6AL,1L,65530UL,0UL}},{{-1L,0UL,3L,1L,0x5AB7L,0x11CCL},{0x46L,0x51E57DCCL,0x92L,-10L,65534UL,0x425CL},{-1L,8UL,0x6AL,1L,65530UL,0UL},{0L,0x7F3D6A2EL,0xB9L,4L,65532UL,0x1075L}}},{{{0x02L,4294967287UL,0xACL,0x637FD767L,0x69FFL,1UL},{-1L,4294967295UL,-1L,1L,0x406FL,0x0632L},{-1L,8UL,0x6AL,1L,65530UL,0UL},{0xC8L,2UL,0x1BL,0x36430375L,0x789EL,0x78BEL}},{{-1L,0UL,3L,1L,0x5AB7L,0x11CCL},{0x02L,4294967287UL,0xACL,0x637FD767L,0x69FFL,1UL},{1L,0x7861AF5BL,0x38L,0L,0xAB61L,0xF143L},{-10L,0x6C38B618L,0x49L,5L,0UL,65535UL}},{{0x9BL,0x3ED682BAL,-10L,0x5BAF6370L,0x3E50L,0x5103L},{0x47L,3UL,0x51L,7L,1UL,0xEC71L},{0xF0L,0UL,0x02L,-1L,0x4756L,65526UL},{0xF0L,0UL,0x02L,-1L,0x4756L,65526UL}}}};
        const uint16_t l_1539 = 0xE099L;
        uint32_t l_1617 = 4294967286UL;
        int32_t *l_1742 = &l_1180;
        int32_t *l_1743 = &l_1174;
        int32_t *l_1744[5][1][1] = {{{&g_213[1][2]}},{{&l_1180}},{{&g_213[1][2]}},{{&l_1180}},{{&g_213[1][2]}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1402[i] = 0xEFL;
        if ((safe_sub_func_int32_t_s_s((-1L), ((safe_mod_func_int64_t_s_s((((safe_div_func_uint64_t_u_u(l_1378, (safe_rshift_func_int8_t_s_u(p_9, ((1L == ((safe_div_func_uint32_t_u_u(((safe_add_func_int32_t_s_s(((void*)0 == l_1387), 0xBD4D2EB2L)) == p_11), p_11)) == 0xAEF8L)) ^ 0UL))))) ^ p_9) >= p_11), (*g_289))) && (*g_289)))))
        { 
            int32_t l_1399 = (-3L);
            int32_t l_1400 = 0xB92A42D4L;
            int32_t l_1401 = 0xEC864415L;
            int32_t l_1455 = (-7L);
lbl_1509:
            for (g_32.f2 = 12; (g_32.f2 <= 17); g_32.f2++)
            { 
                int32_t *l_1390 = &l_1180;
                int32_t *l_1391 = &g_213[0][0];
                int32_t *l_1392 = (void*)0;
                int32_t l_1393 = 0xB7656228L;
                int32_t *l_1394 = &l_1095;
                int32_t l_1395 = 0xA1E12F81L;
                int32_t *l_1396 = &g_213[1][2];
                int32_t *l_1397 = &g_213[1][2];
                int32_t *l_1398[1];
                struct S0 l_1422[1] = {{-2L,1UL,0x28L,-1L,0x2AF4L,0xB0D4L}};
                int16_t *l_1429 = &g_1161.f3;
                int i;
                for (i = 0; i < 1; i++)
                    l_1398[i] = &l_1395;
                l_1402[1]--;
                (*l_1396) |= ((l_1331 == l_1331) != (-1L));
                (*l_1396) ^= ((safe_add_func_uint32_t_u_u(((g_1408[0] = l_1407) == ((safe_mul_func_int16_t_s_s((p_10 != ((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((l_1400 = p_11), (safe_sub_func_int16_t_s_s(((*l_1429) = (safe_mul_func_int16_t_s_s((l_1422[0] , (safe_rshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_s((((safe_lshift_func_int8_t_s_s(((p_10 , (g_435 = g_54)) && g_944.f3), 4)) | p_11) ^ 4294967290UL), 12)), l_1401))), p_9))), p_11)))), 0x5EL)) ^ l_1401)), g_448.f0)) , &l_1318)), (*g_409))) , 0x64EBD2B8L);
                for (l_1395 = 4; (l_1395 >= 0); l_1395 -= 1)
                { 
                    --l_1430;
                }
            }
            (**g_1410) = &l_1401;
            for (g_1159.f3 = 0; (g_1159.f3 >= 0); g_1159.f3 -= 1)
            { 
                uint32_t **l_1443[4][5][1] = {{{&g_409},{&g_409},{&g_409},{(void*)0},{&g_409}},{{&g_409},{(void*)0},{&g_409},{&g_409},{&g_409}},{{(void*)0},{(void*)0},{(void*)0},{&g_409},{&g_409}},{{&g_409},{&g_409},{&g_409},{&g_409},{&g_409}}};
                int32_t l_1454 = (-1L);
                uint64_t l_1477 = 18446744073709551615UL;
                int32_t *l_1479[2][3] = {{&g_213[0][4],&g_213[0][4],&g_213[0][4]},{(void*)0,(void*)0,(void*)0}};
                int i, j, k;
            }
            if (p_10)
            { 
                int32_t l_1487 = 0x79E63B87L;
                int16_t *l_1499 = &g_1159.f3;
                for (p_9 = 0; (p_9 <= 3); p_9 += 1)
                { 
                    (*g_188) = l_1455;
                }
                for (l_1476.f2 = 0; l_1476.f2 < 6; l_1476.f2 += 1)
                {
                    for (g_150 = 0; g_150 < 2; g_150 += 1)
                    {
                        for (g_944.f4 = 0; g_944.f4 < 4; g_944.f4 += 1)
                        {
                            g_97[l_1476.f2][g_150][g_944.f4] = 0x70L;
                        }
                    }
                }
                l_1480[1][2][3] = l_1480[1][2][3];
                (****g_1409) ^= (1L == ((~(p_10 != (p_10 | ((+((safe_mul_func_uint8_t_u_u((*g_53), l_1400)) < (safe_rshift_func_int16_t_s_u(l_1487, 11)))) || ((**g_174) = 65533UL))))) | (-1L)));
                l_1487 = (p_10 < (((*l_1331) = p_11) < ((safe_lshift_func_int16_t_s_s(((*l_1499) = (safe_sub_func_int16_t_s_s((p_9 == (safe_mul_func_int8_t_s_s((**g_781), (safe_div_func_int32_t_s_s(((*g_188) = (((g_186.f1 >= g_1496) || (safe_rshift_func_int16_t_s_u((-6L), (*g_175)))) & 0UL)), (*g_854)))))), (*g_175)))), 11)) , (*g_289))));
            }
            else
            { 
                int32_t l_1503 = (-1L);
                int32_t *l_1507 = &l_1182[0][0];
                for (g_944.f0 = 3; (g_944.f0 >= 0); g_944.f0 -= 1)
                { 
                    int32_t *l_1506[5][2][5] = {{{&l_1446,&g_213[0][0],&g_75,&l_1446,&l_1401},{&l_1446,&l_1446,&l_1182[0][0],(void*)0,&g_75}},{{(void*)0,&l_1446,&l_1446,&l_1446,&l_1446},{(void*)0,(void*)0,(void*)0,&l_1399,&l_1446}},{{&l_1446,&l_1446,&g_213[0][0],&l_1401,&g_75},{(void*)0,&l_1401,(void*)0,&l_1401,&l_1401}},{{&l_1446,(void*)0,&l_1446,(void*)0,&l_1182[1][3]},{(void*)0,(void*)0,(void*)0,(void*)0,&l_1446}},{{(void*)0,&l_1401,&l_1401,&g_213[0][0],(void*)0},{&l_1446,&l_1446,(void*)0,&l_1446,&l_1446}}};
                    int i, j, k;
                    l_1400 ^= (*g_188);
                    (**g_1411) ^= (((*l_1331) ^= g_96[2]) || l_1399);
                    l_1182[0][0] |= (safe_mod_func_int8_t_s_s(((**g_781) > (((0xB4F1CC2BL != (p_10 >= (((!l_1503) <= (!(((0xC5A2L & (0xA099L == (!0xBC0723F862EBCBB2LL))) | 0x06L) < l_1401))) != (-1L)))) | l_1400) & l_1503)), (*g_53)));
                    return l_1508;
                }
                for (g_152 = 0; (g_152 >= 0); g_152 -= 1)
                { 
                    if (l_1455)
                        goto lbl_1509;
                }
            }
        }
        else
        { 
            const int16_t l_1531 = 0L;
            int32_t l_1563 = 0L;
            int64_t l_1593 = (-1L);
            int8_t l_1612 = (-1L);
            struct S0 l_1615 = {8L,0xA700566DL,0x85L,0x444D6F39L,0xB83CL,0x4CA0L};
            int32_t l_1620[6][3][2] = {{{0L,(-1L)},{0xDDB3DBAEL,0L},{1L,1L}},{{1L,0L},{0xDDB3DBAEL,(-1L)},{0L,(-1L)}},{{0xDDB3DBAEL,0L},{1L,1L},{1L,0L}},{{0xDDB3DBAEL,(-1L)},{0L,(-1L)},{0xDDB3DBAEL,0L}},{{1L,1L},{1L,0L},{0xDDB3DBAEL,(-1L)}},{{0L,(-1L)},{0xDDB3DBAEL,0L},{1L,1L}}};
            union U1 l_1717 = {0x5E8A346FL};
            uint32_t **l_1718 = &g_409;
            int8_t * const *l_1730 = &g_782[1];
            int i, j, k;
lbl_1616:
            for (g_32.f3 = 17; (g_32.f3 > (-28)); --g_32.f3)
            { 
                struct S0 ****l_1512 = (void*)0;
                struct S0 ****l_1513 = (void*)0;
                struct S0 ****l_1514 = &g_941;
                int32_t l_1533 = 1L;
                uint16_t l_1547 = 3UL;
                uint32_t ** const *l_1548[5][2] = {{&g_408[0],&g_408[0]},{&g_408[0],&g_408[0]},{&g_408[0],&g_408[0]},{&g_408[0],&g_408[0]},{&g_408[0],&g_408[0]}};
                int i, j;
                (*l_1514) = &l_1128[1][2];
                (*g_188) ^= p_11;
                if ((safe_add_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s((((safe_mod_func_int8_t_s_s(((safe_div_func_int16_t_s_s(((p_9 || p_11) & 0x4A7CL), (safe_mul_func_int8_t_s_s((((safe_div_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u((((((0x9CB2BA89818C1348LL > (p_11 | ((((*g_289) == (safe_add_func_uint8_t_u_u(l_1531, 0x9DL))) ^ (*g_175)) >= (**g_1411)))) || 0xF7876C4E3DABB3D8LL) ^ l_1532) ^ l_1533) & l_1531), p_9)) , p_9), 0xBCBBL)) , p_9) == p_11), p_9)))) , 6L), l_1533)) >= 0xF7B05E877DC11C65LL) > l_1533), 6)) > p_11), l_1533)))
                { 
                    uint8_t l_1538[7][7] = {{0xB4L,0xB4L,0xB4L,0xB4L,0xB4L,0xB4L,0xB4L},{5UL,5UL,5UL,5UL,5UL,5UL,5UL},{0xB4L,0xB4L,0xB4L,0xB4L,0xB4L,0xB4L,0xB4L},{5UL,5UL,5UL,5UL,5UL,5UL,5UL},{0xB4L,0xB4L,0xB4L,0xB4L,0xB4L,0xB4L,0xB4L},{5UL,5UL,5UL,5UL,5UL,5UL,5UL},{0xB4L,0xB4L,0xB4L,0xB4L,0xB4L,0xB4L,0xB4L}};
                    uint16_t *l_1545 = &g_448.f2;
                    uint16_t **l_1546 = &l_1545;
                    uint64_t **l_1558 = &g_289;
                    uint64_t ***l_1557 = &l_1558;
                    uint64_t ****l_1559 = &l_1557;
                    int32_t **l_1564[1][2];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_1564[i][j] = &l_1508;
                    }
                    l_1180 = (~((safe_add_func_uint64_t_u_u((+l_1538[6][3]), 0xEECC4857EC02ABE9LL)) > ((****g_1409) = 0x6B15A65FL)));
                    (*g_188) = (((l_1539 <= (((*g_53) , (-1L)) , (l_1531 & (!(safe_mod_func_int64_t_s_s((((*g_289) = (p_10 | ((safe_add_func_int64_t_s_s(((*g_174) == ((*l_1546) = l_1545)), g_186.f2)) > 0x852F8BE22DC34CD6LL))) < p_9), l_1533)))))) < l_1547) || g_5);
                    if ((*g_188))
                        continue;
                    (***g_1410) = (((((void*)0 == l_1548[4][1]) , (safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_u(((((((*l_1559) = l_1557) == (((l_1563 &= (!((safe_add_func_int8_t_s_s(l_1533, p_10)) , (*g_289)))) <= 0L) , (void*)0)) >= 1L) , (void*)0) != l_1564[0][1]), 9)) >= g_151[1][0][1]) , 65535UL), g_148)) , p_11), 1)), 0x03886F6DL))) && p_11) && 0x17L);
                }
                else
                { 
                    const int32_t *l_1565 = &l_1174;
                    uint32_t ***l_1583 = (void*)0;
                    uint32_t ***l_1584 = &g_408[3];
                    uint32_t **l_1586 = &g_409;
                    uint32_t ***l_1585 = &l_1586;
                    int16_t *l_1590 = (void*)0;
                    int16_t *l_1591 = &l_1304;
                    uint64_t *l_1594 = &g_421;
                    l_1566[0] = l_1565;
                    (****g_1409) = ((*g_175) , (safe_sub_func_int8_t_s_s(((***g_780) = ((g_1202 = 6UL) , (((((*l_1594) |= ((*l_1508) , (safe_sub_func_int32_t_s_s((((p_10 || 9UL) , (((*l_1331) = (((safe_mod_func_int16_t_s_s(((((safe_add_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((((*l_1591) = (safe_sub_func_int8_t_s_s(p_11, (((*g_289) = ((safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((((*l_1585) = ((*l_1584) = (void*)0)) != l_1587), 5)), (-5L))) || l_1589)) < 0L)))) < (**g_174)), (*l_1565))), g_213[0][4])) && (-1L)) < l_1592) == g_192[0][0][3]), p_9)) , l_1531) >= l_1593)) != p_11)) != (**g_174)), (*l_1565))))) , (**g_174)) == g_361) > 0x14DDEFD02F3D55B1LL))), l_1531)));
                    if (g_448.f0)
                        goto lbl_1595;
                    if (p_10)
                        continue;
                }
                (****g_1409) &= (safe_lshift_func_uint8_t_u_u((0xF91963A2ABE2EE71LL && (l_1533 = 1UL)), 6));
            }
            for (g_75 = 22; (g_75 > 6); g_75 = safe_sub_func_int32_t_s_s(g_75, 1))
            { 
                int32_t l_1606 = 0xD8E80A1BL;
                int32_t l_1609[3];
                int32_t l_1610 = (-1L);
                uint32_t l_1613 = 0x23118710L;
                int i;
                for (i = 0; i < 3; i++)
                    l_1609[i] = (-1L);
                for (g_944.f2 = 0; (g_944.f2 != (-22)); g_944.f2 = safe_sub_func_int16_t_s_s(g_944.f2, 2))
                { 
                    int32_t *l_1611 = &l_1180;
                    struct S0 l_1614[3] = {{-4L,0x38D6DE74L,-7L,0x451FF25AL,0x842CL,0x7392L},{-4L,0x38D6DE74L,-7L,0x451FF25AL,0x842CL,0x7392L},{-4L,0x38D6DE74L,-7L,0x451FF25AL,0x842CL,0x7392L}};
                    int i;
                    l_1615 = ((((safe_rshift_func_uint16_t_u_u(65535UL, (safe_rshift_func_int16_t_s_u((((((0xBEB361B1L <= ((*g_409) = (((**l_1387) = 0x7C958721L) , ((l_1606 && ((((safe_div_func_int32_t_s_s((((*l_1158) , (l_1610 ^= (l_1609[1] = 0x03ACF9F1L))) < ((*l_1611) ^= 1L)), l_1593)) == l_1606) <= l_1612) == 0xB2L)) != 0L)))) , 255UL) != (***g_780)) & l_1613) != l_1593), (**g_174))))) ^ 0x2BB2DFC3C0C61B27LL) || l_1593) , l_1614[1]);
                    if (g_186.f1)
                        goto lbl_1616;
                }
            }
            for (g_148 = 0; (g_148 <= 5); g_148 += 1)
            { 
                const struct S0 l_1630 = {0x5CL,0x46A9A583L,0x03L,0x20B318FAL,2UL,3UL};
                int32_t l_1650 = (-1L);
                int i;
                l_1617--;
            }
            for (g_448.f2 = 0; (g_448.f2 <= 2); g_448.f2 += 1)
            { 
                int8_t l_1673 = 1L;
                int32_t l_1674 = 0L;
                union U1 *l_1675 = (void*)0;
                int32_t *l_1676 = &g_5;
                int32_t * const ****l_1679 = (void*)0;
                int64_t l_1683 = 0x7FAC7CC7EF83A10ELL;
                union U1 **l_1714 = &g_447;
                uint8_t l_1715 = 0xD9L;
                (**g_1410) = (void*)0;
                if (((((((safe_mod_func_uint32_t_u_u(p_10, (safe_div_func_int32_t_s_s((l_1563 |= ((((safe_mod_func_int8_t_s_s((l_1673 ^= ((safe_add_func_int16_t_s_s(0xA707L, (safe_mod_func_int8_t_s_s(((void*)0 != &g_941), 0x08L)))) == (***g_780))), (*g_53))) || (*g_53)) > l_1674) <= l_1615.f5)), l_1674)))) , l_1675) != (void*)0) ^ g_186.f5) & p_10) <= p_9))
                { 
                    return l_1676;
                }
                else
                { 
                    int32_t *l_1684[4] = {&g_75,&g_75,&g_75,&g_75};
                    int i;
                    if ((*l_1676))
                        break;
                    l_1615.f3 = (((**g_781) = p_10) || (((0x07FD1E3AL > (safe_rshift_func_int16_t_s_s((l_1679 != (g_1408[0] = &l_1318)), 13))) != (((g_1159.f2 ^ (*g_175)) , ((((~(safe_lshift_func_uint16_t_u_s(0xA1BFL, 3))) != p_10) , (***l_1407)) == (void*)0)) , l_1683)) <= p_11));
                }
                for (l_1476.f2 = 0; (l_1476.f2 <= 2); l_1476.f2 += 1)
                { 
                    int16_t *l_1687 = (void*)0;
                    int16_t *l_1688[3];
                    uint64_t *l_1698 = &g_1035;
                    union U1 **l_1713 = &l_1158;
                    union U1 ***l_1712[7][6] = {{&l_1713,&l_1713,&l_1713,&l_1713,&l_1713,&l_1713},{&l_1713,&l_1713,&l_1713,&l_1713,&l_1713,&l_1713},{&l_1713,&l_1713,&l_1713,&l_1713,&l_1713,&l_1713},{&l_1713,&l_1713,&l_1713,&l_1713,&l_1713,&l_1713},{&l_1713,&l_1713,&l_1713,&l_1713,&l_1713,&l_1713},{&l_1713,&l_1713,&l_1713,&l_1713,&l_1713,&l_1713},{&l_1713,&l_1713,&l_1713,&l_1713,&l_1713,&l_1713}};
                    int8_t l_1716 = 0x86L;
                    uint32_t l_1721 = 0x51195031L;
                    uint32_t l_1736 = 0xE9813F28L;
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_1688[i] = &l_1304;
                    l_1182[l_1476.f2][g_448.f2] = (safe_lshift_func_int16_t_s_u((p_11 = 1L), ((**g_174) = ((+(safe_lshift_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u((safe_mod_func_uint64_t_u_u(((&g_447 == (void*)0) && ((*l_1698) &= ((*g_289) = ((g_855 & (safe_mod_func_int8_t_s_s((0x8986F102C96BB572LL ^ (0UL > (*g_53))), (-1L)))) && p_9)))), g_1699[3][1])), (*g_175))) > l_1430), 15))) | p_10))));
                    l_1620[4][2][0] = (safe_rshift_func_int8_t_s_s(((safe_add_func_int32_t_s_s((safe_sub_func_uint64_t_u_u(((safe_mul_func_uint16_t_u_u((l_1182[l_1476.f2][g_448.f2] &= p_11), ((safe_lshift_func_uint16_t_u_s(((((0x67L == 0xE9L) , &g_409) == (l_1717 , l_1718)) != 0x82L), 3)) ^ p_10))) & 0L), (*g_289))), 0x51D7946EL)) ^ p_9), l_1716));
                    l_1721 = (safe_rshift_func_int8_t_s_u((0x689BA8983E74C591LL ^ (*g_289)), 1));
                    l_1741 |= ((safe_lshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u(((*g_854)++), (((l_1730 == (void*)0) > (safe_add_func_int32_t_s_s((l_1182[l_1476.f2][g_448.f2] = (safe_unary_minus_func_int32_t_s((p_10 , (safe_add_func_uint16_t_u_u((((((*l_1508) <= ((*g_409) = (p_9 | (l_1736 , (safe_rshift_func_uint8_t_u_s((safe_sub_func_int64_t_s_s(((*l_1676) > (-5L)), (-9L))), l_1721)))))) && 255UL) != p_10) ^ p_9), 0x1918L)))))), l_1593))) <= p_10))) & 0x0BE83E28L), (*g_53))), 2)) & p_9);
                }
            }
        }
        l_1566[0] = &l_1446;
        --g_1745;
    }
    l_1508 = ((*g_1411) = (((**g_184) , ((p_11 > ((safe_lshift_func_uint8_t_u_u((*g_53), 3)) >= ((safe_lshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u((((*l_1754) = 0L) , (safe_add_func_uint16_t_u_u(((l_1757 , (~((*g_175) <= (0x04B7L ^ 0xB5A9L)))) <= p_9), (*g_175)))), 0xBE6601BFL)), p_10)) , l_1759))) > p_9)) , &l_1095));
    (***g_1410) |= 0x44AD9899L;
    for (g_150 = 0; (g_150 < (-20)); g_150--)
    { 
        (**g_1411) ^= (~l_1763);
    }
    return g_1764;
}



static union U1  func_17(int8_t  p_18, uint64_t  p_19, int32_t * p_20, uint8_t * const  p_21, uint8_t  p_22)
{ 
    uint32_t l_844[5];
    uint32_t * const l_851 = (void*)0;
    uint32_t * const *l_850[1];
    uint32_t * const **l_849 = &l_850[0];
    uint32_t * const ***l_848[6][2] = {{&l_849,&l_849},{&l_849,&l_849},{&l_849,&l_849},{&l_849,&l_849},{&l_849,&l_849},{&l_849,&l_849}};
    uint64_t *l_856 = &g_421;
    int32_t l_857 = 0L;
    int32_t l_867 = 1L;
    int32_t l_869 = 0x4909D2D7L;
    int32_t l_876 = (-1L);
    int32_t l_877[2];
    uint32_t l_880 = 0x1EA8C0F8L;
    union U1 l_897 = {0x68628104L};
    int64_t l_898 = 0L;
    struct S0 l_899 = {0xA1L,0x2170BD0FL,0x83L,-1L,65527UL,0xD6E6L};
    int8_t **l_925 = &g_782[0];
    const int32_t l_972 = 0xB7A0D181L;
    uint16_t *l_975 = &g_192[3][5][2];
    int32_t **l_1007 = &g_766[2][3];
    int32_t ***l_1006 = &l_1007;
    int32_t l_1052 = (-1L);
    int32_t l_1054 = 0x2306F6E8L;
    uint32_t l_1055 = 0x8AD254D4L;
    union U1 l_1060 = {18446744073709551615UL};
    union U1 l_1089 = {18446744073709551615UL};
    int i, j;
    for (i = 0; i < 5; i++)
        l_844[i] = 0UL;
    for (i = 0; i < 1; i++)
        l_850[i] = &l_851;
    for (i = 0; i < 2; i++)
        l_877[i] = 0xF47E5620L;
    l_857 = ((--(*g_53)) < (safe_rshift_func_int8_t_s_s((safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_u(p_22, (((safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((((((((*l_856) |= ((*g_289) = ((safe_mod_func_int8_t_s_s(l_844[3], (safe_sub_func_int32_t_s_s(((*g_188) = (((+((g_852 = (void*)0) != (l_844[3] , &g_853[0][5][1]))) ^ p_22) <= (*g_188))), l_844[3])))) | l_844[3]))) , l_844[3]) | l_844[3]) >= (-1L)) | l_844[3]) ^ l_844[2]), p_22)), g_2[0])) < l_844[4]) <= 0x91C5L))), p_18)), 4)));
    if ((safe_lshift_func_int8_t_s_u((-1L), 1)))
    { 
        int64_t l_866 = 7L;
        int32_t l_870 = 0x7B6275FCL;
        int32_t l_872 = 0xB7A2F1A1L;
        int32_t l_874 = 0xEDCEBD0EL;
        int32_t l_875 = (-1L);
        int32_t l_878[2];
        int8_t * const *l_923 = &g_782[0];
        int32_t *l_949 = &g_75;
        struct S0 l_967[7] = {{0x1FL,5UL,0L,0x67D044C7L,0x91EBL,65530UL},{0x1FL,5UL,0L,0x67D044C7L,0x91EBL,65530UL},{0x1FL,5UL,0L,0x67D044C7L,0x91EBL,65530UL},{0x1FL,5UL,0L,0x67D044C7L,0x91EBL,65530UL},{0x1FL,5UL,0L,0x67D044C7L,0x91EBL,65530UL},{0x1FL,5UL,0L,0x67D044C7L,0x91EBL,65530UL},{0x1FL,5UL,0L,0x67D044C7L,0x91EBL,65530UL}};
        struct S0 l_969 = {0x09L,4294967294UL,-2L,0xC8BF734CL,2UL,8UL};
        const uint64_t *l_973[6][1][7] = {{{&g_421,&g_288,&g_288,&g_421,(void*)0,(void*)0,&g_421}},{{(void*)0,&g_288,(void*)0,&g_421,&g_288,&g_89,&g_89}},{{&g_421,&g_421,&g_421,&g_421,&g_421,&g_421,(void*)0}},{{&g_421,&g_89,&g_421,&g_421,&g_421,&g_89,&g_421}},{{&g_288,(void*)0,&g_288,(void*)0,(void*)0,(void*)0,&g_288}},{{&g_421,&g_421,&g_288,&g_288,&g_421,&g_288,&g_421}}};
        int32_t l_1014 = (-5L);
        int32_t l_1018 = 0x7FA4850FL;
        uint16_t l_1034 = 0xEE12L;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_878[i] = 1L;
        for (g_855 = 0; (g_855 <= 1); g_855 += 1)
        { 
            uint16_t l_860 = 65532UL;
            int8_t l_865 = 0x40L;
            int32_t l_868 = (-7L);
            int32_t l_871[3][5] = {{0x838698AFL,0x2C9F8179L,0x2C9F8179L,0x838698AFL,0x2C9F8179L},{0x838698AFL,0x838698AFL,0xBA46EE2CL,0x838698AFL,0x838698AFL},{0x2C9F8179L,0x838698AFL,0x2C9F8179L,0x2C9F8179L,0x838698AFL}};
            union U1 l_902 = {0x1F862762L};
            int8_t * const **l_924[3][4][7] = {{{&l_923,&l_923,&l_923,&l_923,&l_923,&l_923,&l_923},{&l_923,&l_923,(void*)0,&l_923,&l_923,&l_923,(void*)0},{&l_923,&l_923,&l_923,(void*)0,&l_923,&l_923,&l_923},{(void*)0,&l_923,&l_923,&l_923,(void*)0,&l_923,&l_923}},{{&l_923,&l_923,&l_923,&l_923,&l_923,&l_923,&l_923},{(void*)0,&l_923,&l_923,&l_923,&l_923,&l_923,&l_923},{&l_923,&l_923,&l_923,&l_923,&l_923,&l_923,&l_923},{(void*)0,&l_923,&l_923,&l_923,&l_923,&l_923,(void*)0}},{{&l_923,&l_923,&l_923,&l_923,&l_923,&l_923,&l_923},{&l_923,&l_923,&l_923,&l_923,(void*)0,&l_923,&l_923},{&l_923,&l_923,&l_923,(void*)0,&l_923,&l_923,&l_923},{&l_923,&l_923,&l_923,&l_923,&l_923,&l_923,&l_923}}};
            struct S0 l_928 = {0xB3L,4294967294UL,0xBDL,0x436A803FL,0xA104L,3UL};
            const uint32_t *l_951 = (void*)0;
            int32_t **l_987 = &g_188;
            int32_t ***l_986 = &l_987;
            uint32_t *l_999[3];
            int64_t l_1000 = (-1L);
            int32_t l_1017 = 0x54E2CC72L;
            int32_t l_1051 = 0xB556F2A1L;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_999[i] = &g_139;
        }
    }
    else
    { 
        int32_t *l_1053[2][7] = {{(void*)0,(void*)0,&g_75,&l_877[0],&g_75,(void*)0,(void*)0},{(void*)0,&l_876,&l_867,&l_876,&g_75,&g_75,&l_876}};
        int i, j;
        l_1055--;
    }
    for (g_430 = 0; (g_430 != 3); ++g_430)
    { 
        return l_1060;
    }
    for (l_1054 = 0; (l_1054 <= 4); l_1054 += 1)
    { 
        int32_t *l_1068 = &l_877[1];
        int64_t *l_1075 = &g_148;
        int32_t *l_1076 = &l_857;
        int i;
        (**l_1006) = (*l_1007);
        (*l_1076) = (safe_add_func_int64_t_s_s(((*l_1075) = (((*g_175) = g_416[(l_1054 + 1)]) >= ((safe_mod_func_uint8_t_u_u((!(safe_rshift_func_uint8_t_u_u(((((((*l_1068) ^= ((*g_188) |= g_416[(l_1054 + 1)])) , (safe_div_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((((**g_781) = ((safe_add_func_uint8_t_u_u(((((void*)0 == &l_898) != ((((*l_1068) >= (**l_1007)) , &g_175) == &l_975)) , (*g_53)), (*p_21))) , (*l_1068))) != (*l_1068)) & 0x7FBDFF96L), p_22)), (*p_21)))) ^ 0xEA205E62L) & 0x4AL) > 0x8914L), 1))), (*g_53))) || p_19))), (*g_289)));
    }
    for (g_855 = 23; (g_855 != 3); g_855 = safe_sub_func_int16_t_s_s(g_855, 2))
    { 
        union U1 l_1082 = {0UL};
        int32_t l_1085 = 0x7A142AA9L;
        if ((0x8FL <= 0x6EL))
        { 
            union U1 *l_1079 = &l_1060;
            union U1 **l_1080 = &l_1079;
            g_447 = l_1079;
            (*l_1080) = &g_448;
        }
        else
        { 
            for (g_89 = 0; (g_89 <= 4); g_89 += 1)
            { 
                int32_t *l_1083 = &g_75;
                int32_t *l_1084[3][3][1] = {{{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0}}};
                uint32_t l_1086 = 0x478C342BL;
                int i, j, k;
                (*l_1007) = p_20;
                for (g_519 = 0; (g_519 <= 4); g_519 += 1)
                { 
                    union U1 **l_1081 = &g_447;
                    (*g_188) &= (((*l_1081) = &l_1060) == &g_448);
                    return l_1082;
                }
                --l_1086;
            }
        }
    }
    return l_1089;
}



static uint32_t  func_24(uint32_t  p_25, uint8_t * p_26, int32_t * p_27)
{ 
    uint32_t **l_825 = &g_409;
    int32_t l_828[1][2][5] = {{{3L,3L,3L,3L,3L},{0x07A8F7A1L,0x07A8F7A1L,0x07A8F7A1L,0x07A8F7A1L,0x07A8F7A1L}}};
    int i, j, k;
    (*g_188) &= (safe_lshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((safe_sub_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u(255UL, (-10L))), (((*g_447) , l_825) != &g_409))) == (safe_rshift_func_uint16_t_u_u((**g_174), 4))), (*p_26))), 4));
    return l_828[0][0][3];
}



static uint64_t  func_28(uint64_t  p_29)
{ 
    union U1 * const l_811 = &g_448;
    union U1 **l_812 = (void*)0;
    int32_t *l_813[4];
    int32_t **l_814 = &l_813[1];
    int i;
    for (i = 0; i < 4; i++)
        l_813[i] = &g_213[1][2];
    for (p_29 = (-28); (p_29 >= 50); ++p_29)
    { 
        for (g_89 = 0; (g_89 > 38); g_89 = safe_add_func_int8_t_s_s(g_89, 8))
        { 
            if (p_29)
                break;
        }
    }
    g_447 = l_811;
    (*l_814) = l_813[1];
    return (**l_814);
}



static uint64_t  func_30(union U1  p_31)
{ 
    int32_t l_33[3];
    int32_t l_40 = 0xC23CEA2FL;
    uint32_t l_673 = 1UL;
    struct S0 l_742 = {1L,0xA4F0EBFBL,0xE7L,0xE9465FAAL,1UL,0xB5A0L};
    uint16_t *l_749 = &g_448.f2;
    uint8_t *l_775 = &g_54;
    int8_t *** const l_779 = (void*)0;
    int i;
    for (i = 0; i < 3; i++)
        l_33[i] = 1L;
    for (g_32.f2 = 0; (g_32.f2 <= 2); g_32.f2 += 1)
    { 
        uint16_t *l_36 = &g_37;
        int32_t l_724[1];
        uint32_t *l_728 = &g_448.f0;
        const union U1 *l_804 = (void*)0;
        const union U1 * const *l_803[1][7] = {{&l_804,&l_804,&l_804,&l_804,&l_804,&l_804,&l_804}};
        int i, j;
        for (i = 0; i < 1; i++)
            l_724[i] = (-8L);
        l_40 = (safe_sub_func_int64_t_s_s((0xEDB6L > ((*l_36)--)), 2UL));
    }
    (*g_188) = (g_148 > ((safe_rshift_func_uint8_t_u_u(p_31.f2, 6)) , g_109[2][2]));
    return (*g_289);
}



static uint32_t  func_43(uint16_t * p_44, union U1  p_45, int32_t * p_46, int64_t  p_47, const int8_t  p_48)
{ 
    const uint8_t l_657 = 0x8BL;
    for (g_152 = 0; (g_152 > (-10)); g_152--)
    { 
        (*g_188) &= l_657;
    }
    return p_45.f3;
}



static uint16_t * func_49(int32_t * p_50, int16_t  p_51, uint8_t * p_52)
{ 
    uint16_t *l_56[5][1] = {{&g_32.f2},{&g_32.f2},{&g_32.f2},{&g_32.f2},{&g_32.f2}};
    uint16_t * const * const l_55 = &l_56[2][0];
    uint16_t * const *l_57 = &l_56[2][0];
    const int32_t l_80[2] = {0xD0C5FD78L,0xD0C5FD78L};
    uint64_t l_117 = 4UL;
    struct S0 l_138 = {7L,0xDD9FC9C2L,0x7FL,1L,65535UL,1UL};
    int32_t l_145 = (-1L);
    uint32_t l_187[2][6][7] = {{{4294967295UL,0x318B2E7EL,0x88DFEB77L,5UL,0x967E889CL,0x2ACE469DL,0x1C32F403L},{9UL,0xF9921E08L,1UL,1UL,1UL,1UL,0xF9921E08L},{0x318B2E7EL,0xF9921E08L,0x790C2E98L,0x1E6FE0F2L,3UL,0x318B2E7EL,1UL},{8UL,0x318B2E7EL,0xB3967CB0L,1UL,1UL,4294967295UL,1UL},{0xC7401454L,0x967E889CL,0x1C32F403L,0x1E6FE0F2L,5UL,0UL,0UL},{0x967E889CL,1UL,1UL,1UL,0x967E889CL,0UL,0xB3967CB0L}},{{4UL,3UL,1UL,5UL,0x1C32F403L,4294967295UL,3UL},{0x318B2E7EL,1UL,0xEA8707BAL,0x88DFEB77L,2UL,0x318B2E7EL,0UL},{4UL,5UL,0x318B2E7EL,1UL,0UL,1UL,0x318B2E7EL},{0x967E889CL,0x967E889CL,0x318B2E7EL,0x790C2E98L,0xB3967CB0L,0x2ACE469DL,0UL},{0xC7401454L,0x1C32F403L,0xEA8707BAL,0xB3967CB0L,0x967E889CL,4294967295UL,5UL},{8UL,2UL,1UL,0x1C32F403L,0xB3967CB0L,9UL,2UL}}};
    uint64_t l_210 = 0xEAB5394E2B856E2FLL;
    int32_t l_215[2];
    int16_t l_216 = (-1L);
    int32_t l_220 = 0x4A160165L;
    int16_t l_224 = 0xB481L;
    int32_t l_225 = 0x5C97E8F1L;
    uint16_t l_239 = 5UL;
    struct S0 l_250[5] = {{0x75L,1UL,0xD0L,0L,0xBD41L,0x136DL},{0x75L,1UL,0xD0L,0L,0xBD41L,0x136DL},{0x75L,1UL,0xD0L,0L,0xBD41L,0x136DL},{0x75L,1UL,0xD0L,0L,0xBD41L,0x136DL},{0x75L,1UL,0xD0L,0L,0xBD41L,0x136DL}};
    uint64_t l_270 = 0x9FD3D6E6ADAA7D16LL;
    int64_t *l_285 = &g_148;
    uint8_t l_286 = 0x75L;
    int32_t *l_287[1];
    int16_t l_303 = 0x782DL;
    int32_t **l_321 = &l_287[0];
    uint16_t l_341 = 65535UL;
    int32_t l_346[6] = {0x2C7BB83BL,0x2C7BB83BL,0x2C7BB83BL,0x2C7BB83BL,0x2C7BB83BL,0x2C7BB83BL};
    int64_t l_374 = 0L;
    int32_t l_393 = 0xEF26BD19L;
    int8_t l_434[4];
    struct S0 **l_548 = (void*)0;
    union U1 * const *l_584 = &g_447;
    uint32_t l_608 = 0x3A357CC0L;
    int32_t l_613 = 1L;
    uint16_t *l_648 = &g_192[3][5][2];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_215[i] = 0L;
    for (i = 0; i < 1; i++)
        l_287[i] = &l_215[1];
    for (i = 0; i < 4; i++)
        l_434[i] = (-1L);
    l_57 = l_55;
    return l_648;
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
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);

    }
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_32.f0, "g_32.f0", print_hash_value);
    transparent_crc(g_32.f1, "g_32.f1", print_hash_value);
    transparent_crc(g_32.f2, "g_32.f2", print_hash_value);
    transparent_crc(g_32.f3, "g_32.f3", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_96[i], "g_96[i]", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_97[i][j][k], "g_97[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_109[i][j], "g_109[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_151[i][j][k], "g_151[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_186.f0, "g_186.f0", print_hash_value);
    transparent_crc(g_186.f1, "g_186.f1", print_hash_value);
    transparent_crc(g_186.f2, "g_186.f2", print_hash_value);
    transparent_crc(g_186.f3, "g_186.f3", print_hash_value);
    transparent_crc(g_186.f4, "g_186.f4", print_hash_value);
    transparent_crc(g_186.f5, "g_186.f5", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_192[i][j][k], "g_192[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_213[i][j], "g_213[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_288, "g_288", print_hash_value);
    transparent_crc(g_361, "g_361", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_416[i], "g_416[i]", print_hash_value);

    }
    transparent_crc(g_421, "g_421", print_hash_value);
    transparent_crc(g_430, "g_430", print_hash_value);
    transparent_crc(g_435, "g_435", print_hash_value);
    transparent_crc(g_448.f0, "g_448.f0", print_hash_value);
    transparent_crc(g_448.f1, "g_448.f1", print_hash_value);
    transparent_crc(g_448.f2, "g_448.f2", print_hash_value);
    transparent_crc(g_448.f3, "g_448.f3", print_hash_value);
    transparent_crc(g_519, "g_519", print_hash_value);
    transparent_crc(g_533, "g_533", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_737[i], "g_737[i]", print_hash_value);

    }
    transparent_crc(g_855, "g_855", print_hash_value);
    transparent_crc(g_879, "g_879", print_hash_value);
    transparent_crc(g_944.f0, "g_944.f0", print_hash_value);
    transparent_crc(g_944.f1, "g_944.f1", print_hash_value);
    transparent_crc(g_944.f2, "g_944.f2", print_hash_value);
    transparent_crc(g_944.f3, "g_944.f3", print_hash_value);
    transparent_crc(g_944.f4, "g_944.f4", print_hash_value);
    transparent_crc(g_944.f5, "g_944.f5", print_hash_value);
    transparent_crc(g_1035, "g_1035", print_hash_value);
    transparent_crc(g_1159.f0, "g_1159.f0", print_hash_value);
    transparent_crc(g_1159.f1, "g_1159.f1", print_hash_value);
    transparent_crc(g_1159.f2, "g_1159.f2", print_hash_value);
    transparent_crc(g_1159.f3, "g_1159.f3", print_hash_value);
    transparent_crc(g_1161.f0, "g_1161.f0", print_hash_value);
    transparent_crc(g_1161.f1, "g_1161.f1", print_hash_value);
    transparent_crc(g_1161.f2, "g_1161.f2", print_hash_value);
    transparent_crc(g_1161.f3, "g_1161.f3", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1164[i].f0, "g_1164[i].f0", print_hash_value);
        transparent_crc(g_1164[i].f1, "g_1164[i].f1", print_hash_value);
        transparent_crc(g_1164[i].f2, "g_1164[i].f2", print_hash_value);
        transparent_crc(g_1164[i].f3, "g_1164[i].f3", print_hash_value);

    }
    transparent_crc(g_1202, "g_1202", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1325[i], "g_1325[i]", print_hash_value);

    }
    transparent_crc(g_1330, "g_1330", print_hash_value);
    transparent_crc(g_1496, "g_1496", print_hash_value);
    transparent_crc(g_1657, "g_1657", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_1699[i][j], "g_1699[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1745, "g_1745", print_hash_value);
    transparent_crc(g_1825, "g_1825", print_hash_value);
    transparent_crc(g_1902, "g_1902", print_hash_value);
    transparent_crc(g_1953, "g_1953", print_hash_value);
    transparent_crc(g_1956, "g_1956", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
