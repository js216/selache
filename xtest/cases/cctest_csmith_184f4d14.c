// SPDX-License-Identifier: MIT
// cctest_csmith_184f4d14.c --- cctest case csmith_184f4d14 (csmith seed 407850260)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xaf8a5537 */
/* @exp_ticks 0x4bf7 */

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

// Options:   -s 407850260 -o /tmp/csmith_gen_3hctaeoj/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S1 {
   const int64_t  f0;
   const int32_t  f1;
   int8_t  f2;
};
#pragma pack(pop)

union U2 {
   int16_t  f0;
};

union U3 {
   uint32_t  f0;
};

#pragma pack(push)
#pragma pack(1)
struct S0 {
   const int64_t  f0;
   int64_t  f1;
   uint16_t  f2;
};
#pragma pack(pop)

union U4 {
   struct S0  f0;
   uint32_t  f1;
};


static uint64_t g_7 = 5UL;
static uint64_t g_19 = 0x3BD652568108531DLL;
static int16_t g_49 = (-1L);
static uint8_t g_80 = 0x73L;
static int64_t g_86[5][4] = {{0L,(-6L),(-6L),0L},{(-6L),0L,(-1L),0x196B4A016C9CC5FALL},{(-6L),(-1L),(-6L),0xCB33D27CF1A457CELL},{0L,0x196B4A016C9CC5FALL,0xCB33D27CF1A457CELL,0xCB33D27CF1A457CELL},{(-1L),(-1L),0L,0x196B4A016C9CC5FALL}};
static uint32_t g_91[5] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
static uint32_t g_94[1] = {0x49F135B3L};
static int16_t g_105 = 1L;
static uint8_t g_107[4] = {255UL,255UL,255UL,255UL};
static struct S1 g_119[5] = {{0xFC9B2F6CA1BE135CLL,6L,-3L},{0xFC9B2F6CA1BE135CLL,6L,-3L},{0xFC9B2F6CA1BE135CLL,6L,-3L},{0xFC9B2F6CA1BE135CLL,6L,-3L},{0xFC9B2F6CA1BE135CLL,6L,-3L}};
static int8_t g_124[3] = {0x7EL,0x7EL,0x7EL};
static uint8_t g_125 = 250UL;
static uint32_t g_140 = 6UL;
static int32_t g_152 = 0x29889812L;
static int16_t g_155 = 2L;
static uint32_t g_161[3] = {0x638BEBE6L,0x638BEBE6L,0x638BEBE6L};
static const union U3 g_164[2][1][2] = {{{{0UL},{0UL}}},{{{0UL},{0UL}}}};
static int32_t g_170 = 0x9E56F2F1L;
static int16_t g_199[2][5][1] = {{{0L},{0x9356L},{0L},{0x9356L},{0L}},{{0x9356L},{0L},{0x9356L},{0L},{0x9356L}}};
static int32_t g_200 = (-9L);
static int32_t g_205[1] = {0xAA8155E1L};
static int64_t g_206 = 1L;
static union U3 g_240 = {0x9F821FC2L};
static const union U2 g_249 = {0x42A0L};
static uint32_t g_252[3] = {0x3AF8A971L,0x3AF8A971L,0x3AF8A971L};
static const union U4 g_306[2] = {{{0xE1FAAB5558DF00F4LL,0xF9F58F806DDD18BALL,0UL}},{{0xE1FAAB5558DF00F4LL,0xF9F58F806DDD18BALL,0UL}}};
static uint64_t g_322[3] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
static int8_t g_324 = 1L;
static int64_t g_326 = 0x5502123F75200313LL;
static uint32_t g_327[4] = {18446744073709551609UL,18446744073709551609UL,18446744073709551609UL,18446744073709551609UL};



static int8_t  func_1(void);
static int16_t  func_16(int32_t  p_17, uint32_t  p_18);
static union U2  func_22(uint64_t  p_23, struct S1  p_24);
static const uint16_t  func_28(uint32_t  p_29, union U4  p_30);




static int8_t  func_1(void)
{ 
    int16_t l_6 = 3L;
    int32_t l_302 = 0xBB748AC1L;
    int32_t l_310[4] = {0L,0L,0L,0L};
    int8_t l_316 = 1L;
    uint32_t l_381 = 18446744073709551606UL;
    int i;
lbl_330:
    l_302 = (((safe_sub_func_uint8_t_u_u((++g_7), 0x7CL)) ^ (0x4A754320E32CF415LL <= (safe_sub_func_uint32_t_u_u((safe_div_func_int8_t_s_s((safe_add_func_int16_t_s_s(func_16(g_19, g_19), 65535UL)), g_91[4])), g_140)))) <= l_6);
    if (g_161[0])
    { 
        uint32_t l_303 = 0x9A44A26BL;
        int16_t l_307 = (-1L);
        int16_t l_311 = 0x3F10L;
        --l_303;
        l_307 = (g_306[1] , g_200);
        l_311 = (l_310[3] &= (g_49 > (((l_6 <= (safe_lshift_func_int8_t_s_u(((((255UL && ((l_303 , g_124[0]) >= (-2L))) , l_302) || 1L) & l_307), g_306[1].f1))) >= l_307) > l_302)));
    }
    else
    { 
        int8_t l_356 = 0x0FL;
        uint16_t l_357 = 0UL;
        if (g_7)
        { 
            uint8_t l_319 = 0xAEL;
            int32_t l_325 = 0x98C55A45L;
            int32_t l_334 = 0x00B315BCL;
            int16_t l_337 = 0x855EL;
            int8_t l_354 = (-5L);
            uint64_t l_355[1][2][4] = {{{18446744073709551611UL,0xD4D782895629A1DBLL,18446744073709551611UL,18446744073709551611UL},{0xD4D782895629A1DBLL,0xD4D782895629A1DBLL,8UL,0xD4D782895629A1DBLL}}};
            int32_t l_372 = 0xA130B2A4L;
            int i, j, k;
            g_205[0] = ((l_319 ^= (safe_add_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((l_316 != g_306[1].f0.f1), 0xBF2F6F7AL)), (safe_lshift_func_int8_t_s_s((0UL || g_306[1].f0.f2), 6))))) ^ g_105);
            if (g_105)
                goto lbl_331;
            if ((safe_sub_func_int64_t_s_s(0xB148A5093E27F5B7LL, l_310[3])))
            { 
                int64_t l_323[1][1];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_323[i][j] = 0x84E9515FB0BF56E5LL;
                }
                g_205[0] = ((g_322[1] = g_164[0][0][0].f0) ^ (++g_327[2]));
            }
            else
            { 
lbl_331:
                if (g_155)
                    goto lbl_330;
                g_205[0] = ((safe_div_func_uint16_t_u_u(l_334, (safe_add_func_uint32_t_u_u(0UL, (g_94[0]++))))) != ((0xD9C95290A3C8533CLL | ((safe_sub_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((l_356 = (safe_mul_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s((l_354 = ((safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((0x7486L <= 0x9614L), 2)), g_205[0])), 255UL)) > g_86[3][2])), 7)) & l_355[0][0][1]), g_324))), g_327[2])), 0xA403L)) & 0L)) , g_322[0]));
                if (g_200)
                    goto lbl_331;
            }
            l_372 |= (g_205[0] = (l_357 != (safe_mod_func_int32_t_s_s(((g_306[1].f0.f1 | (((safe_mod_func_int64_t_s_s((safe_div_func_int16_t_s_s(((safe_add_func_uint32_t_u_u(((safe_div_func_int8_t_s_s((safe_mod_func_int16_t_s_s((g_240 , (safe_div_func_int8_t_s_s(g_200, l_357))), g_324)), g_94[0])) ^ g_306[1].f0.f2), 0x52411BDBL)) > g_326), 0x5FE2L)), 0x75AB8D4A8BD84819LL)) , (-1L)) && 0x60L)) >= g_170), g_107[2]))));
        }
        else
        { 
            uint64_t l_373 = 4UL;
            int32_t l_374 = 0x2B93D780L;
            l_374 = (g_205[0] ^= l_373);
        }
        g_205[0] = (safe_div_func_int8_t_s_s((-1L), (--g_107[2])));
        l_310[2] = (safe_mul_func_int16_t_s_s(l_381, 65530UL));
    }
    return l_310[3];
}



static int16_t  func_16(int32_t  p_17, uint32_t  p_18)
{ 
    uint8_t l_27[3];
    struct S1 l_33 = {1L,1L,0xACL};
    union U4 l_34 = {{0xD04549C4B05EF135LL,0x0E352601C8D535DDLL,65529UL}};
    int32_t l_204 = 0x8839AD85L;
    int8_t l_271 = 8L;
    uint16_t l_272[3];
    int32_t l_277 = 0x8847EDA4L;
    int64_t l_300 = 0xC67197F0C942405ELL;
    int32_t l_301 = 0L;
    int i;
    for (i = 0; i < 3; i++)
        l_27[i] = 0xFAL;
    for (i = 0; i < 3; i++)
        l_272[i] = 0xB760L;
    if (((safe_mod_func_uint32_t_u_u((func_22((g_206 = (g_205[0] &= (((p_18 >= (safe_div_func_uint64_t_u_u((l_27[2] , (l_204 = (((func_28(((~(~((1UL || (l_33 , l_33.f2)) && g_19))) , l_33.f1), l_34) < g_119[3].f0) >= p_17) , g_107[3]))), 18446744073709551610UL))) <= l_33.f0) > g_164[0][0][0].f0))), l_33) , g_19), l_33.f0)) < 0xF17608B0E2667C33LL))
    { 
        uint64_t l_257 = 18446744073709551611UL;
        uint64_t l_264 = 0x267F2E3D422F2D61LL;
        int32_t l_265 = 0x1184B929L;
        g_205[0] |= ((l_265 |= ((safe_lshift_func_int8_t_s_s((((l_264 = (l_34.f0.f0 > (l_257 >= (safe_mul_func_uint16_t_u_u(((p_18 | ((safe_sub_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s(g_170, 11)), p_18)) != l_257)) & 0x6C62L), 0L))))) >= l_33.f2) == p_17), 5)) | 3UL)) & 1UL);
        for (l_257 = (-6); (l_257 >= 49); l_257++)
        { 
            if (p_17)
                break;
            if (l_34.f0.f1)
                goto lbl_268;
        }
    }
    else
    { 
lbl_268:
        g_205[0] = (-10L);
        if (p_17)
        { 
            for (g_125 = 24; (g_125 != 24); g_125 = safe_add_func_uint8_t_u_u(g_125, 1))
            { 
                --l_272[1];
                g_205[0] &= 1L;
            }
            if ((safe_mod_func_uint8_t_u_u(g_240.f0, g_170)))
            { 
                g_205[0] |= p_17;
            }
            else
            { 
                uint32_t l_278 = 0xE55E6CB9L;
                uint8_t l_295 = 0xD7L;
                ++l_278;
                g_205[0] = ((safe_div_func_int16_t_s_s(((safe_add_func_uint32_t_u_u((((0x081AL && (g_199[0][0][0] = (((((safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(((((p_18 == (-7L)) && 0xD0F614CBL) < 0xB3AEL) != g_119[3].f2), l_278)), g_170)), 3)), 13)), 0xC6L)) >= p_18) ^ p_17) == g_91[4]) ^ 0xAC31L))) >= 6UL) ^ l_278), l_295)) <= p_18), 0xFBFFL)) <= l_295);
            }
        }
        else
        { 
            for (p_18 = 0; (p_18 <= 2); p_18 += 1)
            { 
                int i;
                return g_252[p_18];
            }
        }
    }
    g_205[0] |= (((safe_add_func_uint16_t_u_u(p_18, (l_277 != (p_18 >= g_206)))) || g_200) & p_18);
    l_301 = ((g_161[1] > (safe_div_func_int64_t_s_s((1L || g_91[1]), (l_300 & g_199[0][0][0])))) & p_18);
    return g_206;
}



static union U2  func_22(uint64_t  p_23, struct S1  p_24)
{ 
    union U2 l_207 = {0x84F2L};
    int32_t l_229 = 0xCBFBA9A8L;
    int32_t l_230 = 0L;
    int32_t l_231 = (-10L);
    uint8_t l_232 = 0xB8L;
    uint16_t l_246 = 0UL;
    if (p_24.f2)
    { 
        return l_207;
    }
    else
    { 
        const int32_t l_214 = 0x1164B7CAL;
        union U3 l_220 = {0x2F4EEEBAL};
        union U2 l_226 = {-4L};
        int32_t l_227 = (-1L);
        int32_t l_228[1];
        int i;
        for (i = 0; i < 1; i++)
            l_228[i] = 0x8A0A5ABDL;
        for (g_200 = 0; (g_200 >= (-24)); g_200 = safe_sub_func_int32_t_s_s(g_200, 8))
        { 
            union U4 l_219 = {{-2L,0L,0x112FL}};
            for (g_155 = 0; (g_155 > (-7)); --g_155)
            { 
                uint8_t l_217 = 4UL;
                int32_t l_221[3][4][5] = {{{0x70736F6AL,0xDE9202ADL,0xDE9202ADL,0x70736F6AL,0xDE9202ADL},{0x50D4A36DL,0x50D4A36DL,8L,0x50D4A36DL,0x50D4A36DL},{0xDE9202ADL,0x70736F6AL,0xDE9202ADL,0xDE9202ADL,0x70736F6AL},{0x50D4A36DL,0xBB8DE72FL,0xBB8DE72FL,0x50D4A36DL,0xBB8DE72FL}},{{0x70736F6AL,0x70736F6AL,2L,0x70736F6AL,0x70736F6AL},{0xBB8DE72FL,0x50D4A36DL,0xBB8DE72FL,0xBB8DE72FL,0x50D4A36DL},{0x70736F6AL,0xDE9202ADL,0xDE9202ADL,0x70736F6AL,0xDE9202ADL},{0x50D4A36DL,0x50D4A36DL,8L,0x50D4A36DL,0x50D4A36DL}},{{0xDE9202ADL,0x70736F6AL,0xDE9202ADL,0xDE9202ADL,0x70736F6AL},{0x50D4A36DL,0xBB8DE72FL,0xBB8DE72FL,0x50D4A36DL,0xBB8DE72FL},{0x70736F6AL,0x70736F6AL,2L,0x70736F6AL,0x70736F6AL},{0xBB8DE72FL,0x50D4A36DL,0xBB8DE72FL,0xBB8DE72FL,0x50D4A36DL}}};
                int i, j, k;
                l_221[2][0][3] = ((safe_rshift_func_int16_t_s_s(((((g_206 = (((l_214 , (safe_mul_func_int8_t_s_s((l_217 , ((g_199[0][4][0] = (+((l_219 , l_220) , l_214))) <= g_107[2])), g_124[0]))) >= p_24.f2) , l_220.f0)) || p_23) || p_24.f1) , l_217), g_200)) , g_119[3].f0);
                g_205[0] |= (((safe_div_func_int8_t_s_s(p_23, (safe_rshift_func_uint16_t_u_s(g_86[3][2], 13)))) <= (l_217 <= 0xA5C68B7B37179735LL)) & 0x84EDL);
                return l_226;
            }
        }
        for (g_155 = 0; (g_155 <= 3); g_155 += 1)
        { 
            union U2 l_241 = {1L};
            --l_232;
            if (p_24.f2)
            { 
                uint32_t l_235 = 0xDA394717L;
                l_235 |= p_23;
                g_205[0] = l_235;
                g_205[0] |= p_24.f2;
            }
            else
            { 
                g_205[0] = (safe_div_func_int32_t_s_s((safe_add_func_int16_t_s_s(((((((((g_240 = g_164[1][0][1]) , g_86[3][1]) ^ g_199[0][2][0]) , l_231) , p_24.f2) != 0x2BL) < 0xA0L) , p_24.f2), g_199[0][0][0])), p_24.f2));
                return l_241;
            }
            for (g_80 = 0; (g_80 <= 0); g_80 += 1)
            { 
                int i, j;
                g_252[1] = (g_205[0] = (safe_add_func_uint8_t_u_u((((((safe_lshift_func_uint8_t_u_s((l_228[0] &= (++l_246)), 0)) , ((g_249 , 0x263A6ABDL) <= (-10L))) == (safe_add_func_uint32_t_u_u(0x0D3CC9FFL, g_94[g_80]))) && (-10L)) > 0L), g_86[(g_155 + 1)][g_155])));
            }
        }
    }
    return l_207;
}



static const uint16_t  func_28(uint32_t  p_29, union U4  p_30)
{ 
    int64_t l_42 = 0xFBF3F079038991F3LL;
    int32_t l_47[5][5][5] = {{{5L,0x8C4F412FL,0xCCC853D3L,0xAC5ADF6FL,0xA86E60E4L},{0xA86E60E4L,0xC9060546L,0x8E2DC660L,0xD77974D3L,7L},{0x3FFEA361L,0x2628F0FCL,0x97EEDF66L,0xF28F0E43L,0xFEF6F1ACL},{0x4D864B91L,0x061FA46BL,5L,(-1L),0xD77974D3L},{0x4D864B91L,0x53B72B46L,(-7L),1L,0x63E9BECCL}},{{0x3FFEA361L,0x8E2DC660L,0xBABA27FAL,(-5L),0xAFFF74B7L},{0xA86E60E4L,(-1L),0x0F09DEA6L,0xA51F3E63L,0x2628F0FCL},{5L,0x882D7787L,0x882D7787L,5L,0x4ED1E225L},{1L,0xC5119B5FL,0xA86E60E4L,0x97E6E185L,6L},{0xC5119B5FL,0xCCC853D3L,5L,0x061FA46BL,0xA6825D82L}},{{0x8FF05C8AL,0xAFFF74B7L,1L,0x97E6E185L,0xC01F903AL},{(-7L),1L,1L,5L,0x8C4F412FL},{0xD77974D3L,0x0B09EDB9L,0x7922C1E9L,0xA51F3E63L,5L},{5L,(-2L),0xD735F31AL,(-5L),(-7L)},{0x7922C1E9L,0x63E9BECCL,0xC01F903AL,1L,(-2L)}},{{0xBABA27FAL,0L,7L,(-1L),0xAC5ADF6FL},{0x2628F0FCL,0L,0x3FFEA361L,0xF28F0E43L,0xA51F3E63L},{(-1L),0x63E9BECCL,(-2L),0xD77974D3L,0x061FA46BL},{0x0F09DEA6L,(-2L),0x953B2248L,0xAC5ADF6FL,0xC9060546L},{0xF28F0E43L,0x0B09EDB9L,0xC5119B5FL,0x14D19633L,0x8E2DC660L}},{{1L,0x953B2248L,0xA6825D82L,0x2628F0FCL,1L},{0xAC5ADF6FL,0x8C4F412FL,0x4D864B91L,0xF28F0E43L,0xD735F31AL},{(-1L),5L,0x7922C1E9L,0x953B2248L,1L},{(-2L),0xF28F0E43L,6L,0xFEF6F1ACL,0x8E2DC660L},{1L,5L,0x8C4F412FL,0xCCC853D3L,0xAC5ADF6FL}}};
    int32_t l_48 = 0xFDB9CE08L;
    uint8_t l_50[3];
    uint16_t l_65 = 0x706CL;
    int16_t l_104 = 0xCD0CL;
    uint32_t l_139 = 9UL;
    union U3 l_172 = {0x30BC1044L};
    const struct S1 l_173 = {1L,0xBDF4B4D0L,0L};
    uint64_t l_186 = 0xBE60ADCB03EBDBDELL;
    int32_t l_203 = 1L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_50[i] = 7UL;
    if ((0x620A3418L & (l_48 = (safe_add_func_uint64_t_u_u((safe_rshift_func_int8_t_s_s((0x8BA7L && ((!((safe_div_func_int32_t_s_s((l_42 = 1L), (safe_rshift_func_int16_t_s_u((g_49 |= (((safe_mul_func_uint8_t_u_u((l_47[3][3][0] = (0x2EL || (-1L))), l_48)) , 0x65L) && p_30.f1)), l_50[1])))) | 18446744073709551613UL)) , l_50[1])), 7)), l_50[2])))))
    { 
        union U3 l_53 = {3UL};
        int32_t l_58 = (-1L);
        int32_t l_66 = 0xAFC62902L;
        l_66 |= ((safe_sub_func_int16_t_s_s(((((l_53 , ((((l_58 ^= (safe_lshift_func_uint8_t_u_s(g_19, g_19))) && ((safe_mul_func_int8_t_s_s((((safe_rshift_func_int16_t_s_s(((l_47[0][0][3] = (((safe_mod_func_uint8_t_u_u(0UL, l_50[1])) <= p_30.f1) || p_30.f0.f2)) < l_53.f0), g_19)) != g_49) ^ 1L), g_49)) < p_30.f0.f2)) == l_50[1]) == 0UL)) != (-5L)) == l_65) | (-7L)), g_49)) ^ g_19);
    }
    else
    { 
        uint16_t l_75 = 3UL;
        int32_t l_85 = 0x16ED2767L;
    }
    if ((g_49 , l_65))
    { 
        int16_t l_106 = 0xC646L;
        g_107[2]++;
    }
    else
    { 
        for (p_30.f1 = 0; p_30.f1 < 3; p_30.f1 += 1)
        {
            l_50[p_30.f1] = 0xB5L;
        }
        g_125 = (~(safe_mod_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u((((safe_mod_func_uint16_t_u_u((g_124[0] |= (g_80 && (safe_mul_func_uint8_t_u_u((((g_119[3] , (safe_div_func_uint8_t_u_u(4UL, (safe_sub_func_uint16_t_u_u(1UL, 65535UL))))) >= g_19) && 3L), g_19)))), 0x5608L)) || p_29) | 2UL), 3)) == p_30.f0.f0), l_42)));
    }
    for (p_30.f1 = 0; (p_30.f1 > 11); p_30.f1 = safe_add_func_int8_t_s_s(p_30.f1, 6))
    { 
        uint32_t l_134 = 0x49567760L;
        int32_t l_141 = 0xFB0DB9FFL;
        struct S1 l_174 = {1L,-1L,-9L};
        int32_t l_201 = 0x04FB6B91L;
        if ((safe_div_func_uint64_t_u_u((((l_141 = (safe_add_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s(l_134, 7)), (safe_mod_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(l_134, 0x917CL)) > ((g_94[0] = (l_139 >= l_134)) || g_140)), p_30.f1))))) >= l_139) & l_47[0][2][3]), p_30.f1)))
        { 
            uint16_t l_150 = 0x4900L;
            int32_t l_151 = 0x95A862B8L;
            g_152 &= (safe_div_func_uint16_t_u_u(((g_119[1] , (safe_mod_func_uint16_t_u_u((l_134 >= (l_150 |= (p_29 != ((safe_div_func_uint32_t_u_u((((0L != l_50[0]) < p_29) >= g_49), l_139)) >= 0x7A7CBF15030246D1LL)))), l_151))) || 0x4172394782D3B2C2LL), l_50[0]));
            for (l_150 = 0; (l_150 == 5); l_150++)
            { 
                uint32_t l_156 = 4294967294UL;
                g_155 ^= 0xFA37D7A1L;
                ++l_156;
            }
        }
        else
        { 
            union U4 l_177 = {{0xE3425DD3928CDBBALL,0x03F5253A83723A68LL,1UL}};
            int32_t l_182 = 0xE1635C7AL;
            uint32_t l_183 = 0xDBB096D4L;
            int32_t l_184 = 0L;
            int32_t l_185 = 0L;
            int32_t l_202 = (-9L);
            if ((g_124[1] ^ (0x272E8F47D9D0DECCLL >= 0x98D5FDB64883662FLL)))
            { 
                --g_161[1];
            }
            else
            { 
                uint8_t l_169 = 0x3EL;
                int32_t l_171 = 0x8FD3826EL;
                l_171 = (g_164[0][0][0] , (g_170 = ((g_86[3][2] = (safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((l_169 = p_29), 4)), 0))) , (p_29 <= p_30.f1))));
                l_141 = (l_172 , ((l_173 , ((((l_174 , (safe_mod_func_uint8_t_u_u(p_30.f1, l_174.f0))) == p_29) == l_172.f0) & (-1L))) & 0x3DD64F9CL));
            }
            l_141 = (l_177 , (l_177.f1 >= ((l_177.f1 >= (g_19 |= ((g_119[3].f2 > 1L) && p_30.f1))) != l_42)));
            if ((g_86[3][2] == (((l_185 |= (safe_mod_func_uint64_t_u_u((l_177.f1 > (safe_div_func_int8_t_s_s((((((((((l_182 = g_107[2]) , (l_183 || (-1L))) , p_29) < 0xCC1EL) , l_183) != 0xEB52L) && 18446744073709551615UL) && l_177.f0.f2) >= 4294967295UL), p_30.f1))), l_184))) , p_30) , g_86[2][1])))
            { 
                return l_174.f0;
            }
            else
            { 
                l_184 = 0L;
                --l_186;
                l_203 = (l_202 |= (safe_add_func_int16_t_s_s((((safe_rshift_func_int16_t_s_s((g_49 | 0x7D95L), (l_201 = (l_182 = (l_141 |= ((safe_mul_func_int16_t_s_s(((g_200 = (g_199[0][0][0] = ((safe_div_func_uint32_t_u_u((safe_div_func_uint16_t_u_u((l_184 = (g_107[2] || l_173.f2)), p_30.f1)), l_185)) ^ g_86[1][2]))) > 0xDE78L), p_29)) <= l_177.f0.f2)))))) ^ 0x97CEL) ^ 4294967295UL), 0x3B74L)));
            }
        }
        l_47[3][3][0] = 0x94F83D7EL;
    }
    return l_104;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_86[i][j], "g_86[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_91[i], "g_91[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_94[i], "g_94[i]", print_hash_value);

    }
    transparent_crc(g_105, "g_105", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_107[i], "g_107[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_119[i].f0, "g_119[i].f0", print_hash_value);
        transparent_crc(g_119[i].f1, "g_119[i].f1", print_hash_value);
        transparent_crc(g_119[i].f2, "g_119[i].f2", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_124[i], "g_124[i]", print_hash_value);

    }
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_161[i], "g_161[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_164[i][j][k].f0, "g_164[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(g_170, "g_170", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_199[i][j][k], "g_199[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_200, "g_200", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_205[i], "g_205[i]", print_hash_value);

    }
    transparent_crc(g_206, "g_206", print_hash_value);
    transparent_crc(g_240.f0, "g_240.f0", print_hash_value);
    transparent_crc(g_249.f0, "g_249.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_252[i], "g_252[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_306[i].f0.f0, "g_306[i].f0.f0", print_hash_value);
        transparent_crc(g_306[i].f0.f1, "g_306[i].f0.f1", print_hash_value);
        transparent_crc(g_306[i].f0.f2, "g_306[i].f0.f2", print_hash_value);
        transparent_crc(g_306[i].f1, "g_306[i].f1", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_322[i], "g_322[i]", print_hash_value);

    }
    transparent_crc(g_324, "g_324", print_hash_value);
    transparent_crc(g_326, "g_326", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_327[i], "g_327[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
