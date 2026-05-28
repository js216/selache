// SPDX-License-Identifier: MIT
// cctest_csmith_f49c7ada.c --- cctest case csmith_f49c7ada (csmith seed 4103895770)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x60f047 */
/* @exp_ticks 0xb684 */

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

// Options:   -s 4103895770 -o /tmp/csmith_gen_m64abekb/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int8_t  f0;
   uint32_t  f1;
   const uint16_t  f2;
   int32_t  f3;
   uint32_t  f4;
   uint16_t  f5;
};
#pragma pack(pop)

struct S1 {
   int32_t  f0;
   const int32_t  f1;
   const int8_t  f2;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   struct S0  f0;
   int8_t  f1;
};
#pragma pack(pop)

struct S3 {
   int32_t  f0;
   int16_t  f1;
   int16_t  f2;
   int32_t  f3;
};

struct S4 {
   uint32_t  f0;
   const struct S0  f1;
};

struct S5 {
   const uint32_t  f0;
   int8_t  f1;
   struct S0  f2;
   struct S0  f3;
};

union U6 {
   int32_t  f0;
   const struct S3  f1;
   const struct S1  f2;
   int8_t * f3;
};

union U7 {
   int32_t  f0;
   int8_t * f1;
   int16_t  f2;
   uint32_t  f3;
   const uint16_t  f4;
};

union U8 {
   int8_t * f0;
   struct S5  f1;
};

union U9 {
   int16_t  f0;
   uint64_t  f1;
};


static int32_t g_3 = 0L;
static uint16_t g_11 = 0UL;
static int32_t g_52 = 0L;
static int32_t g_56[6] = {(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)};
static int8_t g_62 = 3L;
static int8_t g_63 = 0xF0L;
static uint16_t g_70 = 65531UL;
static struct S5 g_74[2] = {{0xA40E5C4FL,0x8CL,{0xF4L,0xBA83BDBBL,0x76A9L,0x4D9C5E16L,4294967287UL,0xA88EL},{0x8BL,0xD8398313L,0xCAF2L,0xF2F77261L,0xA8B4E140L,0UL}},{0xA40E5C4FL,0x8CL,{0xF4L,0xBA83BDBBL,0x76A9L,0x4D9C5E16L,4294967287UL,0xA88EL},{0x8BL,0xD8398313L,0xCAF2L,0xF2F77261L,0xA8B4E140L,0UL}}};
static int32_t *g_76 = &g_3;
static int32_t **g_75[4] = {&g_76,&g_76,&g_76,&g_76};
static struct S5 g_89 = {18446744073709551606UL,0xECL,{-8L,0x71B29B62L,65535UL,0x970EBC13L,0x8C270E2AL,7UL},{-2L,0x75FB2DABL,65535UL,0x3E86663AL,0x69110DD6L,0UL}};
static struct S2 g_99 = {{0x11L,0xA49DC3AFL,0xD700L,5L,0xA033656FL,0xDE51L},0xEEL};
static int64_t g_132 = (-1L);
static int64_t * const g_131 = &g_132;
static int8_t g_157 = 0x18L;
static const struct S2 **g_192 = (void*)0;
static uint8_t g_218 = 0x40L;
static struct S3 g_227 = {0x2C065F73L,1L,0xBF22L,7L};
static struct S3 *g_226 = &g_227;
static union U7 g_240 = {0x1A5CA313L};
static union U7 g_243 = {0x9A662498L};
static union U7 *g_242 = &g_243;
static struct S1 g_273[1][7][5] = {{{{0xF2993F3CL,0x7F6B4112L,0x74L},{0x46AA43C8L,-1L,-1L},{0x46AA43C8L,-1L,-1L},{0xF2993F3CL,0x7F6B4112L,0x74L},{0xF2993F3CL,0x7F6B4112L,0x74L}},{{0x9763BD00L,0L,0L},{0x8828091BL,1L,0xFAL},{0x9763BD00L,0L,0L},{0x8828091BL,1L,0xFAL},{0x9763BD00L,0L,0L}},{{0xF2993F3CL,0x7F6B4112L,0x74L},{0xF2993F3CL,0x7F6B4112L,0x74L},{0x46AA43C8L,-1L,-1L},{0x46AA43C8L,-1L,-1L},{0xF2993F3CL,0x7F6B4112L,0x74L}},{{-1L,0x22EFBBBDL,-10L},{0x8828091BL,1L,0xFAL},{-1L,0x22EFBBBDL,-10L},{0x8828091BL,1L,0xFAL},{-1L,0x22EFBBBDL,-10L}},{{0xF2993F3CL,0x7F6B4112L,0x74L},{0x46AA43C8L,-1L,-1L},{0x46AA43C8L,-1L,-1L},{0xF2993F3CL,0x7F6B4112L,0x74L},{0xF2993F3CL,0x7F6B4112L,0x74L}},{{0x9763BD00L,0L,0L},{0x8828091BL,1L,0xFAL},{0x9763BD00L,0L,0L},{0x8828091BL,1L,0xFAL},{0x9763BD00L,0L,0L}},{{0xF2993F3CL,0x7F6B4112L,0x74L},{0xF2993F3CL,0x7F6B4112L,0x74L},{0x46AA43C8L,-1L,-1L},{0x46AA43C8L,-1L,-1L},{0xF2993F3CL,0x7F6B4112L,0x74L}}}};
static int32_t ***g_305 = &g_75[2];
static int32_t ****g_304 = &g_305;
static int64_t g_357 = 0x3A572586CD8A32D7LL;
static int64_t *g_359[5][7][1] = {{{&g_357},{&g_357},{&g_357},{&g_357},{&g_357},{&g_357},{&g_357}},{{(void*)0},{&g_357},{(void*)0},{&g_357},{&g_357},{&g_357},{&g_357}},{{&g_357},{&g_357},{&g_357},{&g_357},{&g_357},{&g_357},{&g_357}},{{(void*)0},{&g_357},{(void*)0},{&g_357},{&g_357},{&g_357},{&g_357}},{{&g_357},{&g_357},{&g_357},{&g_357},{&g_357},{&g_357},{&g_357}}};
static uint8_t g_361 = 255UL;
static struct S4 g_369 = {0x8FA4BF2AL,{1L,4294967295UL,9UL,-1L,0x04991DA3L,1UL}};
static uint32_t g_414 = 18446744073709551606UL;
static union U8 g_438 = {0};
static union U8 *g_440 = (void*)0;
static int16_t *g_536 = &g_240.f2;
static union U9 g_565 = {0xBFB4L};
static const union U9 *g_564 = &g_565;
static struct S2 g_591 = {{0x53L,0xB35F6B31L,65535UL,8L,4294967290UL,0xCB6EL},0xB6L};
static union U6 g_593 = {-6L};
static int64_t g_621 = 0x87E823D91655AB37LL;
static uint8_t g_643 = 0x65L;
static int64_t **g_724 = &g_359[2][4][0];
static const struct S4 g_750 = {1UL,{-1L,0UL,65528UL,5L,4294967292UL,0xF7A4L}};
static int64_t ** const *g_774 = &g_724;
static int64_t ** const **g_773 = &g_774;
static const int32_t *g_779 = (void*)0;
static uint32_t g_802 = 0UL;
static uint32_t g_820 = 0x57339B2AL;
static uint8_t g_837 = 0xA5L;
static int16_t g_917 = 0x9701L;
static uint16_t g_918 = 0UL;
static struct S5 *g_923 = &g_74[1];
static struct S5 **g_922[2] = {&g_923,&g_923};
static struct S5 ***g_921 = &g_922[1];
static struct S0 *g_937 = &g_99.f0;
static uint32_t g_940 = 0xE51DC4ECL;
static uint16_t *g_965 = &g_89.f2.f5;
static uint16_t **g_964 = &g_965;
static struct S2 g_977 = {{0x36L,0UL,0x1F01L,0L,0x6419A875L,0xACAFL},0L};
static uint16_t g_1047 = 1UL;
static int8_t *g_1054 = &g_99.f0.f0;
static struct S4 g_1058 = {4294967291UL,{1L,1UL,0x7D2FL,1L,1UL,1UL}};
static struct S4 *g_1057 = &g_1058;
static struct S4 g_1060 = {0xDEB67CF1L,{0L,0x2BCD3A64L,65527UL,0x7529A4A1L,4294967295UL,0x73EBL}};
static uint8_t *g_1074 = &g_643;
static uint8_t **g_1073 = &g_1074;
static uint8_t g_1130 = 255UL;
static int16_t g_1168 = 0xBD27L;
static int8_t g_1192 = (-7L);
static uint64_t g_1218 = 0xD865422F8229359ALL;
static struct S3 ***g_1250 = (void*)0;
static int32_t g_1258 = 0x1924DDF7L;
static uint32_t g_1273 = 4294967292UL;
static uint32_t *g_1335 = &g_74[1].f2.f1;
static uint32_t **g_1334 = &g_1335;
static uint32_t g_1408 = 18446744073709551615UL;
static const int8_t g_1460 = 0xDCL;
static struct S1 *g_1490 = (void*)0;
static struct S1 ** const g_1489[1][2] = {{&g_1490,&g_1490}};
static union U9 *g_1507 = (void*)0;
static union U9 * const *g_1506 = &g_1507;
static union U9 * const ** const g_1505 = &g_1506;
static union U9 * const ** const *g_1504 = &g_1505;
static struct S5 ****g_1537[7] = {&g_921,&g_921,&g_921,&g_921,&g_921,&g_921,&g_921};
static struct S5 *****g_1536[1][6][3] = {{{(void*)0,(void*)0,&g_1537[5]},{&g_1537[5],&g_1537[3],&g_1537[5]},{&g_1537[4],(void*)0,&g_1537[4]},{&g_1537[4],&g_1537[5],(void*)0},{&g_1537[5],&g_1537[4],&g_1537[4]},{(void*)0,&g_1537[4],&g_1537[5]}}};
static union U6 g_1538 = {-4L};
static struct S3 g_1546 = {0L,1L,0x37D0L,0xD6968F18L};
static int8_t g_1582 = 0xE6L;
static uint32_t g_1607[2][3][5] = {{{5UL,0xB5EAFA69L,5UL,18446744073709551615UL,0xEB636CE5L},{0UL,0xF4C55494L,0xF4C55494L,0UL,0xF4C55494L},{0xEB636CE5L,0xB5EAFA69L,1UL,0xB5EAFA69L,0xEB636CE5L}},{{0xF4C55494L,0UL,0xF4C55494L,0xF4C55494L,0UL},{0xEB636CE5L,18446744073709551615UL,5UL,0xB5EAFA69L,5UL},{0UL,0UL,8UL,0UL,0UL}}};
static struct S2 g_1613[1][6][3] = {{{{{9L,4294967287UL,65534UL,0x90A1FE99L,4294967295UL,0x12D5L},0L},{{-10L,0x4697DA7DL,0xE43CL,-1L,9UL,0UL},0xE0L},{{9L,4294967287UL,65534UL,0x90A1FE99L,4294967295UL,0x12D5L},0L}},{{{9L,4294967287UL,65534UL,0x90A1FE99L,4294967295UL,0x12D5L},0L},{{-10L,0x4697DA7DL,0xE43CL,-1L,9UL,0UL},0xE0L},{{9L,4294967287UL,65534UL,0x90A1FE99L,4294967295UL,0x12D5L},0L}},{{{9L,4294967287UL,65534UL,0x90A1FE99L,4294967295UL,0x12D5L},0L},{{-10L,0x4697DA7DL,0xE43CL,-1L,9UL,0UL},0xE0L},{{9L,4294967287UL,65534UL,0x90A1FE99L,4294967295UL,0x12D5L},0L}},{{{9L,4294967287UL,65534UL,0x90A1FE99L,4294967295UL,0x12D5L},0L},{{-10L,0x4697DA7DL,0xE43CL,-1L,9UL,0UL},0xE0L},{{9L,4294967287UL,65534UL,0x90A1FE99L,4294967295UL,0x12D5L},0L}},{{{9L,4294967287UL,65534UL,0x90A1FE99L,4294967295UL,0x12D5L},0L},{{-10L,0x4697DA7DL,0xE43CL,-1L,9UL,0UL},0xE0L},{{9L,4294967287UL,65534UL,0x90A1FE99L,4294967295UL,0x12D5L},0L}},{{{9L,4294967287UL,65534UL,0x90A1FE99L,4294967295UL,0x12D5L},0L},{{-10L,0x4697DA7DL,0xE43CL,-1L,9UL,0UL},0xE0L},{{9L,4294967287UL,65534UL,0x90A1FE99L,4294967295UL,0x12D5L},0L}}}};
static struct S2 *g_1612 = &g_1613[0][2][2];
static uint32_t g_1647[7][2][4] = {{{18446744073709551610UL,18446744073709551613UL,1UL,18446744073709551613UL},{18446744073709551610UL,0UL,1UL,0UL}},{{18446744073709551610UL,18446744073709551613UL,1UL,18446744073709551613UL},{18446744073709551610UL,0UL,1UL,0UL}},{{18446744073709551610UL,18446744073709551613UL,1UL,18446744073709551613UL},{18446744073709551610UL,0UL,1UL,0UL}},{{18446744073709551610UL,18446744073709551613UL,1UL,18446744073709551613UL},{18446744073709551610UL,0UL,1UL,0UL}},{{18446744073709551610UL,18446744073709551613UL,1UL,18446744073709551613UL},{18446744073709551610UL,0UL,1UL,0UL}},{{18446744073709551610UL,18446744073709551613UL,1UL,18446744073709551613UL},{18446744073709551610UL,0UL,1UL,0UL}},{{18446744073709551610UL,18446744073709551613UL,1UL,18446744073709551613UL},{18446744073709551610UL,0UL,1UL,0UL}}};



static int64_t  func_1(void);
static struct S2 * func_16(const struct S3  p_17, uint32_t  p_18, struct S2 * p_19, struct S5  p_20);
static const struct S3  func_21(uint8_t  p_22, union U6  p_23, struct S1  p_24, uint8_t  p_25);
static uint8_t  func_26(int32_t * p_27, struct S0  p_28, int8_t * p_29);
static int32_t * func_30(const uint32_t  p_31, struct S4  p_32);
static uint8_t  func_36(uint16_t  p_37, struct S3  p_38, struct S2 * p_39);
static struct S3  func_43(const union U9  p_44, uint32_t * p_45);
static uint32_t * func_47(const struct S0  p_48, const struct S4  p_49);




static int64_t  func_1(void)
{ 
    int32_t *l_2 = &g_3;
    int32_t l_4 = (-6L);
    int32_t *l_5 = &g_3;
    int32_t *l_6 = (void*)0;
    int32_t *l_7 = (void*)0;
    int32_t *l_8 = &g_3;
    int32_t *l_9 = &g_3;
    int32_t *l_10 = (void*)0;
    struct S4 l_33 = {0xDEA90CFFL,{0xE3L,0x77D98A9AL,0x6275L,-1L,1UL,0x63F7L}};
    struct S1 l_1539 = {0xB0EFF90EL,1L,-1L};
    struct S5 l_1614[7][4] = {{{0xDF1C96A9L,0x7CL,{0xE5L,1UL,1UL,1L,0x280994B5L,0UL},{-1L,4294967295UL,0x4609L,0x859E1A4AL,0xEA49690EL,0x9FD9L}},{0x5F462134L,0x20L,{0x88L,1UL,0x93F4L,1L,4294967286UL,0UL},{0xD4L,0x318351E6L,7UL,0x46A354F2L,0x75EC04E3L,0x6975L}},{2UL,0xFDL,{-7L,0x21D4D0FEL,9UL,0xB41BE91CL,0x2B804273L,0xB404L},{1L,4294967286UL,7UL,0xB5DDB26FL,1UL,0UL}},{2UL,0xFDL,{-7L,0x21D4D0FEL,9UL,0xB41BE91CL,0x2B804273L,0xB404L},{1L,4294967286UL,7UL,0xB5DDB26FL,1UL,0UL}}},{{0x7375B159L,0xE0L,{0L,0x51B6CFDEL,65535UL,0xFE0A7173L,4294967289UL,0x1A44L},{0x17L,0x1E065069L,0xECC8L,9L,4294967295UL,1UL}},{0x7375B159L,0xE0L,{0L,0x51B6CFDEL,65535UL,0xFE0A7173L,4294967289UL,0x1A44L},{0x17L,0x1E065069L,0xECC8L,9L,4294967295UL,1UL}},{0xA396C6ECL,-6L,{0xD2L,0x7C25F3ADL,65535UL,1L,8UL,0UL},{-3L,4294967295UL,65526UL,9L,5UL,65535UL}},{0x5F462134L,0x20L,{0x88L,1UL,0x93F4L,1L,4294967286UL,0UL},{0xD4L,0x318351E6L,7UL,0x46A354F2L,0x75EC04E3L,0x6975L}}},{{0x5F462134L,0x20L,{0x88L,1UL,0x93F4L,1L,4294967286UL,0UL},{0xD4L,0x318351E6L,7UL,0x46A354F2L,0x75EC04E3L,0x6975L}},{0xDF1C96A9L,0x7CL,{0xE5L,1UL,1UL,1L,0x280994B5L,0UL},{-1L,4294967295UL,0x4609L,0x859E1A4AL,0xEA49690EL,0x9FD9L}},{0xA396C6ECL,-6L,{0xD2L,0x7C25F3ADL,65535UL,1L,8UL,0UL},{-3L,4294967295UL,65526UL,9L,5UL,65535UL}},{0xDF1C96A9L,0x7CL,{0xE5L,1UL,1UL,1L,0x280994B5L,0UL},{-1L,4294967295UL,0x4609L,0x859E1A4AL,0xEA49690EL,0x9FD9L}}},{{0x7375B159L,0xE0L,{0L,0x51B6CFDEL,65535UL,0xFE0A7173L,4294967289UL,0x1A44L},{0x17L,0x1E065069L,0xECC8L,9L,4294967295UL,1UL}},{0x8F7C57D9L,5L,{0x77L,1UL,0x5B3DL,0x31E88453L,0x576F2A15L,0x8A39L},{0L,0x2F18F110L,65535UL,0x2F0FF4BFL,4294967291UL,65531UL}},{2UL,0xFDL,{-7L,0x21D4D0FEL,9UL,0xB41BE91CL,0x2B804273L,0xB404L},{1L,4294967286UL,7UL,0xB5DDB26FL,1UL,0UL}},{0xA396C6ECL,-6L,{0xD2L,0x7C25F3ADL,65535UL,1L,8UL,0UL},{-3L,4294967295UL,65526UL,9L,5UL,65535UL}}},{{0xDF1C96A9L,0x7CL,{0xE5L,1UL,1UL,1L,0x280994B5L,0UL},{-1L,4294967295UL,0x4609L,0x859E1A4AL,0xEA49690EL,0x9FD9L}},{0x8F7C57D9L,5L,{0x77L,1UL,0x5B3DL,0x31E88453L,0x576F2A15L,0x8A39L},{0L,0x2F18F110L,65535UL,0x2F0FF4BFL,4294967291UL,65531UL}},{0x8F7C57D9L,5L,{0x77L,1UL,0x5B3DL,0x31E88453L,0x576F2A15L,0x8A39L},{0L,0x2F18F110L,65535UL,0x2F0FF4BFL,4294967291UL,65531UL}},{0xDF1C96A9L,0x7CL,{0xE5L,1UL,1UL,1L,0x280994B5L,0UL},{-1L,4294967295UL,0x4609L,0x859E1A4AL,0xEA49690EL,0x9FD9L}}},{{0x8F7C57D9L,5L,{0x77L,1UL,0x5B3DL,0x31E88453L,0x576F2A15L,0x8A39L},{0L,0x2F18F110L,65535UL,0x2F0FF4BFL,4294967291UL,65531UL}},{0xDF1C96A9L,0x7CL,{0xE5L,1UL,1UL,1L,0x280994B5L,0UL},{-1L,4294967295UL,0x4609L,0x859E1A4AL,0xEA49690EL,0x9FD9L}},{18446744073709551607UL,0x9CL,{-1L,0x39AB638AL,65535UL,0xDE9811BDL,5UL,0x03A9L},{0x05L,0UL,0UL,1L,4294967295UL,1UL}},{2UL,0xFDL,{-7L,0x21D4D0FEL,9UL,0xB41BE91CL,0x2B804273L,0xB404L},{1L,4294967286UL,7UL,0xB5DDB26FL,1UL,0UL}}},{{0x5F462134L,0x20L,{0x88L,1UL,0x93F4L,1L,4294967286UL,0UL},{0xD4L,0x318351E6L,7UL,0x46A354F2L,0x75EC04E3L,0x6975L}},{18446744073709551607UL,0x9CL,{-1L,0x39AB638AL,65535UL,0xDE9811BDL,5UL,0x03A9L},{0x05L,0UL,0UL,1L,4294967295UL,1UL}},{0x5F462134L,0x20L,{0x88L,1UL,0x93F4L,1L,4294967286UL,0UL},{0xD4L,0x318351E6L,7UL,0x46A354F2L,0x75EC04E3L,0x6975L}},{0xA396C6ECL,-6L,{0xD2L,0x7C25F3ADL,65535UL,1L,8UL,0UL},{-3L,4294967295UL,65526UL,9L,5UL,65535UL}}}};
    int32_t l_1639 = 0xD6F9C232L;
    int32_t l_1641 = 0xC8CEAAF2L;
    int32_t l_1642 = 0x6FE6C8CEL;
    int32_t l_1643 = 0x7991AD47L;
    int32_t l_1644 = 0x4D070B1DL;
    int32_t l_1645 = (-1L);
    int16_t l_1646 = 0xCC08L;
    const int32_t l_1650 = 0L;
    int32_t **l_1651 = &l_6;
    int i, j;
    ++g_11;
    for (g_3 = 0; (g_3 == 19); g_3 = safe_add_func_uint16_t_u_u(g_3, 2))
    { 
        struct S0 l_1053 = {0x15L,4294967287UL,65535UL,0x2D4DB77FL,4294967288UL,0xA050L};
        struct S3 *l_1611 = &g_227;
        int32_t *l_1637[6][5][1] = {{{&g_52},{&g_52},{&g_56[5]},{(void*)0},{(void*)0}},{{(void*)0},{&g_1546.f3},{&g_1546.f3},{&g_1546.f3},{(void*)0}},{{(void*)0},{(void*)0},{&g_56[5]},{&g_52},{&g_52}},{{&g_56[5]},{(void*)0},{(void*)0},{(void*)0},{&g_1546.f3}},{{&g_1546.f3},{&g_1546.f3},{(void*)0},{(void*)0},{(void*)0}},{{&g_56[5]},{&g_52},{&g_52},{&g_56[5]},{(void*)0}}};
        int8_t l_1638[1][7] = {{(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L)}};
        int16_t l_1640 = 0x74E4L;
        int i, j, k;
    }
    (*l_1651) = func_30(l_1650, (*g_1057));
    return (*l_2);
}



static struct S2 * func_16(const struct S3  p_17, uint32_t  p_18, struct S2 * p_19, struct S5  p_20)
{ 
    uint8_t l_1615 = 251UL;
    union U9 *l_1620 = &g_565;
    int32_t *l_1629 = &g_89.f2.f3;
    int32_t l_1630 = 0x20B50F6BL;
    int32_t l_1631 = 0x5D177CCEL;
    int32_t *l_1632[5];
    int16_t l_1633 = (-1L);
    uint32_t l_1634 = 0xF19195C5L;
    int i;
    for (i = 0; i < 5; i++)
        l_1632[i] = &g_1546.f3;
    l_1631 &= (l_1615 <= ((l_1630 &= ((safe_div_func_uint8_t_u_u((p_20.f3.f1 == (safe_mod_func_uint16_t_u_u(((*g_1506) == l_1620), (safe_add_func_uint8_t_u_u(l_1615, (safe_mod_func_uint64_t_u_u((safe_mod_func_uint8_t_u_u((((*g_536) |= (((*l_1629) = (((safe_lshift_func_uint8_t_u_u((p_20.f3 , ((*g_1074) = (p_17.f0 != 4294967295UL))), 6)) >= l_1615) >= p_20.f3.f1)) , p_18)) || 5L), 5UL)), l_1615))))))), 5L)) || 0L)) == l_1615));
    l_1634--;
    return p_19;
}



static const struct S3  func_21(uint8_t  p_22, union U6  p_23, struct S1  p_24, uint8_t  p_25)
{ 
    const uint64_t l_1552 = 0x7E32A6A330A670B9LL;
    struct S4 *l_1555 = &g_369;
    struct S1 **l_1576 = &g_1490;
    int32_t l_1589 = 0L;
    int32_t l_1590 = (-1L);
    int32_t l_1592 = 0x34BE2792L;
    int32_t l_1593 = 0x52A3F6D8L;
    int32_t l_1595 = (-1L);
    int32_t l_1597[7][6][3] = {{{(-3L),(-1L),(-2L)},{0x31931129L,0x04DB26CEL,(-6L)},{0x9BD509D3L,1L,0x132E132AL},{0L,0x9B5D21B3L,(-6L)},{0x9B5D21B3L,3L,(-1L)},{(-1L),0xAD2B11CAL,1L}},{{0x392940F2L,0xAD2B11CAL,0xCFAF74D0L},{(-6L),3L,0x311A75AEL},{8L,0x9B5D21B3L,0x31931129L},{0x69082BDDL,1L,0x51B93FA1L},{0x04DB26CEL,0x04DB26CEL,0L},{0x71C577CEL,(-1L),(-10L)}},{{(-1L),0L,3L},{(-6L),0x88D5A464L,0xDE330F9DL},{2L,(-1L),3L},{0x781FDA1BL,0x06609376L,(-10L)},{1L,1L,0L},{3L,2L,0x51B93FA1L}},{{0xCA8308BAL,0x3155AD21L,0x31931129L},{(-1L),0xCA8308BAL,0x311A75AEL},{0x535FE491L,0x6700739FL,0xCFAF74D0L},{(-2L),(-10L),1L},{(-2L),0x311A75AEL,(-1L)},{0x535FE491L,0x781FDA1BL,(-6L)}},{{(-1L),(-1L),0x132E132AL},{0xCA8308BAL,(-6L),(-6L)},{3L,0x69082BDDL,(-2L)},{1L,0x48BDADE9L,0x88D5A464L},{0x781FDA1BL,(-1L),2L},{2L,(-1L),0x6700739FL}},{{(-6L),(-1L),0x3283F49AL},{(-1L),0x48BDADE9L,0x06609376L},{0x71C577CEL,0x69082BDDL,0x9BD509D3L},{0x04DB26CEL,(-6L),(-1L)},{0x69082BDDL,(-1L),(-1L)},{8L,0x781FDA1BL,0x3155AD21L}},{{(-6L),0x311A75AEL,(-1L)},{0x392940F2L,(-10L),(-1L)},{(-1L),0x6700739FL,0x3155AD21L},{0x9B5D21B3L,0xCA8308BAL,(-1L)},{0L,0x3155AD21L,(-1L)},{0x9BD509D3L,2L,0x9BD509D3L}}};
    uint8_t l_1604 = 0xD8L;
    const struct S3 l_1610 = {0xFDAC63D9L,2L,0xE2C5L,0x4581878DL};
    int i, j, k;
    for (g_591.f0.f3 = 3; (g_591.f0.f3 == 12); ++g_591.f0.f3)
    { 
        int32_t *l_1542 = &g_56[2];
        struct S3 l_1545 = {5L,0xA40AL,0x4564L,0xADB3E954L};
        int32_t l_1579 = 0x5F99CDAAL;
        int32_t l_1580 = (-1L);
        int32_t l_1585 = (-1L);
        int32_t l_1586 = (-1L);
        int32_t l_1594 = 0x494699A0L;
        int32_t l_1600 = 1L;
        int32_t l_1601 = (-9L);
        int32_t l_1603 = 0xF912E19CL;
        (***g_304) = l_1542;
        for (g_89.f1 = 0; (g_89.f1 <= 22); g_89.f1 = safe_add_func_int8_t_s_s(g_89.f1, 8))
        { 
            uint32_t l_1575[6] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
            int32_t l_1578 = 0x51DD4960L;
            int32_t l_1581 = 0x2FC9771DL;
            int32_t l_1588 = 0xE2BC541FL;
            int32_t l_1602 = (-9L);
            int i;
            for (g_1168 = 6; (g_1168 >= 0); g_1168 -= 1)
            { 
                const uint32_t l_1547 = 0UL;
                struct S3 **l_1551 = (void*)0;
                struct S3 ***l_1550 = &l_1551;
                int32_t *l_1554 = &l_1545.f3;
                int32_t l_1583 = 3L;
                int32_t l_1584 = 4L;
                int32_t l_1587 = 0xC1DCA97EL;
                int32_t l_1591 = (-1L);
                int32_t l_1598 = 0xB91BC244L;
                int32_t l_1599[1][5][5] = {{{0x2415D494L,0x2415D494L,1L,0x2415D494L,0x2415D494L},{(-10L),0L,(-10L),(-10L),0L},{0x2415D494L,1L,1L,0x2415D494L,1L},{(-10L),(-10L),0L,(-10L),(-10L)},{1L,1L,1L,1L,1L}}};
                int i, j, k;
                g_1546 = ((*g_226) = l_1545);
            }
        }
    }
    return l_1610;
}



static uint8_t  func_26(int32_t * p_27, struct S0  p_28, int8_t * p_29)
{ 
    struct S4 *l_1055 = &g_369;
    int32_t l_1084 = 0L;
    int32_t l_1089 = (-4L);
    int32_t l_1093 = 0x6BC838A1L;
    int32_t l_1095 = 0xD8EE84B1L;
    int32_t l_1097[3][1];
    uint16_t l_1109 = 2UL;
    int16_t l_1127 = 3L;
    union U6 l_1138 = {-8L};
    union U9 *l_1165[1][5][4] = {{{(void*)0,&g_565,&g_565,(void*)0},{&g_565,(void*)0,&g_565,&g_565},{(void*)0,(void*)0,&g_565,(void*)0},{(void*)0,&g_565,&g_565,(void*)0},{&g_565,(void*)0,&g_565,&g_565}}};
    union U9 **l_1164 = &l_1165[0][2][1];
    int32_t l_1169 = 0x6D82FFDBL;
    int32_t l_1170 = 0xFAFD13ECL;
    uint32_t l_1195[2];
    struct S0 l_1202[4] = {{0xCFL,0x609957CFL,0xF169L,0xD97EB838L,0UL,0xFC33L},{0xCFL,0x609957CFL,0xF169L,0xD97EB838L,0UL,0xFC33L},{0xCFL,0x609957CFL,0xF169L,0xD97EB838L,0UL,0xFC33L},{0xCFL,0x609957CFL,0xF169L,0xD97EB838L,0UL,0xFC33L}};
    struct S5 l_1226[3] = {{1UL,0x25L,{3L,4294967287UL,0xCC21L,0x00FCF246L,0UL,0x2622L},{-1L,0x84B22D9BL,1UL,-10L,0xC4D5B5B6L,0x0D5FL}},{1UL,0x25L,{3L,4294967287UL,0xCC21L,0x00FCF246L,0UL,0x2622L},{-1L,0x84B22D9BL,1UL,-10L,0xC4D5B5B6L,0x0D5FL}},{1UL,0x25L,{3L,4294967287UL,0xCC21L,0x00FCF246L,0UL,0x2622L},{-1L,0x84B22D9BL,1UL,-10L,0xC4D5B5B6L,0x0D5FL}}};
    int32_t l_1259 = 0L;
    uint32_t l_1260 = 0x65B1077EL;
    struct S2 * const l_1280 = &g_591;
    int16_t l_1293 = 3L;
    uint16_t **l_1302[1];
    int32_t l_1313 = 5L;
    struct S3 **l_1333[7] = {&g_226,&g_226,&g_226,&g_226,&g_226,&g_226,&g_226};
    int32_t l_1383 = (-10L);
    const int64_t l_1409 = 0xA6CDBF5CDB3B9A7ALL;
    uint16_t l_1429 = 0x8FD2L;
    uint32_t l_1459 = 0x57E69E3EL;
    uint8_t l_1461[2];
    union U7 *l_1501[7][5][7] = {{{(void*)0,&g_243,&g_240,(void*)0,(void*)0,&g_243,(void*)0},{&g_240,&g_240,(void*)0,(void*)0,(void*)0,(void*)0,&g_240},{&g_243,&g_240,&g_240,(void*)0,&g_243,(void*)0,&g_240},{&g_243,(void*)0,&g_243,&g_240,&g_240,&g_243,(void*)0},{&g_243,&g_243,(void*)0,(void*)0,&g_243,&g_243,&g_243}},{{&g_240,(void*)0,&g_240,&g_240,&g_240,(void*)0,&g_240},{&g_243,&g_240,&g_243,&g_240,&g_240,&g_243,&g_240},{(void*)0,(void*)0,&g_240,&g_240,&g_240,&g_243,&g_243},{&g_240,&g_240,&g_243,&g_240,(void*)0,&g_243,&g_243},{&g_243,&g_243,&g_240,&g_243,&g_240,&g_243,&g_240}},{{&g_240,&g_240,(void*)0,&g_243,&g_243,&g_243,&g_240},{&g_240,&g_243,&g_243,&g_243,&g_240,&g_243,&g_240},{&g_240,&g_240,&g_240,&g_243,&g_243,&g_240,&g_243},{&g_240,(void*)0,(void*)0,&g_243,&g_243,&g_243,&g_243},{&g_243,&g_243,&g_240,&g_240,&g_243,&g_240,&g_240}},{{&g_240,&g_243,&g_243,&g_243,&g_240,&g_243,&g_240},{&g_240,(void*)0,&g_243,&g_243,&g_243,(void*)0,(void*)0},{&g_243,&g_243,&g_243,&g_240,&g_240,(void*)0,&g_243},{&g_240,&g_240,&g_240,&g_243,&g_243,&g_240,&g_243},{&g_243,&g_243,&g_243,&g_243,&g_240,&g_240,&g_243}},{{(void*)0,&g_240,&g_243,&g_243,(void*)0,&g_243,(void*)0},{&g_243,&g_240,&g_240,(void*)0,(void*)0,&g_243,&g_240},{&g_243,(void*)0,&g_240,(void*)0,&g_240,(void*)0,&g_240},{&g_243,&g_243,&g_243,(void*)0,&g_243,&g_243,(void*)0},{&g_240,&g_243,&g_240,&g_243,&g_243,&g_240,&g_243}},{{&g_240,&g_243,(void*)0,&g_240,&g_243,(void*)0,&g_240},{&g_240,&g_240,(void*)0,&g_240,&g_240,&g_243,&g_240},{&g_243,&g_240,&g_243,(void*)0,(void*)0,&g_243,&g_243},{(void*)0,&g_243,(void*)0,&g_243,&g_240,(void*)0,&g_243},{&g_240,&g_243,(void*)0,&g_240,&g_243,&g_243,&g_240}},{{&g_240,&g_243,&g_240,&g_243,&g_240,&g_240,&g_243},{&g_240,&g_243,&g_240,(void*)0,&g_243,&g_240,&g_240},{&g_243,&g_243,&g_243,(void*)0,&g_240,&g_240,(void*)0},{&g_243,&g_243,(void*)0,&g_243,&g_243,&g_240,&g_243},{&g_243,&g_240,&g_243,&g_243,&g_243,&g_240,&g_240}}};
    int8_t l_1532 = 0x1CL;
    uint32_t l_1533 = 0xF2C33842L;
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_1097[i][j] = 0x53A05BEEL;
    }
    for (i = 0; i < 2; i++)
        l_1195[i] = 0xB54AF3F1L;
    for (i = 0; i < 1; i++)
        l_1302[i] = &g_965;
    for (i = 0; i < 2; i++)
        l_1461[i] = 0UL;
lbl_1062:
    (***g_304) = p_27;
    for (g_820 = 0; (g_820 <= 1); g_820 += 1)
    { 
        struct S3 **l_1068[2];
        struct S3 ** const *l_1067 = &l_1068[0];
        uint8_t **l_1076 = &g_1074;
        int32_t l_1086 = 0x29282060L;
        int32_t l_1088[4][7] = {{6L,0x6AE29F9CL,0L,6L,0L,0x6AE29F9CL,6L},{0L,6L,0x6AE29F9CL,0L,6L,0L,0x6AE29F9CL},{6L,6L,0L,(-1L),0xB62353A0L,0L,0xB62353A0L},{(-1L),0x6AE29F9CL,0x6AE29F9CL,(-1L),0L,0L,(-1L)}};
        int32_t l_1105 = 8L;
        int32_t *l_1121 = (void*)0;
        int32_t *l_1122 = &l_1086;
        int32_t *l_1123 = &l_1097[0][0];
        int32_t *l_1124 = &g_593.f0;
        int32_t *l_1125[1][7] = {{&g_593.f0,&g_593.f0,&g_593.f0,&g_593.f0,&g_593.f0,&g_593.f0,&g_593.f0}};
        int32_t l_1126 = 1L;
        int16_t l_1128 = 8L;
        int32_t l_1129 = 1L;
        int8_t l_1142[1];
        int32_t l_1190 = (-1L);
        int32_t l_1301 = 1L;
        const union U8 l_1342 = {0};
        int64_t l_1344 = 1L;
        int i, j;
        for (i = 0; i < 2; i++)
            l_1068[i] = &g_226;
        for (i = 0; i < 1; i++)
            l_1142[i] = 1L;
        for (g_357 = 0; (g_357 >= 0); g_357 -= 1)
        { 
            struct S4 **l_1056[7];
            struct S5 l_1072[2][5] = {{{3UL,-1L,{0xABL,0x91604780L,0xFA76L,0L,4294967295UL,0UL},{0x9AL,0xCB9FE795L,1UL,0xE13DD5E7L,0x3F7AE5FEL,65535UL}},{3UL,-1L,{0xABL,0x91604780L,0xFA76L,0L,4294967295UL,0UL},{0x9AL,0xCB9FE795L,1UL,0xE13DD5E7L,0x3F7AE5FEL,65535UL}},{3UL,-1L,{0xABL,0x91604780L,0xFA76L,0L,4294967295UL,0UL},{0x9AL,0xCB9FE795L,1UL,0xE13DD5E7L,0x3F7AE5FEL,65535UL}},{3UL,-1L,{0xABL,0x91604780L,0xFA76L,0L,4294967295UL,0UL},{0x9AL,0xCB9FE795L,1UL,0xE13DD5E7L,0x3F7AE5FEL,65535UL}},{3UL,-1L,{0xABL,0x91604780L,0xFA76L,0L,4294967295UL,0UL},{0x9AL,0xCB9FE795L,1UL,0xE13DD5E7L,0x3F7AE5FEL,65535UL}}},{{0xD93297EEL,-5L,{0xA2L,0x9CF13907L,0x206FL,0L,6UL,0x9385L},{-8L,1UL,0x265EL,0x556D5055L,0x0A26251AL,0x229FL}},{0xD93297EEL,-5L,{0xA2L,0x9CF13907L,0x206FL,0L,6UL,0x9385L},{-8L,1UL,0x265EL,0x556D5055L,0x0A26251AL,0x229FL}},{0xD93297EEL,-5L,{0xA2L,0x9CF13907L,0x206FL,0L,6UL,0x9385L},{-8L,1UL,0x265EL,0x556D5055L,0x0A26251AL,0x229FL}},{0xD93297EEL,-5L,{0xA2L,0x9CF13907L,0x206FL,0L,6UL,0x9385L},{-8L,1UL,0x265EL,0x556D5055L,0x0A26251AL,0x229FL}},{0xD93297EEL,-5L,{0xA2L,0x9CF13907L,0x206FL,0L,6UL,0x9385L},{-8L,1UL,0x265EL,0x556D5055L,0x0A26251AL,0x229FL}}}};
            uint8_t **l_1077 = &g_1074;
            int32_t l_1085 = 0x42C8EB7CL;
            int32_t l_1087 = (-7L);
            int32_t l_1090 = 0x5FC10B98L;
            int32_t l_1091 = 0x5DBD06E3L;
            int32_t l_1092 = (-7L);
            int32_t l_1096 = 0xE7D8C551L;
            int32_t l_1098 = 0xCFE86FFFL;
            int32_t l_1099 = 0xBDD7C3BBL;
            int32_t l_1100 = 0xA6EA4277L;
            int32_t l_1101 = 0x50586075L;
            int32_t l_1102 = 0x26C63AFDL;
            int32_t l_1103 = 1L;
            int32_t l_1104 = (-8L);
            int32_t l_1106 = 0xAD2F7FF6L;
            int32_t l_1107 = 0xB3E6BE70L;
            uint32_t l_1115 = 0x0C0FBEC4L;
            int i, j;
            for (i = 0; i < 7; i++)
                l_1056[i] = &l_1055;
            g_1057 = l_1055;
            if (g_56[(g_357 + 2)])
                continue;
            for (g_89.f2.f4 = 0; (g_89.f2.f4 <= 1); g_89.f2.f4 += 1)
            { 
                struct S4 *l_1059[4];
                int64_t ** const **l_1061[7] = {&g_774,&g_774,&g_774,&g_774,&g_774,&g_774,&g_774};
                int32_t *l_1081 = &g_56[2];
                int32_t *l_1082 = &g_227.f3;
                int32_t *l_1083[1];
                int8_t l_1094 = (-3L);
                int16_t l_1108 = 2L;
                int i;
                for (i = 0; i < 4; i++)
                    l_1059[i] = &g_1060;
                for (i = 0; i < 1; i++)
                    l_1083[i] = &g_56[(g_89.f2.f4 + 3)];
                l_1059[2] = &g_369;
                l_1061[3] = &g_774;
                for (g_591.f1 = 0; (g_591.f1 <= 1); g_591.f1 += 1)
                { 
                    struct S3 ** const **l_1069 = (void*)0;
                    struct S3 ** const **l_1070 = &l_1067;
                    int16_t **l_1071 = &g_536;
                    uint8_t ***l_1075[2][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
                    int i, j, k;
                    if (g_820)
                        goto lbl_1062;
                    g_56[(g_591.f1 + 3)] |= ((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((((*l_1070) = l_1067) != (void*)0), 2)), (&g_917 != ((*l_1071) = &g_917)))) == (g_438 , ((((l_1072[0][4] , (*p_29)) <= 0xE4L) && p_28.f5) < g_369.f0)));
                    g_56[(g_89.f2.f4 + 1)] &= 1L;
                    l_1077 = (l_1076 = (((g_227.f1 && g_218) >= g_74[1].f1) , g_1073));
                    p_27 = p_27;
                }
                for (g_565.f0 = 0; (g_565.f0 <= 0); g_565.f0 += 1)
                { 
                    struct S2 ***l_1078[3];
                    struct S2 ****l_1079 = (void*)0;
                    struct S2 ****l_1080 = &l_1078[2];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1078[i] = (void*)0;
                    (*l_1080) = l_1078[2];
                }
                l_1109++;
                for (g_977.f0.f0 = 1; (g_977.f0.f0 >= 0); g_977.f0.f0 -= 1)
                { 
                    int64_t l_1112 = (-1L);
                    int32_t l_1113 = 0x0D61877FL;
                    int64_t l_1114 = (-1L);
                    uint32_t *l_1118 = &g_99.f0.f4;
                    ++l_1115;
                    (**g_305) = &l_1086;
                    if (l_1088[3][0])
                        continue;
                    (*l_1082) = ((--(*l_1118)) > 0x26CAD639L);
                }
            }
        }
        ++g_1130;
    }
    if (((*p_27) = l_1226[1].f2.f1))
    { 
        int16_t l_1352 = 0L;
        union U9 **l_1355 = &l_1165[0][2][1];
        int8_t *l_1360 = &g_1192;
        struct S4 * const l_1382[4] = {&g_1060,&g_1060,&g_1060,&g_1060};
        struct S5 *l_1386 = &l_1226[0];
        int32_t l_1417 = 1L;
        int32_t l_1423[7][4] = {{4L,0x5B753F35L,0L,1L},{0L,1L,0xDC27924EL,1L},{(-1L),0x5B753F35L,0x8C67F9B5L,0L},{0x0D638190L,7L,1L,0x733566CEL},{0x8C67F9B5L,(-1L),0x023E03DEL,0x023E03DEL},{0x8C67F9B5L,0x8C67F9B5L,1L,4L},{0x0D638190L,0x023E03DEL,0x8C67F9B5L,7L}};
        uint64_t l_1434[2][2] = {{0x2068C4B5AFF47759LL,0x2068C4B5AFF47759LL},{0x2068C4B5AFF47759LL,0x2068C4B5AFF47759LL}};
        struct S3 l_1443 = {-1L,0x9D60L,0x4125L,-1L};
        uint32_t l_1466[1][5] = {{7UL,7UL,7UL,7UL,7UL}};
        const union U7 *l_1500 = &g_240;
        uint32_t *l_1528 = (void*)0;
        uint32_t *l_1529 = (void*)0;
        int i, j;
        (*p_27) = ((((*l_1360) = ((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s((l_1352 , (safe_lshift_func_int16_t_s_s(((l_1355 != &g_564) & l_1352), 12))), (!((l_1259 &= ((((*g_1054) ^= ((++(**g_964)) >= 0xED87L)) & (p_28.f0 = l_1352)) == (+(-6L)))) == p_28.f5)))), p_28.f1)) && (*g_1335))) & l_1260) , l_1259);
        for (p_28.f3 = 1; (p_28.f3 >= 0); p_28.f3 -= 1)
        { 
            union U9 l_1375[1] = {{0L}};
            int32_t l_1415 = 0x9F5143C8L;
            int32_t l_1416 = (-3L);
            int32_t l_1420 = 0xCB2B26B3L;
            int32_t l_1421[3][2][3] = {{{0x9D6D262BL,(-9L),0x884AB139L},{0x9D6D262BL,0x9D6D262BL,(-9L)}},{{0x797A7870L,(-9L),(-9L)},{(-9L),0x84F08E9DL,0x884AB139L}},{{0x797A7870L,0x84F08E9DL,0x797A7870L},{0x9D6D262BL,(-9L),0x884AB139L}}};
            int32_t l_1425 = 0xD48E17FFL;
            union U9 * const ** const **l_1508 = &g_1504;
            struct S3 l_1522 = {3L,0x0705L,5L,1L};
            struct S5 l_1523 = {1UL,0x29L,{0x06L,0x441F937CL,65535UL,0x0BC1695EL,0x116CB444L,0x7C25L},{2L,3UL,1UL,-10L,1UL,0UL}};
            int i, j, k;
        }
        (*g_226) = (*g_226);
        (*p_27) = ((0x108C81BEL >= 0xC05D3264L) < (p_28.f4 == 0xDAL));
    }
    else
    { 
        int32_t *l_1530 = &l_1313;
        int32_t *l_1531[7];
        int i;
        for (i = 0; i < 7; i++)
            l_1531[i] = &l_1084;
        --l_1533;
        g_1536[0][4][2] = g_1536[0][4][2];
        return p_28.f2;
    }
    return (*g_1074);
}



static int32_t * func_30(const uint32_t  p_31, struct S4  p_32)
{ 
    uint32_t *l_40 = (void*)0;
    int32_t l_41 = (-9L);
    int32_t l_42 = 0x5CFE74D0L;
    const union U9 l_46 = {-5L};
    const struct S4 l_50 = {2UL,{0xACL,4294967295UL,65535UL,-5L,7UL,0x4DB7L}};
    uint32_t **l_623 = &l_40;
    struct S2 *l_976 = &g_977;
    struct S3 l_1024 = {0x305880F1L,0xE834L,5L,0x6ED4D303L};
    struct S5 *l_1039 = &g_89;
    int32_t *l_1052 = &g_52;
    if ((((((((safe_mul_func_uint8_t_u_u(func_36(((l_41 |= p_32.f1.f0) ^ l_42), func_43(l_46, ((*l_623) = func_47(p_32.f1, (g_11 , l_50)))), l_976), l_50.f1.f1)) ^ p_32.f1.f1) , &l_41) != &l_42) , (-4L)) < (-7L)) != l_50.f0))
    { 
        struct S2 * const l_1000 = &g_977;
        int32_t l_1001[4][4][1] = {{{(-1L)},{0L},{2L},{0L}},{{2L},{0L},{(-1L)},{0L}},{{2L},{0L},{2L},{0L}},{{(-1L)},{0L},{2L},{0L}}};
        int32_t l_1002 = 0L;
        int32_t l_1003 = 6L;
        uint8_t *l_1023 = &g_643;
        uint8_t * const *l_1022 = &l_1023;
        int32_t *l_1028 = &l_42;
        int i, j, k;
        for (g_977.f1 = (-27); (g_977.f1 >= 8); g_977.f1 = safe_add_func_int8_t_s_s(g_977.f1, 3))
        { 
            uint8_t l_988[7] = {0xFAL,0xFAL,0xFAL,0xFAL,0xFAL,0xFAL,0xFAL};
            struct S5 *****l_1015 = (void*)0;
            int i;
            if ((1UL <= ((safe_sub_func_uint8_t_u_u((((safe_div_func_int16_t_s_s((l_988[2] < (safe_add_func_int32_t_s_s((l_1001[1][2][0] = (l_1002 &= ((safe_lshift_func_uint8_t_u_u((+(safe_add_func_int8_t_s_s(p_32.f1.f0, (p_32.f1.f2 == ((safe_sub_func_int8_t_s_s((p_32.f1.f1 >= l_50.f1.f1), (&g_99 == l_1000))) >= l_1001[1][2][0]))))), 1)) & l_988[2]))), p_31))), l_1003)) <= p_32.f1.f4) & g_750.f1.f0), l_988[4])) <= l_988[2])))
            { 
                int32_t *l_1004 = &g_56[2];
                struct S5 **** const l_1017 = &g_921;
                struct S5 **** const *l_1016 = &l_1017;
                (*l_1004) |= 0xCD671672L;
                for (g_89.f3.f1 = (-10); (g_89.f3.f1 != 20); g_89.f3.f1 = safe_add_func_int64_t_s_s(g_89.f3.f1, 5))
                { 
                    struct S5 ****l_1014[5][4] = {{&g_921,&g_921,&g_921,&g_921},{(void*)0,&g_921,&g_921,&g_921},{&g_921,&g_921,&g_921,&g_921},{(void*)0,(void*)0,&g_921,&g_921},{&g_921,&g_921,&g_921,&g_921}};
                    struct S5 *****l_1013 = &l_1014[1][3];
                    int i, j;
                    (*l_1004) = (safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(((((safe_add_func_uint64_t_u_u(0x21DECC5F5BD8DC6FLL, ((*g_564) , g_99.f1))) && ((((l_988[2] , ((l_1015 = l_1013) == l_1016)) > ((*g_131) = ((safe_lshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s((((void*)0 == &l_46) && g_750.f1.f4), 0xD8L)), l_1001[3][0][0])) | 0L))) , l_1022) == (void*)0)) | p_32.f1.f1) != 1UL), 7)), p_31));
                    (*g_226) = l_1024;
                }
            }
            else
            { 
                struct S1 *l_1026 = &g_273[0][0][3];
                struct S1 **l_1025 = &l_1026;
                int32_t l_1027 = 7L;
                (*l_1025) = &g_273[0][4][2];
                if (l_1027)
                    break;
            }
            l_1028 = &l_41;
        }
    }
    else
    { 
        int64_t l_1034 = 7L;
        union U6 l_1046 = {0xF633C997L};
        for (g_565.f1 = 0; (g_565.f1 != 7); g_565.f1++)
        { 
            uint8_t *l_1042 = (void*)0;
            uint8_t *l_1043 = &g_643;
            int32_t *l_1048 = (void*)0;
            l_1046.f0 = (((((safe_add_func_uint64_t_u_u((!l_1034), (safe_lshift_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_s(((void*)0 != l_1039), 11)) || (safe_rshift_func_uint8_t_u_s(((*l_1043)--), 4))) >= p_32.f1.f3), 1)))) < ((((g_1047 = ((*g_921) != (l_1046 , ((*g_937) , (*g_921))))) || g_591.f0.f0) >= l_1046.f0) ^ p_32.f1.f1)) >= (*g_965)) && (-8L)) ^ g_750.f1.f3);
        }
    }
    for (g_157 = 0; (g_157 >= (-7)); g_157 = safe_sub_func_uint8_t_u_u(g_157, 1))
    { 
        int32_t *l_1051 = &g_593.f0;
        return l_1051;
    }
    return l_1052;
}



static uint8_t  func_36(uint16_t  p_37, struct S3  p_38, struct S2 * p_39)
{ 
    const union U9 l_978 = {0x0F87L};
    struct S3 l_979 = {0x91F911BAL,-6L,0x02BCL,-10L};
    p_38 = l_979;
    return p_38.f0;
}



static struct S3  func_43(const union U9  p_44, uint32_t * p_45)
{ 
    uint16_t l_628 = 0x829AL;
    int32_t **l_629 = &g_76;
    uint64_t *l_632 = &g_565.f1;
    uint64_t *l_633 = &g_565.f1;
    uint64_t *l_634 = &g_565.f1;
    uint64_t *l_635[5][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t l_636[6][5][4] = {{{(-2L),4L,0xC81C10B1L,(-4L)},{(-1L),0L,0xA446F08CL,0x9331F4B8L},{0xC9743626L,0xFFF04D0CL,0L,0x0CB53024L},{0x28EC8B84L,(-1L),0xD4E1A4EDL,1L},{1L,(-8L),0x52F7C598L,0x542D6268L}},{{(-2L),8L,0x9331F4B8L,1L},{1L,0xC9743626L,8L,(-1L)},{0xD4E1A4EDL,0xE4BC7BC7L,0x0CB53024L,0x0CB53024L},{0xE47558EDL,0xE47558EDL,0xC9743626L,0x0C598AADL},{0L,0xE5E908D8L,1L,7L}},{{0x52F7C598L,4L,0x9331F4B8L,1L},{7L,4L,0xDA425B48L,7L},{4L,0xE5E908D8L,0xA446F08CL,0x0C598AADL},{0x28EC8B84L,0xE47558EDL,(-1L),0x0CB53024L},{0x9D79133FL,0xE4BC7BC7L,0L,(-1L)}},{{1L,0xC9743626L,0xC81C10B1L,1L},{7L,8L,0x0C598AADL,0x542D6268L},{0xC81C10B1L,(-8L),8L,1L},{0x858D8B42L,(-1L),0xC9743626L,0x0CB53024L},{0L,0xFFF04D0CL,0x9D79133FL,0x9331F4B8L}},{{0L,0L,4L,(-4L)},{1L,4L,0x0C598AADL,4L},{0x9331F4B8L,(-1L),0xDA425B48L,0xFE8E17DFL},{(-1L),3L,0xD4E1A4EDL,0x0C598AADL},{0x9D79133FL,0xFFF04D0CL,0L,0xC9743626L}},{{0x9D79133FL,7L,0xD4E1A4EDL,0xD82D18D4L},{8L,0L,8L,1L},{(-4L),0xFE0632C5L,0xE4BC7BC7L,(-1L)},{0xD4E1A4EDL,(-1L),0xDC36F86BL,0xE5E908D8L},{0x0C598AADL,0x28EC8B84L,0L,0L}}};
    struct S1 l_637 = {0x80D6D159L,2L,0x95L};
    int32_t *l_638 = &g_593.f0;
    union U6 l_639 = {0x3915F1BCL};
    int64_t l_642 = 1L;
    int64_t l_664 = 1L;
    struct S0 l_669 = {0xE0L,0x2CABAC05L,0UL,1L,0x96659BC5L,0x28B6L};
    uint32_t l_702 = 0x300B86FCL;
    int64_t l_729 = 0x4EA94ACF36620BB8LL;
    struct S3 *l_749[6][7][6] = {{{&g_227,&g_227,&g_227,&g_227,&g_227,&g_227},{&g_227,(void*)0,&g_227,(void*)0,&g_227,(void*)0},{&g_227,(void*)0,&g_227,(void*)0,&g_227,&g_227},{&g_227,&g_227,&g_227,&g_227,(void*)0,(void*)0},{&g_227,(void*)0,(void*)0,(void*)0,(void*)0,&g_227},{&g_227,&g_227,(void*)0,(void*)0,&g_227,&g_227},{&g_227,&g_227,(void*)0,&g_227,&g_227,(void*)0}},{{&g_227,&g_227,&g_227,(void*)0,&g_227,(void*)0},{&g_227,&g_227,&g_227,(void*)0,&g_227,(void*)0},{&g_227,&g_227,&g_227,&g_227,&g_227,&g_227},{&g_227,(void*)0,&g_227,(void*)0,&g_227,(void*)0},{&g_227,(void*)0,&g_227,(void*)0,&g_227,&g_227},{&g_227,&g_227,&g_227,&g_227,(void*)0,(void*)0},{&g_227,(void*)0,(void*)0,(void*)0,(void*)0,&g_227}},{{&g_227,&g_227,(void*)0,(void*)0,&g_227,&g_227},{&g_227,&g_227,(void*)0,&g_227,&g_227,(void*)0},{&g_227,&g_227,&g_227,(void*)0,&g_227,(void*)0},{&g_227,&g_227,&g_227,(void*)0,&g_227,(void*)0},{&g_227,&g_227,&g_227,&g_227,&g_227,&g_227},{&g_227,(void*)0,&g_227,(void*)0,&g_227,(void*)0},{&g_227,(void*)0,&g_227,(void*)0,&g_227,&g_227}},{{&g_227,&g_227,&g_227,&g_227,(void*)0,(void*)0},{&g_227,(void*)0,(void*)0,(void*)0,(void*)0,&g_227},{&g_227,&g_227,(void*)0,(void*)0,&g_227,&g_227},{&g_227,&g_227,(void*)0,&g_227,&g_227,(void*)0},{&g_227,&g_227,&g_227,(void*)0,&g_227,(void*)0},{&g_227,&g_227,&g_227,(void*)0,&g_227,(void*)0},{&g_227,&g_227,&g_227,&g_227,&g_227,&g_227}},{{&g_227,(void*)0,&g_227,(void*)0,&g_227,(void*)0},{(void*)0,(void*)0,(void*)0,&g_227,&g_227,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_227},{(void*)0,&g_227,(void*)0,&g_227,&g_227,&g_227},{(void*)0,&g_227,&g_227,&g_227,(void*)0,&g_227},{(void*)0,(void*)0,&g_227,(void*)0,&g_227,&g_227},{(void*)0,&g_227,&g_227,&g_227,&g_227,(void*)0}},{{(void*)0,(void*)0,&g_227,&g_227,&g_227,&g_227},{(void*)0,&g_227,(void*)0,(void*)0,&g_227,&g_227},{(void*)0,(void*)0,&g_227,&g_227,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&g_227,&g_227,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_227},{(void*)0,&g_227,(void*)0,&g_227,&g_227,&g_227},{(void*)0,&g_227,&g_227,&g_227,(void*)0,&g_227}}};
    int8_t l_758 = 0L;
    uint32_t **l_784 = (void*)0;
    struct S0 *l_785 = &g_74[1].f3;
    int16_t l_815 = 0L;
    union U8 l_817 = {0};
    struct S5 l_846 = {18446744073709551615UL,0x87L,{0x46L,1UL,0xB772L,0xF0233C55L,0x5080A062L,0xBB95L},{0x94L,4294967295UL,65531UL,0L,0x8FF33477L,0xC5BAL}};
    uint8_t l_880[3][5][6] = {{{0xA0L,0xA6L,0xA0L,3UL,0x1EL,0x30L},{0x6EL,0x66L,0x92L,0xA0L,0xA0L,0x92L},{255UL,255UL,0x7BL,0xA0L,0x66L,3UL},{0x6EL,0x7BL,0x30L,3UL,0x30L,0x7BL},{0xA0L,0x6EL,0x30L,0xA7L,255UL,3UL}},{{0x92L,0xA7L,0x7BL,0x7BL,0xA7L,0x92L},{0x7BL,0xA7L,0x92L,0x1EL,255UL,0x30L},{0x30L,0x6EL,0xA0L,0x6EL,0x30L,0xA7L},{0x30L,0x7BL,0x6EL,0x1EL,0x66L,0x66L},{0x7BL,255UL,255UL,0x7BL,0xA0L,0x66L}},{{0x92L,0x66L,0x6EL,0xA7L,0x1EL,0xA7L},{0xA0L,0xA6L,0xA0L,3UL,0x1EL,0x30L},{0x6EL,0x66L,0x92L,0xA0L,0xA0L,0x92L},{255UL,255UL,0x7BL,0xA0L,0x66L,3UL},{0x6EL,0x7BL,0x30L,3UL,0x30L,0x7BL}}};
    int32_t l_915 = (-10L);
    int32_t ***l_962 = &g_75[2];
    int32_t ****l_961 = &l_962;
    int i, j, k;
    (*l_638) = ((safe_sub_func_int64_t_s_s((((safe_sub_func_uint8_t_u_u(l_628, ((((((**g_304) = l_629) == l_629) | g_74[1].f2.f5) | (((l_636[3][2][3] ^= (safe_lshift_func_int8_t_s_s(0x33L, 3))) ^ ((l_637 , p_45) != &g_52)) && (**l_629))) && p_44.f0))) != 0UL) || (**l_629)), (-2L))) ^ 2UL);
    if (((l_639 , (((((*l_638) & g_99.f0.f5) < (**l_629)) == (*l_638)) <= (safe_add_func_uint64_t_u_u(0xB03DC0177AC83042LL, (g_643 ^= ((0xF8745E173DB98C9FLL && 0x1118BE4070A4BBF4LL) || l_642)))))) >= (*l_638)))
    { 
        uint8_t l_646 = 0x86L;
        union U7 **l_656[5][6][7] = {{{&g_242,&g_242,(void*)0,&g_242,&g_242,&g_242,&g_242},{(void*)0,&g_242,(void*)0,&g_242,&g_242,&g_242,&g_242},{&g_242,(void*)0,&g_242,&g_242,&g_242,&g_242,(void*)0},{&g_242,(void*)0,(void*)0,&g_242,&g_242,&g_242,&g_242},{&g_242,(void*)0,&g_242,&g_242,&g_242,&g_242,&g_242},{&g_242,&g_242,&g_242,&g_242,&g_242,&g_242,(void*)0}},{{&g_242,&g_242,(void*)0,&g_242,(void*)0,&g_242,&g_242},{(void*)0,&g_242,&g_242,(void*)0,&g_242,&g_242,(void*)0},{(void*)0,&g_242,(void*)0,(void*)0,&g_242,&g_242,&g_242},{&g_242,&g_242,&g_242,&g_242,&g_242,&g_242,&g_242},{(void*)0,(void*)0,&g_242,&g_242,(void*)0,&g_242,&g_242},{&g_242,&g_242,(void*)0,(void*)0,&g_242,&g_242,(void*)0}},{{&g_242,&g_242,&g_242,&g_242,(void*)0,&g_242,&g_242},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_242,(void*)0},{&g_242,&g_242,&g_242,&g_242,&g_242,&g_242,&g_242},{&g_242,&g_242,(void*)0,&g_242,&g_242,&g_242,&g_242},{&g_242,&g_242,&g_242,(void*)0,&g_242,&g_242,&g_242},{(void*)0,&g_242,&g_242,&g_242,(void*)0,(void*)0,&g_242}},{{&g_242,(void*)0,&g_242,&g_242,&g_242,(void*)0,&g_242},{&g_242,(void*)0,&g_242,&g_242,&g_242,(void*)0,(void*)0},{(void*)0,&g_242,&g_242,(void*)0,&g_242,&g_242,(void*)0},{&g_242,&g_242,&g_242,&g_242,(void*)0,(void*)0,(void*)0},{(void*)0,&g_242,&g_242,&g_242,(void*)0,&g_242,&g_242},{(void*)0,&g_242,&g_242,(void*)0,&g_242,(void*)0,&g_242}},{{&g_242,&g_242,&g_242,&g_242,&g_242,&g_242,(void*)0},{&g_242,(void*)0,(void*)0,&g_242,&g_242,&g_242,&g_242},{&g_242,&g_242,&g_242,&g_242,&g_242,(void*)0,(void*)0},{&g_242,&g_242,(void*)0,&g_242,&g_242,(void*)0,(void*)0},{(void*)0,&g_242,&g_242,(void*)0,(void*)0,&g_242,(void*)0},{&g_242,(void*)0,(void*)0,&g_242,(void*)0,&g_242,&g_242}}};
        union U7 ***l_655 = &l_656[1][4][6];
        union U7 **l_658[7][6][5] = {{{&g_242,&g_242,&g_242,&g_242,&g_242},{(void*)0,&g_242,(void*)0,&g_242,&g_242},{&g_242,&g_242,&g_242,&g_242,(void*)0},{&g_242,&g_242,(void*)0,&g_242,&g_242},{&g_242,&g_242,&g_242,&g_242,&g_242},{&g_242,(void*)0,&g_242,&g_242,(void*)0}},{{&g_242,&g_242,&g_242,(void*)0,&g_242},{&g_242,&g_242,&g_242,&g_242,(void*)0},{&g_242,&g_242,&g_242,&g_242,&g_242},{&g_242,&g_242,&g_242,&g_242,&g_242},{(void*)0,&g_242,(void*)0,&g_242,&g_242},{&g_242,&g_242,(void*)0,&g_242,&g_242}},{{&g_242,&g_242,&g_242,&g_242,&g_242},{&g_242,&g_242,(void*)0,&g_242,(void*)0},{&g_242,(void*)0,(void*)0,(void*)0,&g_242},{&g_242,&g_242,(void*)0,&g_242,(void*)0},{&g_242,&g_242,&g_242,&g_242,&g_242},{&g_242,&g_242,&g_242,(void*)0,&g_242}},{{&g_242,&g_242,&g_242,&g_242,(void*)0},{&g_242,&g_242,(void*)0,&g_242,&g_242},{(void*)0,&g_242,&g_242,&g_242,&g_242},{&g_242,&g_242,&g_242,(void*)0,&g_242},{&g_242,&g_242,(void*)0,&g_242,&g_242},{&g_242,&g_242,(void*)0,(void*)0,&g_242}},{{&g_242,(void*)0,(void*)0,&g_242,&g_242},{&g_242,&g_242,&g_242,&g_242,&g_242},{&g_242,&g_242,&g_242,(void*)0,&g_242},{&g_242,&g_242,(void*)0,(void*)0,&g_242},{&g_242,&g_242,&g_242,(void*)0,(void*)0},{(void*)0,&g_242,&g_242,&g_242,(void*)0}},{{&g_242,&g_242,&g_242,&g_242,(void*)0},{&g_242,&g_242,(void*)0,(void*)0,(void*)0},{&g_242,&g_242,(void*)0,&g_242,(void*)0},{&g_242,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_242,&g_242,&g_242,(void*)0},{&g_242,&g_242,(void*)0,&g_242,&g_242}},{{&g_242,&g_242,(void*)0,&g_242,&g_242},{&g_242,&g_242,&g_242,(void*)0,&g_242},{(void*)0,(void*)0,&g_242,&g_242,&g_242},{(void*)0,&g_242,&g_242,(void*)0,(void*)0},{&g_242,&g_242,&g_242,(void*)0,&g_242},{(void*)0,&g_242,&g_242,&g_242,&g_242}}};
        union U7 ***l_657 = &l_658[1][0][2];
        uint32_t *l_659[2][7][6] = {{{(void*)0,&g_89.f3.f1,(void*)0,(void*)0,&g_89.f3.f1,(void*)0},{(void*)0,&g_89.f3.f1,(void*)0,(void*)0,&g_89.f3.f1,(void*)0},{(void*)0,&g_89.f3.f1,(void*)0,(void*)0,&g_89.f3.f1,(void*)0},{(void*)0,&g_89.f3.f1,(void*)0,(void*)0,&g_89.f3.f1,(void*)0},{(void*)0,&g_89.f3.f1,(void*)0,(void*)0,&g_89.f3.f1,(void*)0},{(void*)0,&g_89.f3.f1,(void*)0,(void*)0,&g_89.f3.f1,(void*)0},{(void*)0,&g_89.f3.f1,(void*)0,(void*)0,&g_89.f3.f1,(void*)0}},{{(void*)0,&g_89.f3.f1,(void*)0,(void*)0,&g_89.f3.f1,(void*)0},{(void*)0,&g_89.f3.f1,(void*)0,(void*)0,&g_89.f3.f1,(void*)0},{(void*)0,&g_89.f3.f1,(void*)0,(void*)0,&g_89.f3.f1,(void*)0},{(void*)0,&g_89.f3.f1,(void*)0,(void*)0,&g_89.f3.f1,(void*)0},{(void*)0,&g_89.f3.f1,(void*)0,(void*)0,&g_89.f3.f1,(void*)0},{(void*)0,&g_89.f3.f1,(void*)0,(void*)0,&g_89.f3.f1,(void*)0},{(void*)0,&g_89.f3.f1,(void*)0,(void*)0,&g_89.f3.f1,(void*)0}}};
        int32_t l_660[1][7][2] = {{{(-10L),0x886716F6L},{(-10L),0x886716F6L},{(-10L),0x886716F6L},{(-10L),0x886716F6L},{(-10L),0x886716F6L},{(-10L),0x886716F6L},{(-10L),0x886716F6L}}};
        int32_t l_661[3][7][7] = {{{(-1L),0xFBA37C8DL,(-1L),0xF8A296BBL,0x4AF8603FL,8L,(-1L)},{(-3L),0x9C5DCA44L,0L,(-6L),0x4AF8603FL,(-3L),9L},{0L,0x34AA2245L,1L,0x775FD65EL,0x6E97CA2FL,(-1L),(-1L)},{0x164A3EEBL,0x5AD69857L,0x68CBC6C4L,(-6L),(-3L),0xEB213130L,(-3L)},{0x7EC181BBL,(-1L),(-1L),0x7EC181BBL,0L,0xF873CCFCL,0x0F9380E9L},{9L,(-3L),0L,(-1L),0x68CBC6C4L,0L,0x6E97CA2FL},{0x0C82FC14L,(-6L),0L,0x0BA0EC80L,0x0D4871D3L,0x34AA2245L,0x0F9380E9L}},{{0x5E623E76L,0x7EC181BBL,0x6C675847L,0xD761E44EL,0xF8A296BBL,0xBB777FE8L,(-3L)},{(-1L),0xB42413E6L,0x164A3EEBL,0x4AF8603FL,0xF873CCFCL,0xD761E44EL,(-1L)},{0xEB213130L,8L,(-3L),(-1L),0x7EC181BBL,0xFFD8C742L,9L},{0x4EDBAABBL,0xFFD8C742L,0xF3353777L,0xC28C30ADL,(-3L),0xDE14C229L,0xDE14C229L},{8L,(-3L),0L,0L,0xF873CCFCL,(-1L),(-1L)},{(-6L),0L,0xBB777FE8L,0xDE14C229L,(-1L),(-1L),0L},{0xF873CCFCL,0L,0x7EC181BBL,(-1L),(-1L),0x7EC181BBL,0L}},{{0xF3353777L,9L,0xDE14C229L,0x0BA0EC80L,(-1L),0xFFD8C742L,1L},{0L,0L,0xC653C5A4L,9L,0x5E623E76L,0x84BFFFD6L,0x164A3EEBL},{0xFFD8C742L,0xFBA37C8DL,0x5AD69857L,0x0BA0EC80L,0L,0xF8A296BBL,0x6E97CA2FL},{0xC28C30ADL,0x164A3EEBL,(-3L),(-1L),(-1L),0xFBA37C8DL,0x6C675847L},{(-6L),8L,0xB42413E6L,0xDE14C229L,(-1L),0x0BA0EC80L,0x84BFFFD6L},{0xD761E44EL,(-1L),0xC2EC477EL,0L,0x68CBC6C4L,0x0D4871D3L,0xC653C5A4L},{0L,1L,(-3L),0xF873CCFCL,0xBF0EC6EAL,0x0D4871D3L,0xBB777FE8L}}};
        int32_t *l_662[7] = {&l_639.f0,&g_227.f3,&g_227.f3,&l_639.f0,&g_227.f3,&g_227.f3,&l_639.f0};
        int32_t l_663[5][6] = {{0x0B36B46AL,0L,0x8DB9517FL,(-3L),0x41A23BA5L,0x0B36B46AL},{0x0799E4A0L,0L,(-3L),0x0799E4A0L,0x108A0461L,0x0799E4A0L},{0x0799E4A0L,0x108A0461L,0x0799E4A0L,(-3L),0L,0x0799E4A0L},{0x0B36B46AL,0x41A23BA5L,(-3L),0x8DB9517FL,0L,0x0B36B46AL},{(-3L),0x108A0461L,0x8DB9517FL,0x8DB9517FL,0x108A0461L,(-3L)}};
        int8_t l_665 = 0x07L;
        uint64_t l_666 = 0xB7DFA7766680C1EELL;
        int i, j, k;
        l_661[1][5][0] &= (safe_div_func_int16_t_s_s((l_646 <= (l_660[0][6][0] = ((*g_242) , (safe_mod_func_int64_t_s_s(((((**l_629) ^ (((void*)0 == &g_63) < (safe_mod_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((((*l_657) = ((*l_655) = &g_242)) != (void*)0) || 4UL), 5)), (**l_629))), p_44.f0)))) > (*l_638)) && p_44.f0), g_56[5]))))), 1UL));
        l_666--;
    }
    else
    { 
        int32_t l_678 = (-1L);
        int32_t l_679 = (-4L);
        union U9 * const l_681 = &g_565;
        union U9 * const *l_680 = &l_681;
        struct S0 l_684 = {0xAEL,0xD2EA342FL,65535UL,0xDAF1EF7AL,0x36A54955L,65535UL};
        union U8 *l_693 = (void*)0;
        int32_t l_698[5][2] = {{(-7L),8L},{(-7L),8L},{(-7L),8L},{(-7L),8L},{(-7L),8L}};
        int16_t l_699[5][3] = {{(-4L),0x4964L,0x074BL},{0x4CB2L,0x4CB2L,0x074BL},{0x4964L,(-4L),0xD7DAL},{1L,0x4CB2L,1L},{1L,0x4964L,0x4CB2L}};
        union U7 *l_711 = &g_240;
        int64_t **l_722 = &g_359[3][1][0];
        struct S4 l_747 = {0xCD9F7D68L,{4L,0UL,0x20ABL,4L,0x0342D6F3L,1UL}};
        struct S3 l_751 = {1L,0x69CDL,-5L,0xAB28E21FL};
        uint8_t *l_806[5] = {&g_643,&g_643,&g_643,&g_643,&g_643};
        int64_t l_824 = (-1L);
        union U7 l_847 = {-1L};
        const struct S5 l_857 = {9UL,1L,{0xB5L,0UL,0xA397L,0x9520D1BEL,5UL,8UL},{9L,4294967289UL,65526UL,-4L,1UL,0x551EL}};
        struct S5 l_866 = {0xB2B6AE9BL,-1L,{-1L,0x27F1834EL,1UL,-1L,1UL,65535UL},{0x91L,4294967295UL,65535UL,1L,0x8E137C05L,65535UL}};
        uint16_t *l_870[1][2];
        uint16_t **l_869 = &l_870[0][1];
        struct S5 *l_909[2][2][2];
        struct S5 **l_908 = &l_909[0][0][0];
        struct S5 ***l_907[2];
        struct S2 l_963 = {{6L,1UL,0xFEC7L,6L,0x0FD38D12L,0x2198L},0xFBL};
        uint16_t l_973 = 0x1F25L;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_870[i][j] = &g_591.f0.f5;
        }
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 2; k++)
                    l_909[i][j][k] = (void*)0;
            }
        }
        for (i = 0; i < 2; i++)
            l_907[i] = &l_908;
        if ((((**l_629) <= 0x85673EC4L) ^ (p_44.f0 != (l_669 , (safe_div_func_uint64_t_u_u((((safe_mul_func_uint8_t_u_u(p_44.f0, g_621)) ^ ((((safe_mod_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u(((l_678 = 9UL) , g_99.f0.f3), g_643)) < g_74[1].f2.f0), (***g_305))) != p_44.f0) ^ l_679) != p_44.f0)) & p_44.f0), (*g_131)))))))
        { 
            int32_t l_696 = (-6L);
            int32_t l_700 = 0xD52B7940L;
            int32_t l_701 = 0x6693CF7EL;
            int32_t *l_706 = &l_636[0][3][3];
            union U7 **l_739 = &g_242;
            union U7 ***l_738 = &l_739;
            int64_t ** const l_748 = &g_359[3][5][0];
            const int32_t *l_778[3];
            const int32_t **l_777 = &l_778[2];
            int i;
            for (i = 0; i < 3; i++)
                l_778[i] = &g_273[0][4][2].f1;
            if (p_44.f0)
            { 
                uint16_t *l_682 = (void*)0;
                uint16_t *l_683 = &g_70;
                union U8 **l_694 = (void*)0;
                union U8 **l_695[4][1][6] = {{{&g_440,&g_440,&g_440,&g_440,&g_440,&g_440}},{{&g_440,&g_440,&g_440,&g_440,&g_440,&g_440}},{{&g_440,&g_440,&g_440,&g_440,&g_440,&g_440}},{{&g_440,&g_440,&g_440,&g_440,&g_440,&g_440}}};
                int32_t *l_697[3][2][1] = {{{(void*)0},{(void*)0}},{{(void*)0},{(void*)0}},{{(void*)0},{(void*)0}}};
                struct S3 l_705[6] = {{0xC81755F6L,-1L,0x4E18L,0x0FBFF7F0L},{0xC81755F6L,-1L,0x4E18L,0x0FBFF7F0L},{0xC81755F6L,-1L,0x4E18L,0x0FBFF7F0L},{0xC81755F6L,-1L,0x4E18L,0x0FBFF7F0L},{0xC81755F6L,-1L,0x4E18L,0x0FBFF7F0L},{0xC81755F6L,-1L,0x4E18L,0x0FBFF7F0L}};
                int64_t **l_721[7] = {&g_359[3][0][0],&g_359[0][5][0],&g_359[3][0][0],&g_359[3][0][0],&g_359[0][5][0],&g_359[3][0][0],&g_359[3][0][0]};
                union U7 ***l_740 = &l_739;
                int i, j, k;
                (*l_638) = (p_44.f0 | (((*l_683) = (l_678 = (l_680 == (void*)0))) | ((((l_684 , (((((+(safe_sub_func_uint8_t_u_u((+(safe_add_func_int32_t_s_s(((safe_mul_func_int16_t_s_s((((l_693 = l_693) != (void*)0) < (**l_629)), g_89.f3.f1)) ^ (*g_76)), 0L))), l_696))) >= p_44.f0) ^ (*g_536)) ^ 0x85L) | 8UL)) || l_684.f0) ^ p_44.f0) , p_44.f0)));
                l_702--;
                if (l_696)
                { 
                    return l_705[2];
                }
                else
                { 
                    int32_t *l_707 = &l_636[3][2][3];
                    l_707 = (l_706 = &l_701);
                    (*l_638) = (-8L);
                }
                if ((l_705[4] , (safe_mod_func_int8_t_s_s((+p_44.f0), (l_698[3][1] = p_44.f0)))))
                { 
                    union U7 **l_712 = &l_711;
                    uint64_t l_713 = 0xE4B531E9495ADB64LL;
                    struct S4 l_720 = {0UL,{-1L,4294967295UL,0UL,1L,4294967287UL,0x5FCDL}};
                    int64_t ***l_723[1][5] = {{&l_722,&l_722,&l_722,&l_722,&l_722}};
                    int32_t l_728 = 1L;
                    uint32_t *l_736 = (void*)0;
                    uint32_t *l_737 = &l_702;
                    int i, j;
                    (*l_712) = l_711;
                    (*l_706) = ((*l_638) &= (((l_713 | ((((*l_683) &= ((safe_rshift_func_int8_t_s_u(((safe_mod_func_uint64_t_u_u((l_720 , ((*l_632) = (l_721[3] != (g_724 = l_722)))), (((p_44.f0 & (p_44.f0 & (safe_lshift_func_int8_t_s_s((l_728 = (!(-1L))), l_729)))) || p_44.f0) ^ g_243.f3))) >= 0xE7B3A9A6B67AD0FALL), g_89.f3.f0)) || 0UL)) != g_74[1].f3.f0) & (*g_536))) | 1UL) != (*l_706)));
                    (*l_638) = ((*l_706) = (safe_sub_func_uint64_t_u_u(((*l_634) |= 0UL), ((((*l_737) = (safe_mod_func_uint16_t_u_u(1UL, 65535UL))) , (l_738 != l_740)) < ((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((safe_div_func_int64_t_s_s((**l_629), (((l_639 , (void*)0) == (void*)0) , p_44.f0))), p_44.f0)), (**l_629))) > p_44.f0)))));
                    (*l_638) &= p_44.f0;
                    l_706 = func_47(g_99.f0, ((((l_747 , &g_359[3][1][0]) == ((*g_242) , l_748)) >= (&l_705[2] == l_749[4][5][1])) , g_750));
                }
                else
                { 
                    (***g_304) = p_45;
                    (*g_226) = l_751;
                }
                for (g_70 = 0; (g_70 <= 55); ++g_70)
                { 
                    uint16_t *l_754 = &l_684.f5;
                    uint16_t *l_757[5];
                    int32_t l_772 = 0xC6E0667DL;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_757[i] = &g_438.f1.f3.f5;
                    (*l_638) = ((g_99.f0.f5 = (((((g_438.f1.f2.f5 = (--(*l_754))) | ((l_758 | p_44.f0) & ((safe_div_func_uint16_t_u_u(((~(++g_11)) == (l_751.f3 && (safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((((*g_724) != (*g_724)) <= ((safe_div_func_uint8_t_u_u((safe_add_func_int8_t_s_s(p_44.f0, g_750.f1.f5)), 1UL)) || g_99.f0.f2)), l_772)), p_44.f0)))), p_44.f0)) & (*g_536)))) > 255UL) > 4294967295UL) <= l_772)) != (*g_536));
                }
            }
            else
            { 
                int64_t ** const ***l_775 = &g_773;
                struct S3 l_776[5] = {{-4L,7L,0x3785L,0x8CFDFC07L},{-4L,7L,0x3785L,0x8CFDFC07L},{-4L,7L,0x3785L,0x8CFDFC07L},{-4L,7L,0x3785L,0x8CFDFC07L},{-4L,7L,0x3785L,0x8CFDFC07L}};
                int i;
                (*l_775) = g_773;
                (*g_226) = l_776[2];
                return (*g_226);
            }
            g_779 = ((*l_777) = (**g_305));
        }
        else
        { 
            uint32_t *l_782[2];
            uint32_t **l_781 = &l_782[0];
            uint32_t ***l_780 = &l_781;
            uint32_t ***l_783 = (void*)0;
            struct S0 **l_786 = &l_785;
            int32_t l_800 = 0L;
            struct S1 l_805 = {0x6A9BE9A3L,0x4669B20FL,8L};
            uint8_t l_812 = 255UL;
            int8_t l_833[4] = {0L,0L,0L,0L};
            int32_t l_834 = 0xAEA4B46BL;
            int32_t l_835 = 1L;
            union U6 *l_844 = &l_639;
            uint16_t *l_868 = &l_846.f3.f5;
            uint16_t **l_867[2][2] = {{&l_868,&l_868},{&l_868,&l_868}};
            union U7 l_872 = {-7L};
            int32_t l_874 = 0x3E3B0321L;
            int32_t l_875 = 0xBB666315L;
            int32_t l_876 = 0xF6EEEB9BL;
            int32_t l_877 = (-3L);
            int32_t l_878 = 0xAA5E5E8BL;
            struct S5 *l_899 = &l_866;
            struct S5 **l_898 = &l_899;
            int32_t l_902 = 0x85D84F0CL;
            int32_t l_903 = 1L;
            int64_t **l_946 = (void*)0;
            uint8_t l_966[2];
            int i, j;
            for (i = 0; i < 2; i++)
                l_782[i] = &g_99.f0.f4;
            for (i = 0; i < 2; i++)
                l_966[i] = 9UL;
            (**g_305) = (**g_305);
            l_784 = ((*l_780) = &p_45);
            (*l_786) = l_785;
            for (l_684.f0 = 0; (l_684.f0 <= 1); l_684.f0 += 1)
            { 
                struct S2 **l_787 = (void*)0;
                struct S2 ***l_788 = &l_787;
                int32_t *l_801 = &g_52;
                uint8_t *l_816 = &g_218;
                int32_t l_836[1];
                uint16_t l_840 = 0xF55EL;
                struct S5 **l_901 = &l_899;
                int i;
                for (i = 0; i < 1; i++)
                    l_836[i] = 0L;
                (*l_788) = l_787;
                for (l_751.f2 = 0; (l_751.f2 <= 5); l_751.f2 += 1)
                { 
                    int8_t *l_799 = &g_74[1].f1;
                    uint8_t **l_807 = &l_806[3];
                    int i, j;
                    (*l_638) |= (safe_mul_func_int8_t_s_s(((((l_698[(l_684.f0 + 1)][l_684.f0] && g_56[l_751.f2]) , 4294967295UL) == (g_56[l_684.f0] , (safe_mod_func_int64_t_s_s((safe_mul_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s(((*l_799) = (safe_mod_func_uint64_t_u_u(18446744073709551608UL, 18446744073709551614UL))), 2)) < ((****g_304) != g_227.f1)), g_63)), l_800)))) & 1L), g_74[1].f3.f4));
                    (*l_629) = l_801;
                    ++g_802;
                    l_800 ^= (((l_805 , (((*l_807) = l_806[3]) != ((safe_sub_func_int8_t_s_s((*l_638), ((*g_536) ^ ((*l_801) < (l_698[2][0] = (safe_sub_func_uint16_t_u_u(l_812, (safe_sub_func_uint16_t_u_u(((1L || 0xF4L) > l_815), 0x8BC0L))))))))) , l_816))) && g_218) & 0x7ED692E5L);
                }
                if (((l_817 , (safe_lshift_func_int16_t_s_s(((*g_536) |= (g_56[l_684.f0] || g_820)), 11))) & (+(((((0xBF8CB5A2FF98E200LL == ((*g_226) , (safe_lshift_func_uint8_t_u_s((((void*)0 == &g_773) & 0x93EB1EE033B5FC66LL), l_699[4][2])))) <= 0x2372L) | l_824) | (*l_801)) == 0x60L))))
                { 
                    int32_t *l_825 = &g_52;
                    int32_t *l_826 = &l_800;
                    int32_t *l_827 = (void*)0;
                    int32_t *l_828 = &l_678;
                    int32_t *l_829 = &l_698[0][0];
                    int32_t *l_830 = &g_56[2];
                    int32_t *l_831 = &g_52;
                    int32_t *l_832[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_832[i] = &l_639.f0;
                    g_837++;
                    --l_840;
                }
                else
                { 
                    struct S5 l_843 = {0x004FFB61L,6L,{1L,1UL,65535UL,0L,5UL,2UL},{1L,1UL,8UL,0xF2EA422CL,0xFE59967BL,0xA98FL}};
                    union U6 **l_845 = &l_844;
                    int8_t *l_854 = &l_758;
                    (*l_801) &= (p_44.f0 != (&g_226 == (l_843 , &g_226)));
                    (*l_845) = l_844;
                    (*l_801) = (((l_844 == ((l_846 , l_847) , &g_593)) < ((1L ^ (safe_lshift_func_int8_t_s_u(((*l_854) = (l_835 = (safe_div_func_int16_t_s_s(p_44.f0, (safe_rshift_func_int8_t_s_u((0xCBDEL & 0x1062L), g_62)))))), 2))) >= 0xBDL)) || p_44.f0);
                }
                if (((safe_rshift_func_uint8_t_u_u(((l_857 , (l_751.f3 = p_44.f0)) | (safe_add_func_int32_t_s_s(p_44.f0, (((*l_816) = 0x82L) == ((l_698[4][1] = (((*g_536) < (*g_536)) > ((*l_638) == p_44.f0))) ^ p_44.f0))))), g_227.f0)) ^ p_44.f0))
                { 
                    int32_t l_871 = (-5L);
                    int32_t *l_873[6] = {&g_227.f3,&g_227.f3,&g_227.f3,&g_227.f3,&g_227.f3,&g_227.f3};
                    int32_t l_879 = 0x2FA420B5L;
                    int i;
                    (***g_304) = (**g_305);
                    (*l_801) &= p_44.f0;
                    (*l_801) = (safe_add_func_int16_t_s_s((safe_div_func_uint64_t_u_u(9UL, ((safe_mul_func_uint16_t_u_u(0x4DECL, (((g_369.f1 , l_866) , ((l_869 = l_867[0][0]) == (((l_871 >= g_62) , l_872) , (void*)0))) == l_871))) | l_872.f4))), l_833[1]));
                    l_880[1][3][1]--;
                }
                else
                { 
                    struct S2 l_889 = {{0xE0L,4294967292UL,65526UL,-8L,0x465ECC62L,0x10B4L},0x58L};
                    struct S5 ***l_900 = &l_898;
                    l_902 ^= (safe_sub_func_uint16_t_u_u(g_89.f2.f2, (((*l_638) = (safe_sub_func_uint8_t_u_u(((*g_536) > (safe_add_func_uint64_t_u_u((l_889 , ((*l_638) >= (safe_div_func_int16_t_s_s(((safe_mod_func_uint8_t_u_u(((*l_816) ^= (safe_rshift_func_int16_t_s_s((0xEBL ^ (safe_mod_func_uint32_t_u_u(((((*l_900) = l_898) != l_901) ^ p_44.f0), 0x03AD6EA3L))), 3))), p_44.f0)) & 1UL), (*g_536))))), l_834))), p_44.f0))) < (*l_801))));
                }
                for (g_89.f3.f3 = 1; (g_89.f3.f3 >= 0); g_89.f3.f3 -= 1)
                { 
                    (*l_801) |= (-2L);
                    (*l_638) ^= ((*l_801) = 1L);
                }
            }
            for (g_621 = 2; (g_621 >= 0); g_621 -= 1)
            { 
                struct S5 ****l_910 = (void*)0;
                struct S5 ****l_911 = &l_907[1];
                int32_t l_916 = 0x9DF157DFL;
                union U7 *l_928[2][5][4] = {{{&g_240,&l_872,&l_872,&l_872},{&l_847,&l_847,&g_243,&g_243},{&l_847,&g_243,&l_847,&g_240},{&l_872,(void*)0,&g_240,&l_847},{&l_847,(void*)0,&l_847,&g_240}},{{(void*)0,&g_243,(void*)0,&g_243},{&l_872,&l_847,&l_847,&l_872},{&g_243,&l_872,&g_243,&l_847},{&g_240,&g_240,&g_243,(void*)0},{&g_243,&l_847,&l_847,&g_243}}};
                int64_t *l_931 = &l_729;
                union U8 l_945 = {0};
                int64_t **l_948[1];
                int32_t l_967 = 0xC1464697L;
                int32_t l_972 = 0xDCCBB6D4L;
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_948[i] = (void*)0;
                l_834 &= ((l_903 <= (p_44.f0 <= (!(l_800 = (((((*l_911) = l_907[1]) != ((safe_mul_func_uint16_t_u_u(0x8A9CL, (safe_unary_minus_func_uint64_t_u((++g_918))))) , g_921)) < ((((**l_869) |= ((0x1C8D1290L | 0L) < p_44.f0)) & g_99.f0.f3) > 0xF56BL)) & (**l_629)))))) == (*g_131));
            }
        }
    }
    return (*g_226);
}



static uint32_t * func_47(const struct S0  p_48, const struct S4  p_49)
{ 
    int32_t l_51[7] = {6L,(-7L),(-7L),6L,(-7L),(-7L),6L};
    int32_t *l_55[2][4] = {{&g_56[5],(void*)0,&g_56[5],(void*)0},{&g_56[5],(void*)0,&g_56[5],(void*)0}};
    struct S5 *l_86[3][2][5] = {{{&g_74[1],&g_74[1],&g_74[1],&g_74[1],&g_74[0]},{&g_74[1],&g_74[1],&g_74[1],&g_74[1],&g_74[1]}},{{&g_74[1],&g_74[1],&g_74[1],&g_74[0],&g_74[1]},{&g_74[1],&g_74[1],&g_74[0],&g_74[1],&g_74[0]}},{{&g_74[1],&g_74[1],&g_74[1],&g_74[1],&g_74[1]},{&g_74[1],&g_74[1],&g_74[0],&g_74[0],&g_74[1]}}};
    int8_t l_106 = 0x2BL;
    struct S3 l_137[6][3] = {{{-1L,0x417AL,-5L,0x74055D42L},{-1L,0x417AL,-5L,0x74055D42L},{-1L,0x417AL,-5L,0x74055D42L}},{{-1L,0x417AL,-5L,0x74055D42L},{-1L,0x417AL,-5L,0x74055D42L},{-1L,0x417AL,-5L,0x74055D42L}},{{-1L,0x417AL,-5L,0x74055D42L},{-1L,0x417AL,-5L,0x74055D42L},{-1L,0x417AL,-5L,0x74055D42L}},{{-1L,0x417AL,-5L,0x74055D42L},{-1L,0x417AL,-5L,0x74055D42L},{-1L,0x417AL,-5L,0x74055D42L}},{{-1L,0x417AL,-5L,0x74055D42L},{-1L,0x417AL,-5L,0x74055D42L},{-1L,0x417AL,-5L,0x74055D42L}},{{-1L,0x417AL,-5L,0x74055D42L},{-1L,0x417AL,-5L,0x74055D42L},{-1L,0x417AL,-5L,0x74055D42L}}};
    uint16_t *l_142 = &g_74[1].f2.f5;
    int32_t l_151[4] = {0x8BE2EDBEL,0x8BE2EDBEL,0x8BE2EDBEL,0x8BE2EDBEL};
    struct S2 *l_213 = &g_99;
    struct S2 **l_212 = &l_213;
    union U6 l_220 = {0x4CCC9903L};
    int32_t l_229 = 0xDC391DA6L;
    union U7 *l_239[7] = {&g_240,&g_240,&g_240,&g_240,&g_240,&g_240,&g_240};
    int16_t l_253 = (-2L);
    uint32_t l_261 = 0xD709AE37L;
    int64_t *l_356 = &g_357;
    uint32_t l_402 = 0x0A7F9BE5L;
    struct S3 **l_432 = (void*)0;
    struct S3 ***l_431 = &l_432;
    int8_t l_453[2][7] = {{(-1L),(-1L),0x0DL,(-1L),(-1L),0x0DL,(-1L)},{0L,(-6L),(-6L),0L,(-6L),(-6L),0L}};
    uint64_t l_454[1];
    union U9 l_457 = {1L};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_454[i] = 0x1458FF35C7FE0F6BLL;
    for (g_11 = 0; (g_11 <= 6); g_11 += 1)
    { 
        int64_t l_64 = 0L;
        int32_t l_71 = 1L;
        const int32_t *l_79 = &g_56[2];
        const int32_t **l_78 = &l_79;
        int32_t l_104 = (-1L);
        int32_t l_107 = 0x9DE11BDCL;
        int32_t l_108 = 1L;
        int32_t *l_135[1][2][6] = {{{(void*)0,(void*)0,&g_56[4],(void*)0,(void*)0,(void*)0},{&g_56[1],(void*)0,(void*)0,&g_56[1],&g_56[1],&g_56[1]}}};
        uint32_t l_152 = 18446744073709551615UL;
        uint16_t **l_159 = &l_142;
        union U7 l_166 = {0xF136789FL};
        int64_t l_189[5][2][1] = {{{0x734C236C3F1C7C27LL},{0x660060569A448BB9LL}},{{0x734C236C3F1C7C27LL},{0x660060569A448BB9LL}},{{0x734C236C3F1C7C27LL},{0x660060569A448BB9LL}},{{0x734C236C3F1C7C27LL},{0x660060569A448BB9LL}},{{0x734C236C3F1C7C27LL},{0x660060569A448BB9LL}}};
        int64_t l_291 = 0L;
        int32_t l_295 = 0x73C10BF9L;
        int16_t l_296 = 0x8742L;
        uint32_t l_297 = 0UL;
        int32_t ***l_309 = &g_75[2];
        uint8_t *l_321 = (void*)0;
        uint32_t l_342 = 0UL;
        uint8_t *l_347 = &g_218;
        int64_t **l_358[3][7][4] = {{{&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356}},{{&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356}},{{&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356}}};
        uint8_t *l_360[4] = {&g_361,&g_361,&g_361,&g_361};
        int32_t l_362 = 7L;
        struct S2 *l_395 = &g_99;
        struct S5 l_400 = {1UL,0x89L,{-1L,0x9796963DL,0UL,6L,0x339AC45BL,0xDD16L},{0xCCL,4294967295UL,3UL,0xCA88871AL,0x029ABEB7L,0x1C34L}};
        uint16_t l_436 = 8UL;
        uint64_t l_445[6];
        struct S3 l_448 = {0x6F350894L,6L,3L,0x55B1F206L};
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_445[i] = 0UL;
        for (g_52 = 6; (g_52 >= 0); g_52 -= 1)
        { 
            int32_t *l_54 = &g_3;
            int32_t **l_53[2][7][7] = {{{&l_54,&l_54,&l_54,&l_54,&l_54,&l_54,&l_54},{&l_54,&l_54,&l_54,&l_54,&l_54,&l_54,&l_54},{&l_54,&l_54,&l_54,&l_54,&l_54,&l_54,&l_54},{&l_54,&l_54,&l_54,&l_54,&l_54,&l_54,&l_54},{&l_54,&l_54,&l_54,&l_54,&l_54,&l_54,&l_54},{&l_54,&l_54,&l_54,&l_54,&l_54,&l_54,&l_54},{&l_54,&l_54,&l_54,&l_54,&l_54,&l_54,&l_54}},{{&l_54,&l_54,&l_54,&l_54,&l_54,&l_54,&l_54},{&l_54,&l_54,&l_54,&l_54,&l_54,&l_54,&l_54},{&l_54,&l_54,&l_54,&l_54,&l_54,&l_54,&l_54},{&l_54,&l_54,&l_54,&l_54,&l_54,&l_54,&l_54},{&l_54,&l_54,&l_54,&l_54,&l_54,&l_54,&l_54},{&l_54,&l_54,&l_54,&l_54,&l_54,&l_54,&l_54},{&l_54,&l_54,&l_54,&l_54,&l_54,&l_54,&l_54}}};
            int8_t *l_59 = (void*)0;
            int8_t *l_60 = (void*)0;
            int8_t *l_61 = &g_62;
            uint16_t *l_69[1][3][7] = {{{&g_70,&g_70,&g_11,&g_70,&g_70,&g_70,&g_11},{&g_70,&g_70,&g_11,&g_70,&g_70,&g_70,&g_11},{&g_70,&g_70,&g_11,&g_70,&g_70,&g_70,&g_11}}};
            struct S5 *l_88 = &g_89;
            struct S3 l_147 = {0xE4413314L,0L,0xB4BEL,0x08619DA5L};
            int16_t l_175[2];
            union U8 l_201 = {0};
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_175[i] = 0x03CDL;
            l_55[0][2] = &g_52;
            if ((safe_lshift_func_int16_t_s_u(((-10L) || (l_64 = (g_63 |= ((0xF1E100AA352EE06DLL || l_51[g_52]) || ((*l_61) = (0xA7L || (g_11 < g_56[2]))))))), (l_71 = ((safe_div_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(p_48.f5, 8)), 1UL)) > 0x4B48400EL)))))
            { 
                uint32_t l_83[2][1];
                struct S3 l_96 = {0xA40AF489L,-3L,1L,1L};
                int64_t *l_100 = &l_64;
                int32_t l_105 = 0x88D01BA1L;
                union U7 l_123 = {0xCD0C483BL};
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_83[i][j] = 4294967293UL;
                }
                for (l_64 = 6; (l_64 >= 0); l_64 -= 1)
                { 
                    int32_t ***l_77 = &l_53[1][1][2];
                    struct S5 **l_87[1][2][6] = {{{&l_86[2][0][0],&l_86[2][0][0],&l_86[2][0][0],&l_86[2][0][0],&l_86[2][0][0],&l_86[2][0][0]},{&l_86[2][0][0],&l_86[2][0][0],&l_86[2][0][0],&l_86[2][0][0],&l_86[2][0][0],&l_86[2][0][0]}}};
                    int i, j, k;
                    l_71 = ((safe_mod_func_int64_t_s_s(((g_74[1] , (p_49.f1.f5 > (((*l_77) = g_75[2]) == l_78))) > 65535UL), ((!(safe_div_func_int8_t_s_s((l_83[0][0] , (safe_add_func_uint32_t_u_u(((p_48.f0 >= 0L) & p_48.f0), 0x1B7C33EAL))), 0xE8L))) , g_56[2]))) != 0UL);
                    l_88 = l_86[1][0][3];
                    return l_55[0][0];
                }
                if ((safe_sub_func_int64_t_s_s(((0x50L && (safe_rshift_func_int8_t_s_u(((safe_add_func_int16_t_s_s(g_74[1].f2.f3, (g_74[1].f3.f1 , ((-5L) | (l_96 , ((*l_100) = (safe_mod_func_int8_t_s_s((g_99 , ((g_62 == p_48.f4) > g_99.f0.f1)), g_99.f0.f3)))))))) >= (*g_76)), g_62))) <= (*l_79)), 0x4D7327B72E676B47LL)))
                { 
                    struct S3 l_101 = {0x71BD96BEL,0xA3EBL,0xF918L,-1L};
                    struct S3 *l_102 = &l_96;
                    uint64_t l_109 = 0xD92CAEC0E49BB206LL;
                    union U8 l_114 = {0};
                    int32_t l_133 = (-1L);
                    (*l_102) = l_101;
                    l_101.f3 |= ((!65534UL) == 0xC7L);
                    l_109--;
                    l_108 = ((safe_mul_func_int16_t_s_s((l_114 , (-7L)), ((safe_rshift_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((((l_133 = (safe_mod_func_uint64_t_u_u((safe_div_func_int64_t_s_s((l_123 , (((l_96 , (safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_int64_t_s((((safe_rshift_func_int8_t_s_s(p_48.f4, 4)) <= (safe_mul_func_int16_t_s_s((l_101.f3 &= ((((*g_76) ^ (-9L)) == (-1L)) <= l_123.f2)), g_89.f3.f1))) < (-1L)))), 3))) , g_131) != (void*)0)), 3L)), 3L))) >= p_48.f3) < 0x20F3L), p_48.f1)), 3)) , p_49.f1.f0))) ^ 0xBBL);
                }
                else
                { 
                    int32_t *l_134 = &l_71;
                    struct S3 *l_136 = (void*)0;
                    uint16_t *l_140 = &g_74[1].f2.f5;
                    uint16_t **l_141[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_141[i] = (void*)0;
                    (*l_78) = (l_135[0][1][0] = l_134);
                    l_137[3][0] = l_96;
                    (*l_134) ^= (p_49 , ((safe_lshift_func_uint16_t_u_s(((l_142 = l_140) == (void*)0), ((safe_div_func_int64_t_s_s((*g_131), ((safe_lshift_func_uint16_t_u_u((l_147 , ((0x5FDC5A0FL == (p_49.f0 ^ 0x4D458F628736EE14LL)) , 0x0654L)), g_56[2])) & p_48.f0))) != p_49.f1.f0))) && p_49.f1.f3));
                    (*l_134) = ((safe_mod_func_int32_t_s_s(p_48.f2, 5L)) || 0x019AL);
                }
                for (l_96.f2 = 0; (l_96.f2 <= 1); l_96.f2 += 1)
                { 
                    return g_76;
                }
            }
            else
            { 
                int32_t l_150 = 0x76A63E40L;
                uint32_t *l_176 = &g_89.f3.f1;
                l_152++;
                for (l_152 = 0; (l_152 <= 2); l_152 += 1)
                { 
                    uint16_t **l_158 = &l_69[0][1][0];
                    uint32_t *l_169 = (void*)0;
                    uint32_t *l_170 = &g_89.f2.f4;
                    int64_t *l_172 = &l_64;
                    int32_t l_173 = (-1L);
                    int32_t l_174 = 0xD7695A7DL;
                    int i;
                    l_150 |= (safe_mod_func_int64_t_s_s((((l_151[l_152] < (g_157 ^ (l_158 == l_159))) == (safe_lshift_func_uint16_t_u_s((g_99.f0 , (safe_div_func_int32_t_s_s((*g_76), p_49.f0))), 4))) , p_49.f1.f5), (*g_131)));
                    l_175[1] = (l_174 ^= (p_48.f0 , ((((((((safe_div_func_uint16_t_u_u((l_166 , (safe_mod_func_uint32_t_u_u(((*l_170) = (&g_76 == (void*)0)), (+((l_151[l_152] = ((*l_172) = ((*g_131) |= l_150))) > 0L))))), 0x841EL)) & g_74[1].f3.f1) & l_173) & (*g_76)) , &l_88) == (void*)0) ^ g_74[1].f3.f2) < 1UL)));
                    if (p_48.f5)
                        continue;
                    return l_176;
                }
            }
            for (g_99.f0.f4 = 0; (g_99.f0.f4 <= 0); g_99.f0.f4 += 1)
            { 
                int32_t l_200[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_200[i] = 0x1CC6AA53L;
                if (p_48.f2)
                    break;
                if ((g_89.f0 < (*g_76)))
                { 
                    int8_t l_184 = 0xFFL;
                    uint32_t *l_190 = &g_74[1].f2.f4;
                    int32_t l_191 = 0L;
                    int i, j, k;
                    l_191 ^= ((g_89.f3.f5 = ((p_48.f1 <= ((*l_190) = ((safe_lshift_func_int16_t_s_u(((safe_mod_func_uint64_t_u_u(((!(*g_76)) && (l_189[0][0][0] = (g_74[1].f2.f5 = (g_99.f0.f5 = (p_49 , (safe_add_func_uint64_t_u_u(l_184, ((safe_add_func_int32_t_s_s((safe_mul_func_uint64_t_u_u(p_48.f2, (((g_99 , (p_49.f1.f3 & p_49.f1.f5)) ^ 8UL) <= 4294967295UL))), 0x6B6ADD2EL)) , l_184)))))))), g_89.f3.f1)) <= 0L), g_89.f2.f0)) | p_49.f1.f4))) && 0x39C16624L)) && g_89.f0);
                }
                else
                { 
                    int8_t l_199 = (-1L);
                    uint32_t *l_210 = &g_99.f0.f1;
                    int32_t l_211[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_211[i] = 1L;
                    g_192 = g_192;
                    l_211[1] = ((safe_lshift_func_uint16_t_u_s((((safe_lshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u(0UL, (l_199 != (l_200[2] = l_199)))), (l_201 , ((safe_add_func_int64_t_s_s(((((*l_210) &= (g_74[1].f3.f4 = (safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((safe_div_func_uint64_t_u_u(g_74[1].f3.f0, (3L | ((*l_54) && 7L)))), 5)), g_89.f2.f5)))) >= (*l_79)) || g_74[1].f3.f0), g_89.f3.f4)) >= p_49.f1.f0)))) ^ 0xFB0CL) && p_48.f5), 11)) >= p_49.f1.f5);
                    if ((*g_76))
                        break;
                }
                if (p_49.f1.f4)
                    continue;
            }
        }
        for (g_62 = 6; (g_62 >= 0); g_62 -= 1)
        { 
            struct S2 **l_215 = (void*)0;
            struct S2 ***l_214 = &l_215;
            union U9 l_216 = {1L};
            uint8_t *l_217 = &g_218;
            uint32_t l_219 = 9UL;
            struct S1 l_238 = {2L,0xAB65DB10L,0x20L};
            int32_t l_252 = 0x4F25C23AL;
            int32_t l_254 = 0L;
            int32_t l_257 = (-3L);
            int32_t l_258 = 0L;
            int32_t l_259 = 0L;
            int32_t l_260 = (-3L);
            const uint16_t *l_267 = &g_243.f4;
            union U7 l_276 = {0xB75196C6L};
            struct S3 **l_300 = (void*)0;
            struct S3 **l_301 = (void*)0;
            struct S3 *l_302[7][7] = {{&l_137[4][2],&l_137[1][2],&l_137[3][0],&l_137[3][0],&l_137[0][2],&l_137[3][0],&l_137[3][0]},{(void*)0,(void*)0,&l_137[1][0],&l_137[2][1],&l_137[1][0],(void*)0,(void*)0},{&l_137[2][1],&l_137[1][2],&l_137[3][0],&l_137[1][2],&l_137[2][1],(void*)0,&l_137[3][0]},{&l_137[3][0],(void*)0,&l_137[3][0],&l_137[1][0],&l_137[1][0],&l_137[3][0],(void*)0},{&l_137[3][0],&l_137[3][0],&l_137[3][0],&l_137[3][0],&l_137[0][2],&l_137[1][2],&l_137[0][2]},{&l_137[3][0],&l_137[1][0],&l_137[1][0],&l_137[3][0],(void*)0,&l_137[3][0],&l_137[1][0]},{&l_137[2][1],(void*)0,&l_137[3][0],&l_137[3][0],&l_137[3][0],(void*)0,&l_137[2][1]}};
            int32_t ***l_325 = &g_75[2];
            uint32_t l_326 = 0x1017EF13L;
            int32_t l_331 = 0x0A042E9AL;
            int32_t l_332 = 1L;
            int32_t l_333 = (-3L);
            int32_t l_334 = 0L;
            int32_t l_335 = 0x412FFA43L;
            int32_t l_336 = 5L;
            int32_t l_337 = (-1L);
            int32_t l_338 = 0x9F293DDFL;
            int32_t l_339 = 0x20175E10L;
            int32_t l_340 = (-5L);
            int i, j;
            l_219 ^= (((*l_217) &= (((l_212 == ((*l_214) = &l_213)) == (((l_216 , (*l_78)) != (*l_78)) , ((l_51[g_62] > p_48.f3) >= (*g_131)))) != g_89.f0)) < p_48.f4);
        }
        l_362 |= (safe_lshift_func_int8_t_s_u(((((*l_347) = 1UL) < l_51[g_11]) ^ ((*g_131) ^= l_51[g_11])), (g_361 ^= ((safe_div_func_int32_t_s_s((((safe_div_func_int8_t_s_s((safe_sub_func_int8_t_s_s((9L > ((l_51[g_11] , ((-1L) || ((l_356 = (g_359[3][1][0] = l_356)) == &g_357))) < 247UL)), 0x75L)), p_49.f1.f2)) || g_74[1].f3.f1) & g_227.f3), p_49.f1.f5)) || p_49.f0))));
        for (g_62 = 5; (g_62 >= 0); g_62 -= 1)
        { 
            uint8_t l_363 = 0xBFL;
            uint16_t l_380 = 0xE8C8L;
            int32_t **l_388[7];
            int32_t l_398 = 1L;
            struct S1 l_399 = {0x3A7B8364L,-9L,8L};
            int i;
            for (i = 0; i < 7; i++)
                l_388[i] = &g_76;
            for (g_70 = 0; (g_70 <= 1); g_70 += 1)
            { 
                int32_t l_364 = 6L;
                int64_t ***l_381 = &l_358[1][0][0];
                int32_t * const *l_389 = &l_55[g_70][(g_70 + 2)];
                struct S2 *l_396[2][4][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_99,&g_99,&g_99,&g_99,&g_99},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_99,&g_99,&g_99,&g_99,&g_99}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_99,&g_99,&g_99,&g_99,&g_99},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_99,&g_99,&g_99,&g_99,&g_99}}};
                int32_t l_404 = 0L;
                int32_t l_405 = 0x6514FBDAL;
                int32_t l_406 = 1L;
                int32_t l_408 = (-1L);
                int32_t l_409 = (-1L);
                int32_t l_410 = 0L;
                int32_t l_412 = (-1L);
                int32_t l_413 = 1L;
                int i, j, k;
                (*g_226) = (*g_226);
                l_364 = l_363;
            }
        }
        l_436 ^= ((safe_lshift_func_int8_t_s_s((**l_78), 2)) , p_48.f3);
        for (l_104 = 6; (l_104 >= 0); l_104 -= 1)
        { 
            union U8 *l_437 = &g_438;
            union U8 **l_439[7] = {&l_437,&l_437,&l_437,&l_437,&l_437,&l_437,&l_437};
            int32_t l_441 = 3L;
            int32_t l_442 = 1L;
            int32_t l_443 = (-4L);
            int32_t l_444 = (-2L);
            int i;
            g_440 = l_437;
            ++l_445[2];
            (*g_226) = l_448;
        }
    }
    if (((void*)0 == &l_151[3]))
    { 
        int16_t l_449 = 0x21C0L;
        int32_t l_450 = 0x79055148L;
        int32_t l_451 = 1L;
        int32_t l_452[2];
        struct S3 l_481 = {0x745621E1L,2L,0L,-1L};
        struct S2 **l_507 = &l_213;
        int i;
        for (i = 0; i < 2; i++)
            l_452[i] = 1L;
        l_454[0]--;
        for (g_89.f2.f0 = 0; (g_89.f2.f0 <= 5); g_89.f2.f0 += 1)
        { 
            union U9 *l_458 = &l_457;
            uint32_t *l_459 = &g_243.f3;
            int32_t l_469 = 0x9B5BEB98L;
            int i;
        }
    }
    else
    { 
        int16_t l_516[7][2] = {{0x2604L,(-5L)},{(-4L),(-5L)},{0x2604L,(-4L)},{(-6L),(-6L)},{(-6L),(-4L)},{0x2604L,(-5L)},{(-4L),(-5L)}};
        int32_t l_517 = 0x1BDC39ABL;
        int32_t l_519 = 0x3C2F4B56L;
        int32_t l_522 = 0L;
        int32_t l_523 = 0x2049073FL;
        int32_t l_524 = 0x1F86AAA3L;
        uint8_t l_525[6] = {5UL,5UL,5UL,5UL,5UL,5UL};
        struct S3 l_528 = {-7L,0x18A8L,1L,7L};
        union U9 *l_563 = &l_457;
        union U9 *l_566 = &l_457;
        int64_t l_575 = (-1L);
        uint32_t l_597[5];
        uint32_t *l_622[1];
        int i, j;
        for (i = 0; i < 5; i++)
            l_597[i] = 0x923009CDL;
        for (i = 0; i < 1; i++)
            l_622[i] = (void*)0;
        l_517 |= l_516[5][0];
        if (l_516[5][0])
        { 
            int8_t l_518 = 0xB6L;
            int32_t l_520 = 0x89959D0BL;
            int32_t l_521[5][4][3] = {{{0x85658D76L,(-1L),0x85658D76L},{1L,1L,1L},{0x85658D76L,(-1L),0x85658D76L},{1L,1L,1L}},{{0x85658D76L,(-1L),0x85658D76L},{1L,1L,1L},{0x85658D76L,(-1L),0x85658D76L},{1L,1L,1L}},{{0x85658D76L,(-1L),0x85658D76L},{1L,1L,1L},{0x85658D76L,(-1L),0x85658D76L},{1L,1L,1L}},{{0x85658D76L,(-1L),0x85658D76L},{1L,1L,1L},{0x85658D76L,(-1L),0x85658D76L},{1L,1L,1L}},{{0x85658D76L,(-1L),0x85658D76L},{1L,1L,1L},{0x85658D76L,(-1L),0x85658D76L},{1L,1L,1L}}};
            int i, j, k;
            ++l_525[1];
            (*g_226) = l_528;
        }
        else
        { 
            struct S3 l_529 = {0xB9934402L,0x0F57L,0xBCCDL,3L};
            uint64_t l_532[4] = {6UL,6UL,6UL,6UL};
            union U9 *l_562 = (void*)0;
            int32_t l_594 = 0xD72D6BB3L;
            int32_t l_615[2][2][4];
            int32_t *l_616 = &g_52;
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 4; k++)
                        l_615[i][j][k] = 5L;
                }
            }
            l_529 = l_529;
            if ((safe_sub_func_int8_t_s_s(l_532[0], (~g_243.f2))))
            { 
                uint8_t l_551[6][7][1] = {{{0x94L},{1UL},{0xCFL},{253UL},{0xCFL},{1UL},{0x94L}},{{0x8FL},{0UL},{253UL},{252UL},{255UL},{0UL},{1UL}},{{0UL},{255UL},{252UL},{253UL},{0x94L},{253UL},{252UL}},{{255UL},{0UL},{1UL},{0UL},{255UL},{252UL},{253UL}},{{0x94L},{253UL},{252UL},{255UL},{0UL},{1UL},{0UL}},{{255UL},{252UL},{253UL},{0x94L},{253UL},{252UL},{255UL}}};
                int32_t l_552 = 9L;
                int i, j, k;
                if ((safe_mul_func_uint64_t_u_u((((0xC4A64A32L & (*g_76)) > ((void*)0 != g_536)) >= (0x06CDL || (*g_536))), ((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_int64_t_s(((*g_131) = (l_525[3] & 0xDA09L)))), l_516[5][0])), p_48.f2)) < (****g_304)))))
                { 
                    int32_t l_550 = 9L;
                    l_528.f3 = (****g_304);
                    l_522 = (l_552 = ((****g_304) | ((safe_add_func_int64_t_s_s((g_74[1].f1 ^ ((safe_rshift_func_uint16_t_u_u((0xFBDAA5B8L < p_49.f1.f3), 8)) ^ (((((safe_add_func_uint64_t_u_u(g_243.f2, p_49.f0)) > (l_550 ^= p_48.f0)) >= l_551[5][6][0]) | 0x70D03A3D12BBDEA1LL) != g_369.f1.f4))), 0x123584897FE5F855LL)) != g_89.f3.f5)));
                }
                else
                { 
                    uint64_t l_553[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_553[i] = 0xA7507C5F65A26FE6LL;
                    l_553[3]--;
                    l_529.f3 |= (safe_lshift_func_int8_t_s_u(0xA4L, 3));
                }
            }
            else
            { 
                union U9 *l_567 = (void*)0;
                int32_t l_576 = 0xE2DBBE49L;
                int32_t **l_596 = &g_76;
                if ((safe_mod_func_uint64_t_u_u((safe_div_func_int16_t_s_s(((l_563 = l_562) == g_564), ((((l_566 == l_567) == (((*g_536) ^= (safe_mod_func_int64_t_s_s(((*g_131) = ((*l_356) &= (p_49.f1.f5 || (g_99.f0.f1 > ((safe_div_func_int16_t_s_s(((+((safe_lshift_func_uint8_t_u_u(0UL, g_89.f2.f2)) != 1L)) | p_49.f1.f1), p_49.f1.f2)) ^ p_49.f1.f2))))), 0xB7A8B849058022D4LL))) == g_74[1].f3.f0)) != l_575) , (-5L)))), p_49.f0)))
                { 
                    int32_t *l_577 = &l_137[3][0].f3;
                    uint64_t *l_578 = (void*)0;
                    uint64_t *l_579 = &l_457.f1;
                    uint64_t *l_580 = &l_454[0];
                    l_576 ^= (l_517 |= (l_529.f3 = p_49.f1.f4));
                    l_576 |= (((void*)0 == l_577) < (0x1C6E6E20C0CE68F3LL >= (--(*l_580))));
                }
                else
                { 
                    uint16_t l_595 = 0xF360L;
                    uint32_t *l_614[2][6];
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 6; j++)
                            l_614[i][j] = (void*)0;
                    }
                    l_517 = (((*g_536) <= (((safe_rshift_func_uint8_t_u_u(0x2CL, 7)) > g_414) != (g_369.f1.f2 && p_48.f3))) != p_49.f1.f4);
                    l_597[2] = (safe_add_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((((((g_591 , (~(0xAB94314DL | ((g_273[0][4][2] , (g_593 , (l_595 = l_594))) , 0xC76F6357L)))) <= ((*g_536) ^= (((&g_192 == &l_212) , l_596) == (void*)0))) && l_594) , p_49) , p_49.f1.f2), 65535UL)), p_48.f2));
                    l_615[0][1][2] = (((safe_mul_func_int8_t_s_s(p_49.f1.f5, (((safe_sub_func_int64_t_s_s(4L, 0x4FE9559D0315BC71LL)) , (((((safe_div_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_s((((safe_rshift_func_int8_t_s_u(p_48.f5, 6)) | 7UL) && (g_89.f3.f1 = ((safe_lshift_func_int8_t_s_s((l_529.f3 ^= (**l_596)), 6)) ^ (safe_rshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s((-1L), 247UL)), 0))))), p_49.f1.f3)), p_49.f1.f3)) || 18446744073709551611UL) && l_595) >= g_591.f1) && 0UL)) <= p_49.f1.f3))) | (**l_596)) == p_48.f0);
                }
            }
            l_616 = &l_615[1][1][3];
        }
        (*g_226) = (*g_226);
        l_522 |= ((((((l_524 ^= ((g_369 , 0x1F5AB5A4L) || ((safe_sub_func_int64_t_s_s((((void*)0 != &g_440) == (l_517 &= (g_74[1].f3.f1 = ((safe_div_func_int32_t_s_s((((***g_304) == (***g_304)) && ((g_621 , g_414) | g_89.f3.f1)), l_525[1])) <= 0xDEBFL)))), p_48.f5)) , (****g_304)))) == (-1L)) > p_48.f4) != l_528.f0) , p_48.f5) >= l_528.f2);
        (*g_226) = l_528;
    }
    return g_76;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_56[i], "g_56[i]", print_hash_value);

    }
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_74[i].f0, "g_74[i].f0", print_hash_value);
        transparent_crc(g_74[i].f1, "g_74[i].f1", print_hash_value);
        transparent_crc(g_74[i].f2.f0, "g_74[i].f2.f0", print_hash_value);
        transparent_crc(g_74[i].f2.f1, "g_74[i].f2.f1", print_hash_value);
        transparent_crc(g_74[i].f2.f2, "g_74[i].f2.f2", print_hash_value);
        transparent_crc(g_74[i].f2.f3, "g_74[i].f2.f3", print_hash_value);
        transparent_crc(g_74[i].f2.f4, "g_74[i].f2.f4", print_hash_value);
        transparent_crc(g_74[i].f2.f5, "g_74[i].f2.f5", print_hash_value);
        transparent_crc(g_74[i].f3.f0, "g_74[i].f3.f0", print_hash_value);
        transparent_crc(g_74[i].f3.f1, "g_74[i].f3.f1", print_hash_value);
        transparent_crc(g_74[i].f3.f2, "g_74[i].f3.f2", print_hash_value);
        transparent_crc(g_74[i].f3.f3, "g_74[i].f3.f3", print_hash_value);
        transparent_crc(g_74[i].f3.f4, "g_74[i].f3.f4", print_hash_value);
        transparent_crc(g_74[i].f3.f5, "g_74[i].f3.f5", print_hash_value);

    }
    transparent_crc(g_89.f0, "g_89.f0", print_hash_value);
    transparent_crc(g_89.f1, "g_89.f1", print_hash_value);
    transparent_crc(g_89.f2.f0, "g_89.f2.f0", print_hash_value);
    transparent_crc(g_89.f2.f1, "g_89.f2.f1", print_hash_value);
    transparent_crc(g_89.f2.f2, "g_89.f2.f2", print_hash_value);
    transparent_crc(g_89.f2.f3, "g_89.f2.f3", print_hash_value);
    transparent_crc(g_89.f2.f4, "g_89.f2.f4", print_hash_value);
    transparent_crc(g_89.f2.f5, "g_89.f2.f5", print_hash_value);
    transparent_crc(g_89.f3.f0, "g_89.f3.f0", print_hash_value);
    transparent_crc(g_89.f3.f1, "g_89.f3.f1", print_hash_value);
    transparent_crc(g_89.f3.f2, "g_89.f3.f2", print_hash_value);
    transparent_crc(g_89.f3.f3, "g_89.f3.f3", print_hash_value);
    transparent_crc(g_89.f3.f4, "g_89.f3.f4", print_hash_value);
    transparent_crc(g_89.f3.f5, "g_89.f3.f5", print_hash_value);
    transparent_crc(g_99.f0.f0, "g_99.f0.f0", print_hash_value);
    transparent_crc(g_99.f0.f1, "g_99.f0.f1", print_hash_value);
    transparent_crc(g_99.f0.f2, "g_99.f0.f2", print_hash_value);
    transparent_crc(g_99.f0.f3, "g_99.f0.f3", print_hash_value);
    transparent_crc(g_99.f0.f4, "g_99.f0.f4", print_hash_value);
    transparent_crc(g_99.f0.f5, "g_99.f0.f5", print_hash_value);
    transparent_crc(g_99.f1, "g_99.f1", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_218, "g_218", print_hash_value);
    transparent_crc(g_227.f0, "g_227.f0", print_hash_value);
    transparent_crc(g_227.f1, "g_227.f1", print_hash_value);
    transparent_crc(g_227.f2, "g_227.f2", print_hash_value);
    transparent_crc(g_227.f3, "g_227.f3", print_hash_value);
    transparent_crc(g_240.f2, "g_240.f2", print_hash_value);
    transparent_crc(g_240.f4, "g_240.f4", print_hash_value);
    transparent_crc(g_243.f0, "g_243.f0", print_hash_value);
    transparent_crc(g_243.f2, "g_243.f2", print_hash_value);
    transparent_crc(g_243.f3, "g_243.f3", print_hash_value);
    transparent_crc(g_243.f4, "g_243.f4", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_273[i][j][k].f0, "g_273[i][j][k].f0", print_hash_value);
                transparent_crc(g_273[i][j][k].f1, "g_273[i][j][k].f1", print_hash_value);
                transparent_crc(g_273[i][j][k].f2, "g_273[i][j][k].f2", print_hash_value);

            }
        }
    }
    transparent_crc(g_357, "g_357", print_hash_value);
    transparent_crc(g_361, "g_361", print_hash_value);
    transparent_crc(g_369.f0, "g_369.f0", print_hash_value);
    transparent_crc(g_369.f1.f0, "g_369.f1.f0", print_hash_value);
    transparent_crc(g_369.f1.f1, "g_369.f1.f1", print_hash_value);
    transparent_crc(g_369.f1.f2, "g_369.f1.f2", print_hash_value);
    transparent_crc(g_369.f1.f3, "g_369.f1.f3", print_hash_value);
    transparent_crc(g_369.f1.f4, "g_369.f1.f4", print_hash_value);
    transparent_crc(g_369.f1.f5, "g_369.f1.f5", print_hash_value);
    transparent_crc(g_414, "g_414", print_hash_value);
    transparent_crc(g_565.f0, "g_565.f0", print_hash_value);
    transparent_crc(g_591.f0.f0, "g_591.f0.f0", print_hash_value);
    transparent_crc(g_591.f0.f1, "g_591.f0.f1", print_hash_value);
    transparent_crc(g_591.f0.f2, "g_591.f0.f2", print_hash_value);
    transparent_crc(g_591.f0.f3, "g_591.f0.f3", print_hash_value);
    transparent_crc(g_591.f0.f4, "g_591.f0.f4", print_hash_value);
    transparent_crc(g_591.f0.f5, "g_591.f0.f5", print_hash_value);
    transparent_crc(g_591.f1, "g_591.f1", print_hash_value);
    transparent_crc(g_593.f0, "g_593.f0", print_hash_value);
    transparent_crc(g_621, "g_621", print_hash_value);
    transparent_crc(g_643, "g_643", print_hash_value);
    transparent_crc(g_750.f0, "g_750.f0", print_hash_value);
    transparent_crc(g_750.f1.f0, "g_750.f1.f0", print_hash_value);
    transparent_crc(g_750.f1.f1, "g_750.f1.f1", print_hash_value);
    transparent_crc(g_750.f1.f2, "g_750.f1.f2", print_hash_value);
    transparent_crc(g_750.f1.f3, "g_750.f1.f3", print_hash_value);
    transparent_crc(g_750.f1.f4, "g_750.f1.f4", print_hash_value);
    transparent_crc(g_750.f1.f5, "g_750.f1.f5", print_hash_value);
    transparent_crc(g_802, "g_802", print_hash_value);
    transparent_crc(g_820, "g_820", print_hash_value);
    transparent_crc(g_837, "g_837", print_hash_value);
    transparent_crc(g_917, "g_917", print_hash_value);
    transparent_crc(g_918, "g_918", print_hash_value);
    transparent_crc(g_940, "g_940", print_hash_value);
    transparent_crc(g_977.f0.f0, "g_977.f0.f0", print_hash_value);
    transparent_crc(g_977.f0.f1, "g_977.f0.f1", print_hash_value);
    transparent_crc(g_977.f0.f2, "g_977.f0.f2", print_hash_value);
    transparent_crc(g_977.f0.f3, "g_977.f0.f3", print_hash_value);
    transparent_crc(g_977.f0.f4, "g_977.f0.f4", print_hash_value);
    transparent_crc(g_977.f0.f5, "g_977.f0.f5", print_hash_value);
    transparent_crc(g_977.f1, "g_977.f1", print_hash_value);
    transparent_crc(g_1047, "g_1047", print_hash_value);
    transparent_crc(g_1058.f0, "g_1058.f0", print_hash_value);
    transparent_crc(g_1058.f1.f0, "g_1058.f1.f0", print_hash_value);
    transparent_crc(g_1058.f1.f1, "g_1058.f1.f1", print_hash_value);
    transparent_crc(g_1058.f1.f2, "g_1058.f1.f2", print_hash_value);
    transparent_crc(g_1058.f1.f3, "g_1058.f1.f3", print_hash_value);
    transparent_crc(g_1058.f1.f4, "g_1058.f1.f4", print_hash_value);
    transparent_crc(g_1058.f1.f5, "g_1058.f1.f5", print_hash_value);
    transparent_crc(g_1060.f0, "g_1060.f0", print_hash_value);
    transparent_crc(g_1060.f1.f0, "g_1060.f1.f0", print_hash_value);
    transparent_crc(g_1060.f1.f1, "g_1060.f1.f1", print_hash_value);
    transparent_crc(g_1060.f1.f2, "g_1060.f1.f2", print_hash_value);
    transparent_crc(g_1060.f1.f3, "g_1060.f1.f3", print_hash_value);
    transparent_crc(g_1060.f1.f4, "g_1060.f1.f4", print_hash_value);
    transparent_crc(g_1060.f1.f5, "g_1060.f1.f5", print_hash_value);
    transparent_crc(g_1130, "g_1130", print_hash_value);
    transparent_crc(g_1168, "g_1168", print_hash_value);
    transparent_crc(g_1192, "g_1192", print_hash_value);
    transparent_crc(g_1218, "g_1218", print_hash_value);
    transparent_crc(g_1258, "g_1258", print_hash_value);
    transparent_crc(g_1273, "g_1273", print_hash_value);
    transparent_crc(g_1408, "g_1408", print_hash_value);
    transparent_crc(g_1460, "g_1460", print_hash_value);
    transparent_crc(g_1538.f0, "g_1538.f0", print_hash_value);
    transparent_crc(g_1546.f0, "g_1546.f0", print_hash_value);
    transparent_crc(g_1546.f1, "g_1546.f1", print_hash_value);
    transparent_crc(g_1546.f2, "g_1546.f2", print_hash_value);
    transparent_crc(g_1546.f3, "g_1546.f3", print_hash_value);
    transparent_crc(g_1582, "g_1582", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_1607[i][j][k], "g_1607[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_1613[i][j][k].f0.f0, "g_1613[i][j][k].f0.f0", print_hash_value);
                transparent_crc(g_1613[i][j][k].f0.f1, "g_1613[i][j][k].f0.f1", print_hash_value);
                transparent_crc(g_1613[i][j][k].f0.f2, "g_1613[i][j][k].f0.f2", print_hash_value);
                transparent_crc(g_1613[i][j][k].f0.f3, "g_1613[i][j][k].f0.f3", print_hash_value);
                transparent_crc(g_1613[i][j][k].f0.f4, "g_1613[i][j][k].f0.f4", print_hash_value);
                transparent_crc(g_1613[i][j][k].f0.f5, "g_1613[i][j][k].f0.f5", print_hash_value);
                transparent_crc(g_1613[i][j][k].f1, "g_1613[i][j][k].f1", print_hash_value);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_1647[i][j][k], "g_1647[i][j][k]", print_hash_value);

            }
        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
