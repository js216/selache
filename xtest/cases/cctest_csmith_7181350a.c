// SPDX-License-Identifier: MIT
// cctest_csmith_7181350a.c --- cctest case csmith_7181350a (csmith seed 1904293130)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x14535b41 */
/* @exp_ticks 0x3410 */

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

// Options:   -s 1904293130 -o /tmp/csmith_gen_wrm0p4g8/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int64_t  f0;
   int32_t  f1;
   int64_t  f2;
   uint32_t  f3;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int16_t  f0;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S2 {
   uint16_t  f0;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S3 {
   uint32_t  f0;
   uint32_t  f1;
   int16_t  f2;
};
#pragma pack(pop)

union U4 {
   const int32_t  f0;
   uint16_t  f1;
   int16_t  f2;
   int16_t  f3;
};

union U5 {
   const int32_t  f0;
   uint64_t  f1;
};


static int32_t g_3[1] = {(-1L)};
static int32_t g_4 = 0xADB2BC40L;
static uint16_t g_9 = 0xFB0BL;
static int64_t g_36[1][2][1] = {{{0L},{0L}}};
static uint64_t g_53 = 0x6461D90BCC9DF78ALL;
static uint16_t g_56 = 1UL;
static uint32_t g_74[3][4] = {{18446744073709551609UL,18446744073709551609UL,18446744073709551609UL,18446744073709551609UL},{18446744073709551609UL,18446744073709551609UL,18446744073709551609UL,18446744073709551609UL},{18446744073709551609UL,18446744073709551609UL,18446744073709551609UL,18446744073709551609UL}};
static int8_t g_75 = 0x7EL;
static struct S2 g_77 = {1UL};



static union U4  func_1(void);
static struct S2  func_5(int32_t  p_6, struct S1  p_7, int64_t  p_8);
static union U5  func_17(int32_t  p_18, int32_t  p_19, uint16_t  p_20);
static struct S1  func_23(int16_t  p_24, union U5  p_25, struct S3  p_26, uint32_t  p_27, uint8_t  p_28);




static union U4  func_1(void)
{ 
    uint16_t l_2[4][2] = {{0xCEC7L,0x3155L},{0x3155L,0xCEC7L},{0x3155L,0x3155L},{0xCEC7L,0x3155L}};
    struct S1 l_10 = {-8L};
    struct S0 l_78 = {0L,-7L,0xE90203C69C835A82LL,1UL};
    union U4 l_80 = {0x4FBCE554L};
    int i, j;
    for (g_3[0] = 1; (g_3[0] >= 0); g_3[0] -= 1)
    { 
        struct S0 l_79 = {-1L,-1L,-1L,9UL};
        for (g_4 = 0; (g_4 <= 1); g_4 += 1)
        { 
            int i, j;
            g_77 = func_5((g_9 = l_2[(g_4 + 1)][g_4]), l_10, l_2[(g_4 + 2)][g_3[0]]);
        }
        for (g_53 = 0; (g_53 <= 1); g_53 += 1)
        { 
            for (g_75 = 1; (g_75 >= 0); g_75 -= 1)
            { 
                int i, j;
                l_79 = l_78;
                if (l_2[(g_3[0] + 1)][g_3[0]])
                    continue;
            }
        }
    }
    return l_80;
}



static struct S2  func_5(int32_t  p_6, struct S1  p_7, int64_t  p_8)
{ 
    int64_t l_16 = 0x84255EBDA18461E7LL;
    uint64_t l_67[4][3][3] = {{{0xBA1441E233C22C9CLL,4UL,0UL},{18446744073709551614UL,4UL,4UL},{1UL,4UL,0x130E9DD37137C2AELL}},{{0xBA1441E233C22C9CLL,4UL,0UL},{18446744073709551614UL,4UL,4UL},{1UL,4UL,0x130E9DD37137C2AELL}},{{0xBA1441E233C22C9CLL,4UL,0UL},{18446744073709551614UL,4UL,0x13C75F9279698822LL},{0UL,0x13C75F9279698822LL,0x5BB1E24EB764FAD6LL}},{{0x130E9DD37137C2AELL,0x13C75F9279698822LL,0x54706CD8FDA5E0CFLL},{4UL,0x13C75F9279698822LL,0x13C75F9279698822LL},{0UL,0x13C75F9279698822LL,0x5BB1E24EB764FAD6LL}}};
    int32_t l_68 = 2L;
    struct S2 l_76 = {0xD2C8L};
    int i, j, k;
    for (g_9 = 0; (g_9 > 18); g_9++)
    { 
        int16_t l_15[5];
        union U5 l_59 = {-1L};
        int32_t l_72 = 0x11FBA650L;
        int i;
        for (i = 0; i < 5; i++)
            l_15[i] = 1L;
        for (p_7.f0 = 0; (p_7.f0 < (-30)); p_7.f0 = safe_sub_func_int8_t_s_s(p_7.f0, 3))
        { 
            union U5 l_29 = {0x34071E99L};
            struct S0 l_62 = {0xF40839CA31B86626LL,0x7E161529L,0xBC0A08677A3B2FE4LL,0x60898429L};
            int32_t l_69 = (-1L);
            if ((l_16 = l_15[2]))
            { 
                struct S3 l_30[1][5][5] = {{{{0x61131E34L,4294967288UL,0x25CFL},{0x61131E34L,4294967288UL,0x25CFL},{0x61131E34L,4294967288UL,0x25CFL},{0x61131E34L,4294967288UL,0x25CFL},{0x61131E34L,4294967288UL,0x25CFL}},{{0xFA3C9E4AL,0x435E45DBL,0xFF84L},{0xFA3C9E4AL,0x435E45DBL,0xFF84L},{0xFA3C9E4AL,0x435E45DBL,0xFF84L},{0xFA3C9E4AL,0x435E45DBL,0xFF84L},{0xFA3C9E4AL,0x435E45DBL,0xFF84L}},{{0x61131E34L,4294967288UL,0x25CFL},{0x61131E34L,4294967288UL,0x25CFL},{0x61131E34L,4294967288UL,0x25CFL},{0x61131E34L,4294967288UL,0x25CFL},{0x61131E34L,4294967288UL,0x25CFL}},{{0xFA3C9E4AL,0x435E45DBL,0xFF84L},{0xFA3C9E4AL,0x435E45DBL,0xFF84L},{0xFA3C9E4AL,0x435E45DBL,0xFF84L},{0xFA3C9E4AL,0x435E45DBL,0xFF84L},{0xFA3C9E4AL,0x435E45DBL,0xFF84L}},{{0x61131E34L,4294967288UL,0x25CFL},{0x61131E34L,4294967288UL,0x25CFL},{0x61131E34L,4294967288UL,0x25CFL},{0x61131E34L,4294967288UL,0x25CFL},{0x61131E34L,4294967288UL,0x25CFL}}}};
                int i, j, k;
                g_56 = ((p_8 | (g_3[0] ^ (func_17((safe_rshift_func_uint16_t_u_s(((l_15[2] != (func_23(g_3[0], l_29, l_30[0][4][4], p_8, g_3[0]) , 248UL)) == l_15[1]), g_9)), l_30[0][4][4].f1, p_7.f0) , (-2L)))) ^ l_15[2]);
            }
            else
            { 
                uint16_t l_73 = 0x999AL;
                l_62.f1 = (safe_rshift_func_int8_t_s_u((l_59 , (safe_lshift_func_uint16_t_u_s((((l_62 , p_6) | (safe_mod_func_uint16_t_u_u((((l_69 = ((((l_68 = ((safe_lshift_func_uint16_t_u_u((g_53 && l_16), l_67[0][2][2])) > g_3[0])) < p_7.f0) | p_8) < p_6)) > 0x2FL) , g_36[0][0][0]), p_7.f0))) && (-8L)), l_15[2]))), l_16));
                g_74[0][0] ^= (((safe_div_func_uint64_t_u_u((l_72 ^= (g_36[0][1][0] > 0x08L)), g_4)) & (l_73 = p_8)) <= l_16);
                if (g_4)
                    continue;
            }
        }
        g_75 = g_36[0][0][0];
    }
    return l_76;
}



static union U5  func_17(int32_t  p_18, int32_t  p_19, uint16_t  p_20)
{ 
    int32_t l_51 = 0xAED293E3L;
    int32_t l_52 = 9L;
    int32_t l_54[1];
    union U5 l_55 = {0x87A760F2L};
    int i;
    for (i = 0; i < 1; i++)
        l_54[i] = 4L;
    l_54[0] |= (safe_sub_func_int64_t_s_s(g_36[0][1][0], (((safe_add_func_int8_t_s_s((safe_div_func_uint64_t_u_u(p_18, (l_52 = (safe_rshift_func_uint8_t_u_u(g_9, (g_53 |= ((((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((l_51 = 0x63L), 251UL)), l_52)) > p_20) | p_20) < p_20))))))), g_36[0][1][0])) > 0xE255298AL) == p_18)));
    return l_55;
}



static struct S1  func_23(int16_t  p_24, union U5  p_25, struct S3  p_26, uint32_t  p_27, uint8_t  p_28)
{ 
    uint64_t l_35[5][5] = {{0xFCE2495621847726LL,0x9F4802D14A59E478LL,0x9F4802D14A59E478LL,0xFCE2495621847726LL,0x510212AEAFD71021LL},{0xFCE2495621847726LL,0UL,0x3C66883CE7179999LL,0x3C66883CE7179999LL,0UL},{0x510212AEAFD71021LL,0x9F4802D14A59E478LL,0x3C66883CE7179999LL,18446744073709551615UL,18446744073709551615UL},{0x9F4802D14A59E478LL,0x510212AEAFD71021LL,0x9F4802D14A59E478LL,0x3C66883CE7179999LL,18446744073709551615UL},{0UL,0xFCE2495621847726LL,18446744073709551615UL,0xFCE2495621847726LL,0UL}};
    int32_t l_37 = 0xC7F5175DL;
    struct S1 l_38 = {1L};
    int i, j;
    l_37 = (0x996E1580L & (safe_add_func_uint32_t_u_u((g_36[0][1][0] = ((((safe_add_func_uint16_t_u_u(l_35[1][2], p_26.f2)) && (8UL & 0L)) || g_3[0]) != g_4)), p_26.f2)));
    return l_38;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_3[i], "g_3[i]", print_hash_value);

    }
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_36[i][j][k], "g_36[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_74[i][j], "g_74[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_77.f0, "g_77.f0", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
