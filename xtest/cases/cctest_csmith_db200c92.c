// SPDX-License-Identifier: MIT
// cctest_csmith_db200c92.c --- cctest case csmith_db200c92 (csmith seed 3676310674)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xfea3dd82 */

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

// Options:   -s 3676310674 -o /tmp/csmith_gen_8h50ueco/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint64_t  f0;
   uint64_t  f1;
   uint8_t  f2;
   uint8_t  f3;
   int64_t  f4;
   const int8_t  f5;
};
#pragma pack(pop)

union U1 {
   uint32_t  f0;
   const struct S0  f1;
   const int16_t  f2;
};

union U2 {
   struct S0  f0;
   uint32_t  f1;
   uint16_t  f2;
};


static int32_t g_2 = (-1L);
static const struct S0 g_24[2][4][2] = {{{{0UL,0xE2B79DC86695CD1DLL,255UL,4UL,0L,0xF0L},{0UL,0xE2B79DC86695CD1DLL,255UL,4UL,0L,0xF0L}},{{0UL,0xE2B79DC86695CD1DLL,255UL,4UL,0L,0xF0L},{0UL,0xE2B79DC86695CD1DLL,255UL,4UL,0L,0xF0L}},{{0UL,0xE2B79DC86695CD1DLL,255UL,4UL,0L,0xF0L},{0UL,0xE2B79DC86695CD1DLL,255UL,4UL,0L,0xF0L}},{{0UL,0xE2B79DC86695CD1DLL,255UL,4UL,0L,0xF0L},{0UL,0xE2B79DC86695CD1DLL,255UL,4UL,0L,0xF0L}}},{{{0UL,0xE2B79DC86695CD1DLL,255UL,4UL,0L,0xF0L},{0UL,0xE2B79DC86695CD1DLL,255UL,4UL,0L,0xF0L}},{{0UL,0xE2B79DC86695CD1DLL,255UL,4UL,0L,0xF0L},{0UL,0xE2B79DC86695CD1DLL,255UL,4UL,0L,0xF0L}},{{0UL,0xE2B79DC86695CD1DLL,255UL,4UL,0L,0xF0L},{0UL,0xE2B79DC86695CD1DLL,255UL,4UL,0L,0xF0L}},{{0UL,0xE2B79DC86695CD1DLL,255UL,4UL,0L,0xF0L},{0UL,0xE2B79DC86695CD1DLL,255UL,4UL,0L,0xF0L}}}};
static int32_t g_39 = 0x02B5BDDDL;
static int32_t g_45[5] = {1L,1L,1L,1L,1L};
static const union U2 g_53 = {{0xA309CE07B88C8ECALL,18446744073709551613UL,1UL,0xE2L,0x6D7279364560F910LL,0L}};
static uint32_t g_54 = 4294967292UL;
static int8_t g_55 = 0L;
static uint64_t g_68 = 18446744073709551606UL;
static uint8_t g_78 = 0x0CL;
static uint64_t g_100[4] = {1UL,1UL,1UL,1UL};
static int32_t g_103 = 0xC12D2375L;
static uint64_t g_104 = 0x98B4E4A0A60341E9LL;
static int8_t g_157 = 0L;
static uint32_t g_158 = 0x3B00E0C1L;
static int64_t g_163 = 0x2F6955C0660AE455LL;
static uint32_t g_169 = 1UL;
static union U1 g_172[1] = {{1UL}};
static uint16_t g_176 = 0x4657L;
static uint16_t g_207 = 0x0942L;
static int32_t g_227 = 0x60D97CCDL;
static uint64_t g_234 = 0xCBCC48F9F2089036LL;
static int32_t g_267 = 0xA9D77DEFL;



static uint16_t  func_1(void);
static struct S0  func_8(int16_t  p_9, int32_t  p_10, int16_t  p_11, uint16_t  p_12, struct S0  p_13);
static int32_t  func_16(int64_t  p_17, const uint8_t  p_18);
static uint32_t  func_19(int8_t  p_20, int32_t  p_21, const struct S0  p_22);




static uint16_t  func_1(void)
{ 
    uint16_t l_23 = 3UL;
    int32_t l_241 = 0x261ECBF7L;
    union U1 l_256[2] = {{1UL},{1UL}};
    uint16_t l_266 = 0xAD05L;
    int i;
    for (g_2 = (-26); (g_2 != (-28)); g_2--)
    { 
        uint32_t l_5 = 0xA66E58D0L;
        int32_t l_240 = 0x6D3C7F17L;
        int16_t l_251[1][2];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_251[i][j] = 6L;
        }
        if (l_5)
        { 
            int16_t l_225 = 0x02CEL;
            for (l_5 = 0; (l_5 > 42); ++l_5)
            { 
                uint32_t l_237[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_237[i] = 0x1308C901L;
                l_237[1] = (func_8((safe_sub_func_int32_t_s_s(func_16((func_19(g_2, l_23, g_24[0][3][0]) , l_225), l_23), g_2)), g_24[0][3][0].f4, l_23, g_227, g_53.f0) , 0xAE6F9C14L);
                l_240 = ((g_53.f0.f0 <= ((safe_mul_func_int16_t_s_s(0x60FBL, l_225)) >= l_225)) < g_68);
            }
        }
        else
        { 
            int32_t l_252 = 0xC985E153L;
            l_241 = l_240;
            if (((safe_lshift_func_uint16_t_u_u(((+(safe_sub_func_uint16_t_u_u(((((g_169 <= 0x659EL) >= (safe_div_func_int8_t_s_s(g_24[0][3][0].f3, (l_241 | 0UL)))) | 0L) | l_251[0][1]), l_252))) == 1L), g_24[0][3][0].f3)) != l_241))
            { 
                l_240 = (g_158 , g_53.f0.f4);
                return g_163;
            }
            else
            { 
                return g_172[0].f2;
            }
        }
        l_241 = l_5;
    }
    if ((safe_lshift_func_uint8_t_u_u(((~5L) || g_53.f2), (l_241 , (l_256[1] , g_45[2])))))
    { 
        int16_t l_257 = (-4L);
        return l_257;
    }
    else
    { 
        g_2 &= (((g_267 = (safe_mul_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((g_53 , g_53.f0.f1), g_53.f0.f3)), g_100[0])) < l_266), 0x10L)) >= g_45[1]) && l_256[1].f0), g_24[0][3][0].f0))) == 0xA264L) & g_234);
    }
    return g_54;
}



static struct S0  func_8(int16_t  p_9, int32_t  p_10, int16_t  p_11, uint16_t  p_12, struct S0  p_13)
{ 
    int8_t l_228 = 0x31L;
    int32_t l_233 = (-5L);
    for (p_10 = 0; p_10 < 5; p_10 += 1)
    {
        g_45[p_10] = 0x77EC2AD8L;
    }
    l_233 = (((l_228 = p_13.f4) && (~(l_228 & (0xA3L == ((+((4294967288UL | 3UL) <= 0xAF9EL)) && 0x87L))))) || p_13.f1);
    --g_234;
    return p_13;
}



static int32_t  func_16(int64_t  p_17, const uint8_t  p_18)
{ 
    int32_t l_226[2][4] = {{0x352F6597L,0x352F6597L,0x352F6597L,0x352F6597L},{0x352F6597L,0x352F6597L,0x352F6597L,0x352F6597L}};
    int i, j;
    return l_226[1][1];
}



static uint32_t  func_19(int8_t  p_20, int32_t  p_21, const struct S0  p_22)
{ 
    int64_t l_37 = 0x9C42FA43DEE6EE3ELL;
    int32_t l_38 = 5L;
    int32_t l_57 = 0x39FBD058L;
    const int32_t l_77 = 0L;
    int64_t l_177 = (-1L);
    int64_t l_212 = (-1L);
    uint64_t l_224 = 18446744073709551615UL;
lbl_154:
    if ((safe_lshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_s((-9L), (((p_22.f3 > p_22.f3) || (safe_sub_func_int64_t_s_s((g_39 ^= (l_38 &= (safe_add_func_uint64_t_u_u((safe_rshift_func_int8_t_s_s((p_20 ^= (safe_mod_func_int32_t_s_s(((l_37 != 2UL) & l_37), g_2))), l_37)), g_24[0][3][0].f4)))), 0L))) != g_24[0][3][0].f3))), g_24[0][3][0].f3)))
    { 
        int32_t l_42[5] = {0x954656E2L,0x954656E2L,0x954656E2L,0x954656E2L,0x954656E2L};
        int i;
        for (l_37 = 27; (l_37 == 5); --l_37)
        { 
            for (l_38 = 3; (l_38 >= 0); l_38 -= 1)
            { 
                int i;
                l_42[(l_38 + 1)] = (safe_div_func_int64_t_s_s(((g_45[2] = l_42[(l_38 + 1)]) || l_37), ((safe_sub_func_uint16_t_u_u(((-3L) > (g_24[0][3][0].f0 & g_24[0][3][0].f1)), p_21)) , (-5L))));
            }
            for (p_20 = 0; (p_20 <= 4); p_20 += 1)
            { 
                int i;
                if (l_42[p_20])
                    break;
                g_54 = (l_42[p_20] && (safe_add_func_uint8_t_u_u(((l_42[0] = (!g_24[0][3][0].f3)) , (((safe_mod_func_uint64_t_u_u((g_53 , 1UL), 7L)) <= l_38) | g_24[0][3][0].f5)), g_24[0][3][0].f2)));
            }
        }
        g_55 |= (l_38 ^= (-1L));
        return g_53.f1;
    }
    else
    { 
        uint32_t l_56[1][5][4];
        int32_t l_67[5][3] = {{0x33967BE2L,(-10L),0x15F77FB9L},{8L,8L,8L},{8L,0xEFDF249AL,0x15F77FB9L},{0x33967BE2L,(-1L),0x33967BE2L},{0x33967BE2L,8L,(-1L)}};
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 5; j++)
            {
                for (k = 0; k < 4; k++)
                    l_56[i][j][k] = 0xAE3649E8L;
            }
        }
lbl_61:
        l_56[0][0][3] = (-5L);
        for (p_20 = 0; (p_20 <= 4); p_20 += 1)
        { 
            int32_t l_66 = 0x3902D8B6L;
            int i;
            for (g_55 = 0; (g_55 <= 4); g_55 += 1)
            { 
                uint32_t l_58 = 0UL;
                --l_58;
            }
            for (l_57 = 4; (l_57 >= 0); l_57 -= 1)
            { 
                int i;
                if (g_53.f0.f1)
                    goto lbl_61;
                if (g_45[p_20])
                    break;
            }
            g_78 = ((g_45[p_20] && (safe_mod_func_uint64_t_u_u(p_22.f5, ((((--g_68) & ((safe_lshift_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u((l_67[1][2] = 65535UL), ((safe_lshift_func_uint16_t_u_s(l_77, l_57)) && l_38))) <= g_53.f0.f5), 5)) >= p_22.f4)) < g_39) & p_22.f0)))) , p_22.f5);
        }
    }
    for (g_39 = 0; (g_39 >= (-13)); g_39 = safe_sub_func_uint32_t_u_u(g_39, 6))
    { 
        int32_t l_81 = 0x2412408BL;
        int32_t l_99 = (-1L);
        for (g_54 = 0; (g_54 <= 4); g_54 += 1)
        { 
            int32_t l_88 = 0xB3E5EB5CL;
            int i;
            l_81 = (l_38 = g_45[g_54]);
            l_88 = ((l_81 != (g_53.f1 >= (safe_mod_func_uint16_t_u_u(((safe_add_func_int32_t_s_s(0xF179D161L, p_22.f4)) & p_22.f3), l_77)))) ^ g_45[g_54]);
        }
        if (((p_22.f4 & (g_78 = (((0L != (((l_99 |= ((l_38 ^= ((safe_div_func_uint8_t_u_u((g_24[0][3][0].f0 <= (safe_mul_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((((safe_sub_func_int8_t_s_s(l_81, p_22.f3)) && p_20) , g_54), g_24[0][3][0].f3)), 0xDF186BE7L)), p_22.f0))), l_77)) | g_54)) , 18446744073709551606UL)) & 0UL) || l_38)) <= l_77) == l_81))) ^ 0x30ED53B0E2D30B14LL))
        { 
            ++g_100[0];
        }
        else
        { 
            int8_t l_122 = 1L;
            --g_104;
            if ((safe_mul_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s(((+(safe_rshift_func_uint8_t_u_s(0UL, 4))) < ((safe_sub_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u(((safe_add_func_uint64_t_u_u((l_57 = p_22.f1), (safe_add_func_uint64_t_u_u(p_22.f2, g_68)))) == 0xA4L), p_22.f5)), p_22.f2)) > l_122)), p_22.f0)) | g_103), 0x2B24L)))
            { 
                uint8_t l_127[4][5][1] = {{{0x9BL},{0xF5L},{0x9BL},{0xA4L},{0xF5L}},{{1UL},{1UL},{0xF5L},{0xA4L},{0x9BL}},{{0xF5L},{0x9BL},{0xA4L},{0xF5L},{1UL}},{{1UL},{0xF5L},{0xA4L},{0x9BL},{0xF5L}}};
                int i, j, k;
                l_57 = (safe_lshift_func_int8_t_s_s((l_38 < ((l_122 > (l_122 != p_21)) | g_100[2])), l_127[1][2][0]));
                g_103 ^= g_24[0][3][0].f3;
            }
            else
            { 
                l_57 = (safe_rshift_func_uint16_t_u_s((255UL >= ((safe_mul_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(l_99, (g_78 = 254UL))) > (safe_div_func_uint8_t_u_u(((g_54 |= g_24[0][3][0].f5) >= p_21), l_81))), 0xF3L)) | l_122) != p_22.f1), 0x3C2DL)) > g_53.f0.f1)), 4));
                return l_122;
            }
        }
    }
    if (((safe_mul_func_int8_t_s_s((0xB42E23460C9FB339LL ^ ((safe_add_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((safe_rshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u(l_77, ((g_53.f0.f5 ^ l_77) != l_77))), 7)), 0x31C8896062B7E369LL)), l_37)) , l_57)), l_57)) >= (-1L)))
    { 
        int32_t l_156 = 0x2BA3B598L;
        int32_t l_164 = (-1L);
        int32_t l_206 = 0x39877F82L;
        for (l_38 = 0; (l_38 != 16); l_38++)
        { 
            uint64_t l_175[1];
            int32_t l_178 = 0xDCB87100L;
            int32_t l_185[1];
            int i;
            for (i = 0; i < 1; i++)
                l_175[i] = 0x60C6B045E172707FLL;
            for (i = 0; i < 1; i++)
                l_185[i] = (-1L);
            for (g_103 = 0; (g_103 != 0); g_103 = safe_add_func_uint16_t_u_u(g_103, 8))
            { 
                int16_t l_155 = 0x488BL;
                if (p_21)
                    goto lbl_154;
                g_158--;
                l_164 = ((g_45[3] , (((((g_163 = (((g_45[0] , (safe_div_func_int8_t_s_s((p_20 = (((((p_22.f4 <= g_53.f0.f4) ^ g_2) , p_22.f3) | 0x1B7EL) <= 0xA4222F61L)), l_38))) != 0xEADF95454331F878LL) < g_100[0])) == l_57) , 0x7A280F67L) , 0x4C19A244BBC70BF1LL) <= p_22.f0)) >= l_156);
            }
            if ((l_177 |= (l_57 ^= (g_103 |= ((safe_lshift_func_int16_t_s_s(p_22.f2, 5)) || (safe_sub_func_uint16_t_u_u((g_169--), (g_176 |= ((g_2 > (g_172[0] , ((safe_add_func_int16_t_s_s((l_175[0] = g_24[0][3][0].f1), 0xD655L)) <= l_156))) | 0x078DF31DL)))))))))
            { 
                int32_t l_181 = 0x1BBA3292L;
                l_185[0] = (p_22 , ((l_178 ^= (g_54 = l_37)) | (safe_rshift_func_uint16_t_u_u(((l_181 , (!(safe_lshift_func_uint8_t_u_s(((l_57 &= ((g_45[2] , l_175[0]) <= l_175[0])) | p_22.f3), 1)))) >= l_181), 1))));
                if (g_45[2])
                    break;
            }
            else
            { 
                return g_24[0][3][0].f3;
            }
            for (g_68 = 0; (g_68 <= 56); g_68 = safe_add_func_uint64_t_u_u(g_68, 6))
            { 
                if (l_178)
                    goto lbl_154;
            }
        }
        for (l_164 = 3; (l_164 >= 0); l_164 -= 1)
        { 
            uint64_t l_205[5];
            int i;
            for (i = 0; i < 5; i++)
                l_205[i] = 0x02258E7943EC499DLL;
            if (p_22.f1)
                break;
            l_206 |= (safe_rshift_func_uint8_t_u_s(((safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((p_22.f0 , p_20), ((~(((safe_div_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u((l_38 == ((safe_add_func_uint64_t_u_u((safe_mul_func_int16_t_s_s(p_22.f2, 0xC60DL)), 0x5B22CD46132A9E99LL)) == 0xE1L)), g_2)), p_22.f2)) ^ 4UL) <= p_22.f4)) & l_156))), g_157)) <= 65531UL), l_205[1]));
            g_207++;
        }
        l_38 = (safe_add_func_uint32_t_u_u(((p_22.f4 & (g_24[0][3][0].f2 <= (l_156 , ((-2L) ^ p_20)))) && l_212), 2UL));
    }
    else
    { 
        int16_t l_222[1];
        uint32_t l_223 = 1UL;
        int i;
        for (i = 0; i < 1; i++)
            l_222[i] = (-1L);
        for (l_177 = (-29); (l_177 == (-26)); l_177 = safe_add_func_uint64_t_u_u(l_177, 4))
        { 
            int32_t l_219[1][2][3];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 3; k++)
                        l_219[i][j][k] = 7L;
                }
            }
            l_219[0][0][2] &= (safe_lshift_func_uint8_t_u_s((0x42L == (safe_lshift_func_int8_t_s_u(0x99L, 1))), 1));
        }
        g_103 &= (((0x440195C6L && (safe_mul_func_uint16_t_u_u((l_222[0] >= p_22.f4), (((((l_222[0] , p_20) , l_223) , p_21) , g_172[0].f0) & (-2L))))) > l_177) > p_21);
    }
    return l_224;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_24[i][j][k].f0, "g_24[i][j][k].f0", print_hash_value);
                transparent_crc(g_24[i][j][k].f1, "g_24[i][j][k].f1", print_hash_value);
                transparent_crc(g_24[i][j][k].f2, "g_24[i][j][k].f2", print_hash_value);
                transparent_crc(g_24[i][j][k].f3, "g_24[i][j][k].f3", print_hash_value);
                transparent_crc(g_24[i][j][k].f4, "g_24[i][j][k].f4", print_hash_value);
                transparent_crc(g_24[i][j][k].f5, "g_24[i][j][k].f5", print_hash_value);

            }
        }
    }
    transparent_crc(g_39, "g_39", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_45[i], "g_45[i]", print_hash_value);

    }
    transparent_crc(g_53.f0.f0, "g_53.f0.f0", print_hash_value);
    transparent_crc(g_53.f0.f1, "g_53.f0.f1", print_hash_value);
    transparent_crc(g_53.f0.f2, "g_53.f0.f2", print_hash_value);
    transparent_crc(g_53.f0.f3, "g_53.f0.f3", print_hash_value);
    transparent_crc(g_53.f0.f4, "g_53.f0.f4", print_hash_value);
    transparent_crc(g_53.f0.f5, "g_53.f0.f5", print_hash_value);
    transparent_crc(g_53.f1, "g_53.f1", print_hash_value);
    transparent_crc(g_53.f2, "g_53.f2", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_100[i], "g_100[i]", print_hash_value);

    }
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_172[i].f0, "g_172[i].f0", print_hash_value);
        transparent_crc(g_172[i].f2, "g_172[i].f2", print_hash_value);

    }
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_227, "g_227", print_hash_value);
    transparent_crc(g_234, "g_234", print_hash_value);
    transparent_crc(g_267, "g_267", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
