// SPDX-License-Identifier: MIT
// cctest_csmith_30a7ac5d.c --- cctest case csmith_30a7ac5d (csmith seed 816295005)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x38d62a1 */
/* @exp_ticks 0x9180 */

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

// Options:   -s 816295005 -o /tmp/csmith_gen_hb_ubabp/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint16_t  f0;
   int32_t  f1;
   const int32_t  f2;
   uint64_t  f3;
};
#pragma pack(pop)

union U1 {
   const int16_t  f0;
   int64_t  f1;
   int32_t  f2;
   uint32_t  f3;
};

union U2 {
   const int32_t  f0;
   const int64_t  f1;
   int32_t  f2;
   const uint8_t  f3;
   uint8_t  f4;
};


static int32_t g_3 = 0x6673E7EDL;
static int16_t g_55[2] = {0xA064L,0xA064L};
static uint16_t g_58 = 0xEF27L;
static uint8_t g_61[3] = {9UL,9UL,9UL};
static union U2 g_62[7][2][3] = {{{{0x508211ABL},{0x508211ABL},{0x508211ABL}},{{0x508211ABL},{0x508211ABL},{0x508211ABL}}},{{{0x508211ABL},{0x508211ABL},{0x508211ABL}},{{0x508211ABL},{0x508211ABL},{0x508211ABL}}},{{{0x508211ABL},{0x508211ABL},{0x508211ABL}},{{0x508211ABL},{0x508211ABL},{0x508211ABL}}},{{{0x508211ABL},{0x508211ABL},{0x508211ABL}},{{0x508211ABL},{0x508211ABL},{0x508211ABL}}},{{{0x508211ABL},{0x508211ABL},{0x508211ABL}},{{0x508211ABL},{0x508211ABL},{0x508211ABL}}},{{{0x508211ABL},{0x508211ABL},{0x508211ABL}},{{0x508211ABL},{0x508211ABL},{0x508211ABL}}},{{{0x508211ABL},{0x508211ABL},{0x508211ABL}},{{0x508211ABL},{0x508211ABL},{0x508211ABL}}}};
static const struct S0 g_66 = {0xCDBBL,-2L,2L,0x9C4D355714A8A5A2LL};
static int32_t *g_71 = &g_3;
static int32_t **g_70 = &g_71;
static int32_t ***g_69[2][2][4] = {{{&g_70,(void*)0,(void*)0,&g_70},{&g_70,(void*)0,&g_70,(void*)0}},{{(void*)0,&g_70,&g_70,&g_70},{&g_70,&g_70,(void*)0,&g_70}}};
static uint32_t g_85 = 8UL;
static union U1 g_89[1] = {{0x6ADBL}};
static union U1 g_95 = {0x39EBL};
static union U1 *g_94 = &g_95;
static union U1 g_97[3][1][4] = {{{{-9L},{-9L},{-9L},{-9L}}},{{{-9L},{-9L},{-9L},{-9L}}},{{{-9L},{-9L},{-9L},{-9L}}}};
static uint32_t g_134 = 0xBB32BA0DL;
static uint32_t g_136 = 0x71B159BDL;
static int32_t *g_144[1][4] = {{&g_62[1][0][1].f2,&g_62[1][0][1].f2,&g_62[1][0][1].f2,&g_62[1][0][1].f2}};
static int32_t **g_143 = &g_144[0][1];
static int16_t g_149[1] = {1L};
static int8_t g_210 = 0xE1L;
static int8_t * const g_235 = &g_210;
static int8_t * const *g_234 = &g_235;
static uint64_t g_267 = 18446744073709551610UL;
static uint8_t g_305 = 1UL;
static uint64_t g_354 = 0x69133A3F08449452LL;
static int8_t *g_360 = &g_210;
static int8_t **g_359[2][5] = {{&g_360,&g_360,&g_360,&g_360,&g_360},{&g_360,&g_360,&g_360,&g_360,&g_360}};
static int8_t ***g_358 = &g_359[0][3];
static int8_t ****g_357 = &g_358;
static uint32_t *g_412 = &g_136;
static uint32_t **g_411 = &g_412;
static uint32_t ***g_410 = &g_411;
static int32_t g_494 = 0xD3878C1EL;
static uint64_t *g_503 = &g_354;
static uint64_t * const *g_542 = (void*)0;
static uint64_t * const **g_541 = &g_542;
static const union U1 *g_550 = &g_97[2][0][1];
static const union U1 **g_549 = &g_550;
static uint16_t g_589 = 65531UL;
static struct S0 g_633 = {0xCDB9L,0x8B73CA6EL,-1L,18446744073709551615UL};
static int64_t * const *g_654 = (void*)0;
static struct S0 g_740 = {65532UL,1L,-9L,0x440DD083569AA385LL};
static struct S0 g_743[1][6][4] = {{{{0x7246L,0xA8E1F7BBL,0xB3E008DCL,18446744073709551615UL},{0x98AFL,0L,0x1794BF85L,18446744073709551615UL},{65533UL,-1L,0x9BAFAC5BL,0xB7D27AA0BB3F95C2LL},{0x98AFL,0L,0x1794BF85L,18446744073709551615UL}},{{0x98AFL,0L,0x1794BF85L,18446744073709551615UL},{65535UL,-1L,1L,18446744073709551615UL},{65533UL,-1L,0x9BAFAC5BL,0xB7D27AA0BB3F95C2LL},{65533UL,-1L,0x9BAFAC5BL,0xB7D27AA0BB3F95C2LL}},{{0x7246L,0xA8E1F7BBL,0xB3E008DCL,18446744073709551615UL},{0x7246L,0xA8E1F7BBL,0xB3E008DCL,18446744073709551615UL},{0x98AFL,0L,0x1794BF85L,18446744073709551615UL},{65533UL,-1L,0x9BAFAC5BL,0xB7D27AA0BB3F95C2LL}},{{0x3D33L,0x1A3E1604L,0x787D4901L,18446744073709551615UL},{65535UL,-1L,1L,18446744073709551615UL},{0x3D33L,0x1A3E1604L,0x787D4901L,18446744073709551615UL},{0x98AFL,0L,0x1794BF85L,18446744073709551615UL}},{{0x3D33L,0x1A3E1604L,0x787D4901L,18446744073709551615UL},{0x98AFL,0L,0x1794BF85L,18446744073709551615UL},{0x98AFL,0L,0x1794BF85L,18446744073709551615UL},{0x3D33L,0x1A3E1604L,0x787D4901L,18446744073709551615UL}},{{0x7246L,0xA8E1F7BBL,0xB3E008DCL,18446744073709551615UL},{0x98AFL,0L,0x1794BF85L,18446744073709551615UL},{65533UL,-1L,0x9BAFAC5BL,0xB7D27AA0BB3F95C2LL},{0x98AFL,0L,0x1794BF85L,18446744073709551615UL}}}};
static int16_t g_774 = 0xC848L;
static int16_t g_796 = 0L;
static int64_t g_854 = 6L;
static int8_t g_954 = 6L;
static uint64_t g_957[5] = {0UL,0UL,0UL,0UL,0UL};
static int32_t **g_968[3][3][4] = {{{&g_71,(void*)0,&g_71,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{&g_71,(void*)0,&g_71,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{&g_71,(void*)0,&g_71,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_71,(void*)0,&g_71,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{&g_71,(void*)0,&g_71,(void*)0}}};
static uint16_t g_1046 = 0xE1CAL;
static const uint16_t g_1054 = 0x56D5L;
static struct S0 g_1201 = {0xF0CCL,0L,0xFEFDB573L,0xD50317CD54767167LL};
static const uint64_t g_1224[1] = {0x94CF967ADF2704DALL};
static union U1 **g_1309 = &g_94;
static union U1 ***g_1308 = &g_1309;
static union U1 g_1314 = {-6L};
static union U1 * const g_1313 = &g_1314;
static union U1 * const *g_1312 = &g_1313;
static union U1 * const **g_1311 = &g_1312;



static int64_t  func_1(void);
static int8_t  func_4(int64_t  p_5, uint32_t  p_6, union U2  p_7, int32_t  p_8);
static int8_t  func_13(int16_t  p_14, int32_t  p_15, int64_t  p_16, uint16_t  p_17);
static union U2  func_19(struct S0  p_20, int32_t  p_21, int8_t  p_22, int32_t  p_23);
static struct S0  func_24(int8_t  p_25, const struct S0  p_26, union U2  p_27, uint64_t  p_28);
static union U2  func_29(const int8_t  p_30);
static const int8_t  func_31(uint32_t  p_32);
static const int8_t  func_35(uint64_t  p_36, union U1  p_37, int16_t  p_38);




static int64_t  func_1(void)
{ 
    int32_t l_2[7][4][4] = {{{(-1L),0xA147B80BL,1L,0L},{0x39E3CF95L,0xA147B80BL,0xA147B80BL,0x39E3CF95L},{0xA147B80BL,0x39E3CF95L,(-1L),0x9C4185A1L},{0xA147B80BL,(-1L),0xA147B80BL,1L}},{{0x39E3CF95L,0x9C4185A1L,1L,1L},{(-1L),(-1L),0L,0x9C4185A1L},{0x9C4185A1L,0x39E3CF95L,0L,0x39E3CF95L},{(-1L),0xA147B80BL,1L,0L}},{{0x39E3CF95L,0xA147B80BL,0xA147B80BL,0x39E3CF95L},{0xA147B80BL,0x39E3CF95L,(-1L),0x9C4185A1L},{0xA147B80BL,(-1L),0xA147B80BL,1L},{0x39E3CF95L,0x9C4185A1L,1L,1L}},{{(-1L),(-1L),0L,0x9C4185A1L},{0x9C4185A1L,0x39E3CF95L,0L,0x39E3CF95L},{(-1L),0xA147B80BL,1L,0L},{0x39E3CF95L,0xA147B80BL,0xA147B80BL,0x39E3CF95L}},{{0xA147B80BL,0x39E3CF95L,(-1L),0x9C4185A1L},{0xA147B80BL,(-1L),0xA147B80BL,1L},{0x39E3CF95L,0x9C4185A1L,1L,1L},{(-1L),(-1L),0L,0x9C4185A1L}},{{1L,0xA147B80BL,(-1L),0xA147B80BL},{(-1L),0x9C4185A1L,0L,(-1L)},{0xA147B80BL,0x9C4185A1L,0x9C4185A1L,0xA147B80BL},{0x9C4185A1L,0xA147B80BL,(-1L),1L}},{{0x9C4185A1L,(-1L),0x9C4185A1L,0L},{0xA147B80BL,1L,0L,0L},{(-1L),(-1L),(-1L),1L},{1L,0xA147B80BL,(-1L),0xA147B80BL}}};
    int32_t l_512[5] = {0x6E1B50E7L,0x6E1B50E7L,0x6E1B50E7L,0x6E1B50E7L,0x6E1B50E7L};
    uint32_t l_513 = 0x3EBF27A8L;
    uint8_t l_865 = 0xF2L;
    int8_t ***** const l_887 = &g_357;
    uint32_t l_934 = 18446744073709551608UL;
    int8_t l_951 = 8L;
    int32_t l_991 = 0xC4DCB330L;
    int64_t l_993 = 1L;
    uint16_t l_1006 = 65535UL;
    int32_t *l_1021 = &l_512[4];
    struct S0 l_1036[5] = {{65535UL,0x4D07C38FL,7L,0x282F866C93F4E505LL},{65535UL,0x4D07C38FL,7L,0x282F866C93F4E505LL},{65535UL,0x4D07C38FL,7L,0x282F866C93F4E505LL},{65535UL,0x4D07C38FL,7L,0x282F866C93F4E505LL},{65535UL,0x4D07C38FL,7L,0x282F866C93F4E505LL}};
    uint64_t l_1043[4][4][1] = {{{0x7B217B03A04A0B61LL},{18446744073709551611UL},{18446744073709551608UL},{18446744073709551611UL}},{{0x7B217B03A04A0B61LL},{18446744073709551611UL},{18446744073709551608UL},{18446744073709551611UL}},{{0x7B217B03A04A0B61LL},{18446744073709551611UL},{18446744073709551608UL},{18446744073709551611UL}},{{0x7B217B03A04A0B61LL},{18446744073709551611UL},{18446744073709551608UL},{18446744073709551611UL}}};
    int8_t l_1053 = 5L;
    int8_t l_1082 = 1L;
    int16_t l_1100 = 0x6B8AL;
    int32_t l_1112 = 0x0C94DF4DL;
    uint32_t l_1127 = 4294967289UL;
    uint32_t l_1159 = 18446744073709551611UL;
    union U2 l_1194 = {0xF8B98174L};
    uint8_t l_1220 = 0UL;
    uint32_t l_1243[2][3] = {{4294967291UL,4294967291UL,4UL},{4294967291UL,4294967291UL,4UL}};
    int16_t l_1272[4];
    int32_t l_1300 = 0xDF2986BAL;
    uint64_t **l_1328 = (void*)0;
    uint64_t ***l_1327 = &l_1328;
    uint64_t ****l_1326 = &l_1327;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1272[i] = (-1L);
    for (g_3 = 0; (g_3 <= 3); g_3 += 1)
    { 
        uint32_t l_18 = 0x0B597857L;
        union U1 l_39 = {0L};
        union U2 l_514 = {0x47940FB9L};
        int32_t *l_838 = &g_494;
        int8_t *l_855 = &g_210;
        int8_t **l_859 = &l_855;
        uint32_t **l_906 = &g_412;
        const uint32_t l_931 = 0xA887AD10L;
        int32_t l_952 = 0x207216A5L;
        int32_t l_953 = 5L;
        int32_t l_955 = 0L;
        int32_t l_956[5][4][3];
        int32_t ***l_1003 = (void*)0;
        int32_t * const l_1026[6] = {&g_740.f1,&g_740.f1,&g_740.f1,&g_740.f1,&g_740.f1,&g_740.f1};
        const int16_t l_1032 = 0L;
        int i, j, k;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 4; j++)
            {
                for (k = 0; k < 3; k++)
                    l_956[i][j][k] = 1L;
            }
        }
    }
    return g_796;
}



static int8_t  func_4(int64_t  p_5, uint32_t  p_6, union U2  p_7, int32_t  p_8)
{ 
    int32_t *l_515 = (void*)0;
    int32_t *l_516 = &g_97[0][0][3].f2;
    int32_t *l_517 = &g_89[0].f2;
    int32_t *l_518 = &g_89[0].f2;
    int32_t *l_519 = &g_95.f2;
    int32_t *l_520 = &g_89[0].f2;
    int32_t *l_521[1][6];
    uint32_t l_522 = 0x954138DAL;
    uint32_t l_618 = 0x6D7270BDL;
    union U1 l_650 = {-1L};
    uint32_t l_659 = 0x41B2660CL;
    int32_t ***l_666 = &g_70;
    uint64_t **l_751[3];
    uint64_t ***l_750[1];
    uint64_t l_793 = 0x983723FF6A49CDACLL;
    uint8_t l_800 = 0UL;
    int32_t **l_830 = &l_518;
    uint16_t l_832 = 0x28EAL;
    const uint32_t *l_836 = &g_134;
    const uint32_t **l_835 = &l_836;
    const uint32_t ***l_834 = &l_835;
    const uint32_t ****l_833[4];
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
            l_521[i][j] = &g_95.f2;
    }
    for (i = 0; i < 3; i++)
        l_751[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_750[i] = &l_751[0];
    for (i = 0; i < 4; i++)
        l_833[i] = &l_834;
    (*g_70) = l_515;
    l_522--;
    for (g_85 = 0; (g_85 >= 5); g_85 = safe_add_func_uint8_t_u_u(g_85, 9))
    { 
        uint8_t *l_529 = &g_61[0];
        uint8_t *l_530 = &g_305;
        uint8_t *l_531 = (void*)0;
        uint8_t *l_532 = (void*)0;
        uint8_t *l_533 = &g_62[1][0][1].f4;
        int32_t l_534 = 1L;
        uint64_t *l_538[2];
        int8_t ****l_554 = &g_358;
        uint64_t l_559 = 0x95B48A21B464D79BLL;
        int32_t l_574 = (-1L);
        int32_t l_575 = 0xF20380C4L;
        int32_t l_577[5];
        int64_t **l_689 = (void*)0;
        int32_t **l_692 = &g_144[0][1];
        struct S0 l_700 = {65535UL,1L,0x4C99BABAL,0x76473DABE391DDA2LL};
        int8_t ** const *l_703 = &g_359[0][3];
        int8_t ** const **l_702 = &l_703;
        int8_t ** const ***l_701 = &l_702;
        int32_t ****l_725 = &g_69[1][1][3];
        struct S0 *l_742 = &g_743[0][5][2];
        int32_t l_753 = 0xCBFB81D3L;
        int32_t l_759 = 0x4D0CC6D8L;
        uint64_t l_760 = 3UL;
        int16_t l_776[7][4][6] = {{{1L,0xAA70L,5L,0xAA70L,1L,0xF940L},{0x204FL,0xAA70L,0x0C8FL,0xAA70L,0x204FL,0xF940L},{1L,0xAA70L,5L,0xAA70L,1L,0xF940L},{0x204FL,0xAA70L,0x0C8FL,0xAA70L,0x204FL,0xF940L}},{{1L,0xAA70L,5L,0xAA70L,1L,0xF940L},{0x204FL,0xAA70L,0x0C8FL,0xAA70L,0x204FL,0xF940L},{1L,0xAA70L,5L,0xAA70L,1L,0xF940L},{0x204FL,0xAA70L,0x0C8FL,0xAA70L,0x204FL,0xF940L}},{{1L,0xAA70L,5L,0xAA70L,1L,0xF940L},{0x204FL,0xAA70L,0x0C8FL,0xAA70L,0x204FL,0xF940L},{1L,0xAA70L,5L,0xAA70L,1L,0xF940L},{0x204FL,0xAA70L,0x0C8FL,0xAA70L,0x204FL,0xF940L}},{{1L,0xAA70L,5L,0xAA70L,1L,0xF940L},{0x204FL,0xAA70L,0x0C8FL,0xAA70L,0x204FL,0xF940L},{1L,0xAA70L,5L,0xAA70L,1L,0xF940L},{0x204FL,0xAA70L,0x0C8FL,0xAA70L,0x204FL,0xF940L}},{{1L,0xAA70L,5L,0xAA70L,1L,0xF940L},{0x204FL,0xAA70L,0x0C8FL,0xAA70L,0x204FL,0xF940L},{1L,0xAA70L,5L,0xAA70L,1L,0xF940L},{0x204FL,0xAA70L,0x0C8FL,0xAA70L,0x204FL,0xF940L}},{{0xE1ADL,0xD1F5L,1L,0xD1F5L,0xE1ADL,0xAA70L},{0x696CL,0xD1F5L,0x204FL,0xD1F5L,0x696CL,0xAA70L},{0xE1ADL,0xD1F5L,1L,0xD1F5L,0xE1ADL,0xAA70L},{0x696CL,0xD1F5L,0x204FL,0xD1F5L,0x696CL,0xAA70L}},{{0xE1ADL,0xD1F5L,1L,0xD1F5L,0xE1ADL,0xAA70L},{0x696CL,0xD1F5L,0x204FL,0xD1F5L,0x696CL,0xAA70L},{0xE1ADL,0xD1F5L,1L,0xD1F5L,0xE1ADL,0xAA70L},{0x696CL,0xD1F5L,0x204FL,0xD1F5L,0x696CL,0xAA70L}}};
        int8_t ** const *l_816 = &g_359[0][3];
        union U1 l_818 = {0xD3C7L};
        uint32_t * const l_829 = (void*)0;
        int32_t **l_831[5] = {&g_71,&g_71,&g_71,&g_71,&g_71};
        const uint32_t *****l_837 = &l_833[3];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_538[i] = &g_354;
        for (i = 0; i < 5; i++)
            l_577[i] = (-1L);
    }
    return (**g_234);
}



static int8_t  func_13(int16_t  p_14, int32_t  p_15, int64_t  p_16, uint16_t  p_17)
{ 
    int16_t l_478 = 0x169CL;
    int32_t l_492[5][7] = {{0xD5EC1698L,8L,3L,3L,8L,0xD5EC1698L,8L},{1L,0xD5EC1698L,0xD5EC1698L,1L,8L,1L,0xD5EC1698L},{0x0389E715L,0x0389E715L,0xD5EC1698L,3L,0xD5EC1698L,0x0389E715L,0x0389E715L},{0x0389E715L,0xD5EC1698L,3L,0xD5EC1698L,0x0389E715L,0x0389E715L,0xD5EC1698L},{1L,8L,1L,0xD5EC1698L,0xD5EC1698L,1L,8L}};
    int32_t l_500 = 0L;
    uint64_t * const l_504 = &g_354;
    int16_t l_506[5][4][4];
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
                l_506[i][j][k] = 9L;
        }
    }
    for (g_267 = (-24); (g_267 != 37); g_267++)
    { 
        int32_t *l_473 = &g_89[0].f2;
        int32_t *l_474 = (void*)0;
        int32_t l_475 = 0xEF0CBEA1L;
        int32_t *l_476 = &g_89[0].f2;
        int32_t *l_477 = &l_475;
        int32_t *l_479 = &g_89[0].f2;
        int32_t *l_480 = (void*)0;
        int32_t *l_481 = &g_97[0][0][3].f2;
        int32_t *l_482 = &l_475;
        int32_t *l_483 = &l_475;
        int32_t *l_484 = &g_95.f2;
        int32_t *l_485 = (void*)0;
        int32_t *l_486 = &l_475;
        int32_t *l_487 = &g_89[0].f2;
        int32_t *l_488 = &g_97[0][0][3].f2;
        int32_t *l_489 = &g_89[0].f2;
        int32_t *l_490 = &g_95.f2;
        int32_t *l_491[4][2] = {{&g_3,&g_3},{&g_3,&g_3},{&g_3,&g_3},{&g_3,&g_3}};
        int8_t l_493 = 0xF0L;
        uint32_t l_495 = 0UL;
        uint64_t *l_502 = (void*)0;
        uint64_t **l_501[6];
        int32_t l_505[4][6] = {{(-10L),(-10L),0xB1D95CC4L,0xACEBF6C1L,0x3F67A7A1L,0xB1D95CC4L},{0xACEBF6C1L,0x3F67A7A1L,0xB1D95CC4L,0x3F67A7A1L,0xACEBF6C1L,0xB1D95CC4L},{0x3F67A7A1L,0xACEBF6C1L,0xB1D95CC4L,(-10L),(-10L),0xB1D95CC4L},{(-10L),(-10L),0xB1D95CC4L,0xACEBF6C1L,0x3F67A7A1L,0xB1D95CC4L}};
        int16_t l_507 = 0xE176L;
        int32_t l_508 = (-7L);
        uint16_t l_509 = 0x84D3L;
        int i, j;
        for (i = 0; i < 6; i++)
            l_501[i] = &l_502;
        l_495++;
        if (p_16)
            continue;
        (*l_479) = ((safe_rshift_func_uint16_t_u_u((l_500 , ((((*g_235) && (g_89[0].f0 & 0xB7E9L)) >= 9L) != (func_29((((g_503 = &g_354) != l_504) ^ (*g_235))) , (*g_503)))), p_15)) , l_492[3][2]);
        ++l_509;
    }
    return l_492[4][3];
}



static union U2  func_19(struct S0  p_20, int32_t  p_21, int8_t  p_22, int32_t  p_23)
{ 
    int8_t **l_285 = (void*)0;
    int8_t ***l_284 = &l_285;
    int32_t l_301 = 0xBD8694E4L;
    int32_t l_306 = 0x12DCD832L;
    int32_t l_307 = 2L;
    struct S0 l_323 = {0x2A83L,-10L,0xC3065EFAL,18446744073709551612UL};
    union U2 l_324 = {0x19FCC667L};
    int32_t l_341 = 8L;
    int32_t l_344 = 0xE4E165E3L;
    int32_t l_345 = 2L;
    int8_t l_388 = 0x49L;
    uint32_t l_417 = 0xA6669404L;
    uint8_t *l_450 = (void*)0;
    uint8_t *l_451 = &l_324.f4;
    uint64_t l_455 = 0x5D2B4CEA0C64D308LL;
    uint16_t l_456 = 0xE6A2L;
    int32_t l_461 = (-1L);
    uint32_t l_469 = 7UL;
    int32_t *l_470 = &g_89[0].f2;
    for (g_136 = (-28); (g_136 != 42); ++g_136)
    { 
        int32_t **l_316 = &g_71;
        int32_t l_339 = 0xEF9147D9L;
        int32_t l_342 = 0x7505B71CL;
        int32_t l_343[4][2];
        uint8_t l_351[1];
        union U1 l_385 = {0x1A86L};
        int64_t *l_395 = (void*)0;
        int64_t *l_396 = &g_97[0][0][3].f1;
        uint64_t l_429[6][4][6] = {{{0x62EE016AD1CE2065LL,1UL,0x7DD522698847040ELL,3UL,18446744073709551615UL,18446744073709551613UL},{0UL,0x62EE016AD1CE2065LL,0xB3422183DC921ABDLL,0xF9638552AB017C3FLL,18446744073709551613UL,0x4868A367013C0B01LL},{18446744073709551615UL,0x1BBF9B41F01BC57FLL,18446744073709551615UL,0x7CAD8C16F56A687CLL,0x95DDBA14C94FAA99LL,3UL},{0x1BBF9B41F01BC57FLL,0x4868A367013C0B01LL,0x56CBC40B6AFEA466LL,0x56CBC40B6AFEA466LL,0x4868A367013C0B01LL,0x1BBF9B41F01BC57FLL}},{{0xB3422183DC921ABDLL,18446744073709551608UL,0UL,0xB0A7030AC782E796LL,0x11BEFE2CFEDF3A77LL,0UL},{0UL,0x7DD522698847040ELL,1UL,0xE46E817723F62D74LL,0UL,0x52E092D3DB410359LL},{0UL,18446744073709551613UL,0xE46E817723F62D74LL,0xB0A7030AC782E796LL,0xBD0841CFCD284064LL,0x95DDBA14C94FAA99LL},{0xB3422183DC921ABDLL,0x11BEFE2CFEDF3A77LL,0UL,0x56CBC40B6AFEA466LL,0xE46E817723F62D74LL,18446744073709551613UL}},{{0x1BBF9B41F01BC57FLL,0xB3422183DC921ABDLL,18446744073709551615UL,0x7CAD8C16F56A687CLL,1UL,0x27CFA79D1801DB5BLL},{18446744073709551615UL,0xE3091CEC666D2713LL,0xE84D8DF74B69C448LL,0xF9638552AB017C3FLL,0x27CFA79D1801DB5BLL,0x56CBC40B6AFEA466LL},{0UL,0x4868A367013C0B01LL,18446744073709551615UL,3UL,0x8C659980B3210B33LL,0x80D69E3D3D781EBBLL},{0x62EE016AD1CE2065LL,0x7CAD8C16F56A687CLL,0UL,0x95DDBA14C94FAA99LL,0UL,0x62EE016AD1CE2065LL}},{{2UL,0x49A4BEFFA0DFD863LL,0xE46E817723F62D74LL,0x8F35AB6E7A952FBCLL,0UL,18446744073709551615UL},{0xCAFF69778CD866EBLL,0UL,0UL,0x52E092D3DB410359LL,0xF9638552AB017C3FLL,3UL},{0x49A4BEFFA0DFD863LL,0UL,0x4868A367013C0B01LL,18446744073709551615UL,0UL,18446744073709551613UL},{0x7DD522698847040ELL,0x49A4BEFFA0DFD863LL,0xB0A7030AC782E796LL,0xA76F0093FF0AD990LL,1UL,0x047336322041FA79LL}},{{0x047336322041FA79LL,0x62EE016AD1CE2065LL,1UL,0x7DD522698847040ELL,3UL,18446744073709551615UL},{0UL,0x52E092D3DB410359LL,0UL,0xE46E817723F62D74LL,1UL,0x7DD522698847040ELL},{18446744073709551615UL,0x7DD522698847040ELL,1UL,3UL,0xCAFF69778CD866EBLL,0UL},{1UL,0x95DDBA14C94FAA99LL,0xE84D8DF74B69C448LL,0x8F35AB6E7A952FBCLL,0x8F35AB6E7A952FBCLL,0xE84D8DF74B69C448LL}},{{18446744073709551612UL,18446744073709551612UL,18446744073709551613UL,1UL,0xF9638552AB017C3FLL,18446744073709551615UL},{0x27CFA79D1801DB5BLL,0xBD0841CFCD284064LL,0x49A4BEFFA0DFD863LL,0xE84D8DF74B69C448LL,0UL,18446744073709551613UL},{0x62EE016AD1CE2065LL,0x27CFA79D1801DB5BLL,0x49A4BEFFA0DFD863LL,0UL,18446744073709551612UL,18446744073709551615UL},{0x047336322041FA79LL,0UL,18446744073709551613UL,0xB3422183DC921ABDLL,0x52E092D3DB410359LL,0xE84D8DF74B69C448LL}}};
        int16_t l_444 = 0x936EL;
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 2; j++)
                l_343[i][j] = 0x3E263C94L;
        }
        for (i = 0; i < 1; i++)
            l_351[i] = 0xFEL;
        for (g_267 = 0; (g_267 <= 0); g_267 += 1)
        { 
            int32_t l_278 = (-8L);
            int32_t l_338 = (-1L);
            int32_t l_340[7];
            uint16_t l_362 = 0x5AC3L;
            int32_t *l_376 = &l_340[4];
            uint8_t l_382 = 0x84L;
            int i;
            for (i = 0; i < 7; i++)
                l_340[i] = 0xA24C8CDCL;
            if (p_23)
            { 
                uint64_t l_299 = 0xAA7E5032B20FDAC4LL;
                int32_t l_303 = 1L;
                int32_t l_308 = 1L;
                int32_t *l_309 = &l_308;
                int16_t l_346 = 0x727DL;
                int32_t l_347 = 8L;
                int32_t l_348 = 0xCA4E295CL;
                int64_t l_349 = 0x3D2653FE0DA037CBLL;
                int32_t l_350[2][5] = {{8L,8L,1L,8L,8L},{0x3C349576L,8L,0x3C349576L,0x3C349576L,8L}};
                int i, j;
                for (p_23 = 0; (p_23 >= 0); p_23 -= 1)
                { 
                    int32_t *l_279 = &g_95.f2;
                    uint64_t *l_283 = &g_267;
                    int8_t ***l_286 = &l_285;
                    uint8_t *l_300 = &g_62[1][0][1].f4;
                    uint8_t *l_302 = &g_61[1];
                    uint8_t *l_304[5] = {&g_305,&g_305,&g_305,&g_305,&g_305};
                    int i;
                    (*g_70) = (void*)0;
                    (*l_279) = (l_278 <= 0x274E396DL);
                    l_307 ^= (((safe_lshift_func_int8_t_s_s((!(l_283 == l_283)), (l_284 == l_286))) || 0xEDL) || (l_306 = (g_305 = (safe_mod_func_uint16_t_u_u(65534UL, (safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(((safe_sub_func_uint64_t_u_u((((*l_302) = ((safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s((l_301 &= ((*l_300) = ((g_3 >= l_299) & p_20.f3))), 2)) > 0UL), p_20.f3)) & p_22)) >= l_303), p_20.f1)) | g_149[0]), 13)), g_95.f2)))))));
                }
                l_308 &= p_20.f3;
                (*l_309) ^= p_23;
                (*l_309) = p_20.f3;
                if ((safe_add_func_int64_t_s_s(((((safe_lshift_func_uint8_t_u_s(((safe_mul_func_int8_t_s_s((&l_309 == l_316), (safe_mul_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u(((l_323 , ((&g_235 != &g_235) >= ((*l_309) , l_301))) <= g_149[0]), 0)) , 3UL), p_22)) != l_323.f1) ^ 1UL), p_22)))) == (*l_309)), l_278)) && g_61[2]) == g_136) || 0x36DCL), 0xE432CE061FFB33DBLL)))
                { 
                    return l_324;
                }
                else
                { 
                    int32_t *l_325 = &g_95.f2;
                    int32_t *l_326 = (void*)0;
                    int32_t *l_327 = &g_89[0].f2;
                    int32_t *l_328 = &l_307;
                    int32_t *l_329 = &g_95.f2;
                    int32_t *l_330 = (void*)0;
                    int32_t *l_331 = &g_97[0][0][3].f2;
                    int32_t *l_332 = &g_95.f2;
                    int32_t *l_333 = &g_95.f2;
                    int32_t *l_334 = (void*)0;
                    int32_t *l_335 = &g_95.f2;
                    int32_t *l_336 = &l_306;
                    int32_t *l_337[6][2] = {{&l_308,&l_308},{&l_306,&g_3},{&l_308,&g_3},{&l_306,&l_308},{&l_308,&l_308},{&l_308,&l_308}};
                    int8_t *****l_361[3][5] = {{&g_357,&g_357,&g_357,&g_357,&g_357},{&g_357,&g_357,&g_357,&g_357,&g_357},{&g_357,&g_357,&g_357,&g_357,&g_357}};
                    int i, j;
                    l_351[0]++;
                    g_354--;
                    (*l_335) = p_20.f0;
                    g_357 = g_357;
                    --l_362;
                }
            }
            else
            { 
                int32_t *l_367 = &g_89[0].f2;
                int32_t *l_368 = &l_343[1][1];
                int32_t **l_375[4];
                int64_t *l_381 = &g_97[0][0][3].f1;
                int i, j;
                for (i = 0; i < 4; i++)
                    l_375[i] = &l_368;
                for (g_305 = 0; (g_305 <= 0); g_305 += 1)
                { 
                    int32_t *l_365 = &g_97[0][0][3].f2;
                    int32_t *l_366 = &l_343[1][0];
                    (*l_366) &= ((void*)0 != (*g_357));
                }
                (*l_368) &= l_340[6];
                l_343[1][0] = ((safe_rshift_func_int16_t_s_s(((safe_div_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s(((0x851AL || ((l_376 = g_144[g_267][(g_267 + 3)]) != g_144[g_267][(g_267 + 2)])) == (g_58 != (safe_lshift_func_uint16_t_u_u(l_341, 15)))), (((((((((*l_381) = (safe_add_func_int8_t_s_s(p_20.f3, 0UL))) >= g_61[0]) < l_382) > p_22) >= p_20.f3) & g_149[0]) | l_324.f2) == (****g_357)))), 1L)) , g_66.f1), 9)) , (*l_368));
                (*l_368) = 1L;
            }
        }
        if (l_351[0])
            break;
        if ((p_21 | ((l_385 , (safe_div_func_uint16_t_u_u((l_344 < g_62[1][0][1].f4), l_388))) <= (safe_div_func_int64_t_s_s(((*l_396) = (safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(g_85, g_3)), (**g_234)))), g_149[0])))))
        { 
            int16_t l_416[6][7] = {{(-1L),(-1L),1L,(-1L),(-1L),0L,(-1L)},{(-6L),0x4E40L,0x4E40L,(-6L),0x4E40L,0x4E40L,(-6L)},{0x2DF0L,(-1L),0x2DF0L,0xA9C3L,(-1L),0xA9C3L,0x2DF0L},{(-6L),(-6L),0x8986L,(-6L),(-6L),0x8986L,(-6L)},{(-1L),0xA9C3L,0x2DF0L,(-1L),0x2DF0L,0xA9C3L,(-1L)},{0x4E40L,(-6L),0x4E40L,0x4E40L,(-6L),0x4E40L,0x4E40L}};
            struct S0 l_426 = {0xE45CL,0L,1L,18446744073709551609UL};
            int i, j;
            for (p_22 = (-7); (p_22 <= 17); p_22++)
            { 
                uint32_t *l_409 = &g_134;
                int32_t l_413 = 0x1189C198L;
                int16_t *l_414 = &g_149[0];
                int16_t *l_415 = &g_55[1];
                int32_t *l_427 = &l_342;
                l_343[1][0] = (l_417 = (((((safe_add_func_int16_t_s_s((safe_div_func_int16_t_s_s(((*l_415) = (0x4C3DL ^ (((*l_396) = (safe_add_func_int64_t_s_s(((+(safe_mul_func_int8_t_s_s(p_21, (safe_unary_minus_func_uint16_t_u(p_22))))) == (((((*l_409) = g_62[1][0][1].f3) , g_410) != &g_411) || ((*l_414) = (0x09L | l_413)))), g_55[1]))) <= p_21))), g_136)), p_20.f2)) <= l_416[1][1]) , p_22) <= g_61[1]) || p_22));
                (*l_427) &= (safe_mod_func_int16_t_s_s((p_20.f2 >= l_307), (safe_mod_func_uint64_t_u_u(((safe_rshift_func_int8_t_s_s(0x5DL, 4)) | ((func_29((**g_234)) , ((**g_234) ^= (safe_lshift_func_int8_t_s_u(((p_20.f2 , l_426) , 0x8EL), g_62[1][0][1].f4)))) , p_20.f3)), 0xE16C76ABF6021AA0LL))));
            }
        }
        else
        { 
            uint8_t l_428 = 0x32L;
            int32_t *l_430 = &g_95.f2;
            uint32_t l_442 = 1UL;
            int16_t *l_443 = &g_55[1];
            uint32_t *l_445[3][1];
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_445[i][j] = &g_134;
            }
            if (l_428)
                break;
            if (p_20.f0)
                break;
            (*l_430) = l_429[2][0][0];
            (*l_430) = (0xDB85D4D6L && (l_306 = (l_301 |= ((*l_430) , (safe_mod_func_int8_t_s_s((safe_mod_func_int16_t_s_s((safe_mod_func_int32_t_s_s(1L, (-1L))), p_20.f2)), ((safe_unary_minus_func_int64_t_s(((safe_lshift_func_int16_t_s_u(((*l_443) &= (&l_429[4][3][5] == ((safe_add_func_uint16_t_u_u(((*l_430) != l_442), g_66.f1)) , &g_267))), 2)) , l_444))) ^ g_97[0][0][3].f0)))))));
        }
    }
    l_456 ^= ((safe_add_func_uint8_t_u_u(((g_66 , (safe_rshift_func_uint16_t_u_u((((*g_360) = l_324.f4) && ((****g_357) == ((l_323 , 0x63L) >= ((*l_451)--)))), 5))) > ((~l_455) & l_307)), p_20.f1)) & 0x78CCL);
    l_344 ^= ((*l_470) = (l_324.f4 < (safe_div_func_int32_t_s_s((p_23 ^ ((&g_61[1] != ((((((safe_mod_func_uint64_t_u_u(l_461, (-1L))) && ((l_341 = (~(safe_mod_func_int8_t_s_s(p_20.f2, (safe_add_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u(g_62[1][0][1].f3, g_66.f2)) >= g_66.f0), (*g_412))))))) & p_22)) < 0UL) , l_469) | 0x509BL) , l_450)) < l_456)), l_323.f3))));
    return g_62[1][0][0];
}



static struct S0  func_24(int8_t  p_25, const struct S0  p_26, union U2  p_27, uint64_t  p_28)
{ 
    uint16_t *l_74 = &g_58;
    int32_t l_78[4];
    uint8_t l_126 = 9UL;
    int8_t l_228 = 3L;
    uint8_t l_229 = 246UL;
    uint64_t l_269[7][3][4] = {{{1UL,0x29BCD8D3F1B2D74ELL,0x0D56FBECB08BCFCFLL,0x29BCD8D3F1B2D74ELL},{1UL,0xEB90ACB3B04CBC72LL,0x0D56FBECB08BCFCFLL,0xEB90ACB3B04CBC72LL},{1UL,0x29BCD8D3F1B2D74ELL,0x0D56FBECB08BCFCFLL,0x29BCD8D3F1B2D74ELL}},{{1UL,0xEB90ACB3B04CBC72LL,0x0D56FBECB08BCFCFLL,0xEB90ACB3B04CBC72LL},{1UL,0x29BCD8D3F1B2D74ELL,0x0D56FBECB08BCFCFLL,0x29BCD8D3F1B2D74ELL},{1UL,0xEB90ACB3B04CBC72LL,0x0D56FBECB08BCFCFLL,0xEB90ACB3B04CBC72LL}},{{1UL,0x29BCD8D3F1B2D74ELL,0x0D56FBECB08BCFCFLL,0x29BCD8D3F1B2D74ELL},{1UL,0xEB90ACB3B04CBC72LL,0x0D56FBECB08BCFCFLL,0xEB90ACB3B04CBC72LL},{1UL,0x29BCD8D3F1B2D74ELL,0x0D56FBECB08BCFCFLL,0x29BCD8D3F1B2D74ELL}},{{1UL,0xEB90ACB3B04CBC72LL,0x0D56FBECB08BCFCFLL,0xEB90ACB3B04CBC72LL},{1UL,0x29BCD8D3F1B2D74ELL,0x0D56FBECB08BCFCFLL,0x29BCD8D3F1B2D74ELL},{1UL,0xEB90ACB3B04CBC72LL,0x0D56FBECB08BCFCFLL,0xEB90ACB3B04CBC72LL}},{{1UL,0x29BCD8D3F1B2D74ELL,0x0D56FBECB08BCFCFLL,0x29BCD8D3F1B2D74ELL},{1UL,0xEB90ACB3B04CBC72LL,0x0D56FBECB08BCFCFLL,0xEB90ACB3B04CBC72LL},{1UL,0x29BCD8D3F1B2D74ELL,0x0D56FBECB08BCFCFLL,0x29BCD8D3F1B2D74ELL}},{{1UL,0xEB90ACB3B04CBC72LL,0x0D56FBECB08BCFCFLL,0xEB90ACB3B04CBC72LL},{1UL,0x29BCD8D3F1B2D74ELL,0x0D56FBECB08BCFCFLL,0x29BCD8D3F1B2D74ELL},{1UL,0xEB90ACB3B04CBC72LL,0x0D56FBECB08BCFCFLL,0xEB90ACB3B04CBC72LL}},{{1UL,0x29BCD8D3F1B2D74ELL,0x0D56FBECB08BCFCFLL,0x29BCD8D3F1B2D74ELL},{1UL,0xEB90ACB3B04CBC72LL,0x0D56FBECB08BCFCFLL,0xEB90ACB3B04CBC72LL},{1UL,0x29BCD8D3F1B2D74ELL,0x0D56FBECB08BCFCFLL,0x29BCD8D3F1B2D74ELL}}};
    struct S0 l_275 = {1UL,0L,0xAD51E188L,18446744073709551615UL};
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_78[i] = 1L;
    for (p_28 = 4; (p_28 != 10); p_28 = safe_add_func_int64_t_s_s(p_28, 6))
    { 
        int32_t ***l_72 = (void*)0;
        int32_t *l_73[5] = {&g_62[1][0][1].f2,&g_62[1][0][1].f2,&g_62[1][0][1].f2,&g_62[1][0][1].f2,&g_62[1][0][1].f2};
        const uint16_t *l_75 = &g_58;
        int32_t l_83 = 0x567AB627L;
        const int64_t l_113 = (-8L);
        int32_t l_121 = (-10L);
        int32_t l_123[7][1][4] = {{{0x50F4D7AAL,(-1L),0x50F4D7AAL,0x50F4D7AAL}},{{(-1L),(-1L),0L,(-1L)}},{{(-1L),0x50F4D7AAL,0x50F4D7AAL,(-1L)}},{{0x50F4D7AAL,(-1L),0x50F4D7AAL,0x50F4D7AAL}},{{(-1L),(-1L),0L,(-1L)}},{{(-1L),0x50F4D7AAL,0x50F4D7AAL,(-1L)}},{{0x50F4D7AAL,(-1L),0x50F4D7AAL,0x50F4D7AAL}}};
        int32_t ***l_205 = &g_70;
        struct S0 l_271 = {0x6245L,-1L,7L,0x925552900B308821LL};
        int i, j, k;
        if ((((((g_62[1][0][1].f2 = (g_69[1][1][3] == l_72)) , l_74) != l_75) > ((*l_74) = 2UL)) == ((p_27.f4--) ^ (((l_78[1] , (((safe_div_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(p_26.f2, 0UL)), g_66.f2)) ^ 0x62L) > l_78[1])) > l_83) || 0x1E6FL))))
        { 
            int32_t *l_86 = &l_78[1];
            union U1 *l_96 = &g_97[0][0][3];
            int32_t l_122 = 0x612EDF4FL;
            int32_t l_125[3][4] = {{0x8080D849L,0x8080D849L,4L,0x8080D849L},{0x8080D849L,0x13010899L,0x13010899L,0x8080D849L},{0x13010899L,0x8080D849L,0x13010899L,0x13010899L}};
            uint32_t l_145 = 0x356CCD2EL;
            uint32_t l_165 = 0x6A0EAF5AL;
            int i, j;
            (*l_86) |= (l_83 > (~(g_85 = ((void*)0 == g_71))));
            for (p_27.f2 = 19; (p_27.f2 <= (-27)); p_27.f2 = safe_sub_func_int64_t_s_s(p_27.f2, 1))
            { 
                int16_t l_90 = 0x48D0L;
                union U1 *l_91[4];
                int32_t *l_98 = &l_83;
                int i;
                for (i = 0; i < 4; i++)
                    l_91[i] = &g_89[0];
                (*l_86) ^= (g_89[0] , 0x08C68BE1L);
                for (p_25 = 0; (p_25 <= 4); p_25 += 1)
                { 
                    union U1 **l_92 = (void*)0;
                    union U1 **l_93[2][3][3] = {{{&l_91[3],&l_91[3],&l_91[3]},{&l_91[2],&l_91[2],&l_91[2]},{&l_91[3],&l_91[3],&l_91[3]}},{{&l_91[2],&l_91[2],&l_91[2]},{&l_91[3],&l_91[3],&l_91[3]},{&l_91[2],&l_91[2],&l_91[2]}}};
                    int i, j, k;
                    l_96 = (l_90 , (g_94 = l_91[3]));
                    (*g_70) = l_73[p_25];
                    return p_26;
                }
                (*g_70) = l_98;
                for (g_58 = 0; (g_58 < 41); ++g_58)
                { 
                    (*l_98) = (l_78[1] > (~((((p_26.f3 , l_86) != (void*)0) | 0L) ^ 0x19EAC3B2L)));
                }
                (**g_70) = (*g_71);
            }
            if ((*l_86))
            { 
                uint16_t l_102 = 0xB6E4L;
                const int32_t *l_110 = &g_66.f1;
                const int32_t **l_109 = &l_110;
                int32_t l_114 = (-10L);
                int32_t l_124[3][5] = {{0x8EF1BB21L,0xA080896FL,1L,1L,0xA080896FL},{0xD7298C4FL,1L,1L,0xCD8C2604L,0xCD8C2604L},{1L,0xD7298C4FL,1L,1L,0xCD8C2604L}};
                uint32_t *l_133 = &g_134;
                uint32_t *l_135 = &g_136;
                int8_t l_146[4][3] = {{0xC8L,0x30L,0x30L},{0x30L,0L,0xFAL},{0xC8L,0L,0xC8L},{(-10L),0x30L,0xFAL}};
                int i, j;
                l_102++;
                if ((safe_sub_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((l_73[1] != ((*l_109) = l_73[3])), (safe_lshift_func_uint8_t_u_s(p_26.f3, 6)))), p_27.f0)))
                { 
                    l_114 = l_113;
                    return g_66;
                }
                else
                { 
                    int32_t *l_115 = (void*)0;
                    int32_t *l_116 = &l_114;
                    int32_t *l_117 = &g_89[0].f2;
                    int32_t *l_118 = &g_97[0][0][3].f2;
                    int32_t *l_119 = &g_97[0][0][3].f2;
                    int32_t *l_120[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_120[i] = &l_78[1];
                    (*g_70) = &l_114;
                    l_126++;
                    if ((**g_70))
                        break;
                }
                if ((safe_add_func_uint32_t_u_u(4294967295UL, (safe_sub_func_uint32_t_u_u(((*l_135) = ((*l_133) = p_27.f2)), ((safe_mod_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((((l_124[2][2] <= 1L) , g_71) == (void*)0), (safe_sub_func_int8_t_s_s((g_143 != &g_144[0][1]), l_145)))), l_146[1][1])) & p_26.f1))))))
                { 
                    int32_t *l_159[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_159[i] = &l_125[1][3];
                    (**g_70) = (l_83 &= (safe_mod_func_uint8_t_u_u((((g_149[0] = g_55[1]) , (safe_sub_func_int8_t_s_s(p_25, (safe_rshift_func_uint8_t_u_s((l_114 >= p_26.f3), 3))))) != (safe_sub_func_uint64_t_u_u(((+((safe_sub_func_uint32_t_u_u(((((void*)0 == l_75) != p_27.f3) > g_61[0]), (*l_86))) && 0UL)) , p_28), g_66.f0))), (-5L))));
                }
                else
                { 
                    (*g_70) = &l_122;
                    (*g_71) = p_27.f4;
                }
            }
            else
            { 
                int16_t l_160 = (-2L);
                int32_t *l_166[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_166[i] = &l_122;
                if ((g_136 || 0x45BFC9525464414DLL))
                { 
                    l_160 = (*l_86);
                }
                else
                { 
                    int16_t l_164[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                    int i;
                    l_164[3] = (p_26.f2 | (+(safe_rshift_func_int16_t_s_u(g_62[1][0][1].f0, ((void*)0 == l_96)))));
                    (*g_70) = &l_78[1];
                }
                l_165 = p_26.f2;
                l_121 ^= (*g_71);
            }
            for (g_134 = 0; (g_134 == 40); g_134 = safe_add_func_uint32_t_u_u(g_134, 8))
            { 
                uint16_t l_188 = 0x1478L;
                int32_t l_189 = 0x6258E059L;
                union U2 l_211 = {0x699C989FL};
                int32_t *l_216 = (void*)0;
                int32_t *l_217 = &l_189;
                for (l_126 = 0; (l_126 <= 2); l_126 += 1)
                { 
                    union U1 l_171 = {0L};
                    int8_t *l_208 = (void*)0;
                    int8_t *l_209 = &g_210;
                    l_189 &= ((safe_mod_func_int16_t_s_s(p_28, (*l_86))) , ((l_171 , (safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s((safe_mod_func_int16_t_s_s((((safe_div_func_int16_t_s_s((-1L), ((safe_lshift_func_uint8_t_u_s(g_149[0], ((safe_lshift_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s((g_134 | ((safe_add_func_int64_t_s_s(g_62[1][0][1].f3, g_66.f1)) , g_62[1][0][1].f2)), (-8L))) , 0x644EL), 2)) < g_62[1][0][1].f0))) & 4294967287UL))) == p_27.f0) & 0xEC24FB95L), l_188)), g_66.f1)), 0x90L))) || p_26.f1));
                    (*g_70) = ((func_29(((*l_209) ^= (safe_sub_func_uint32_t_u_u((((safe_add_func_uint64_t_u_u((l_126 < (safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((65535UL > (safe_sub_func_int8_t_s_s((+g_149[0]), (((safe_add_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((((l_205 == &g_70) , (safe_add_func_uint16_t_u_u((*l_86), (p_26.f2 , p_26.f2)))) , 0xB706D4C3L), g_66.f1)), g_62[1][0][1].f4)) < g_62[1][0][1].f0) && p_26.f0)))), 14)), 0x17L))), 18446744073709551615UL)) > 0L) && (-5L)), 4294967295UL)))) , l_211) , &l_78[2]);
                    (**l_205) = &l_125[1][3];
                }
                for (l_189 = 4; (l_189 == 23); l_189++)
                { 
                    return g_66;
                }
                (*l_86) &= (safe_add_func_int8_t_s_s(p_26.f0, (p_27.f2 && 0x3436L)));
                for (l_165 = 0; l_165 < 4; l_165 += 1)
                {
                    l_78[l_165] = 0x658010A5L;
                }
                (*l_217) ^= (*l_86);
            }
        }
        else
        { 
            int32_t *l_218 = &g_95.f2;
            uint32_t *l_221[2];
            uint32_t **l_220[1];
            uint32_t ***l_219 = &l_220[0];
            int32_t *l_222 = &l_121;
            int32_t *l_223 = &g_95.f2;
            int32_t *l_224 = (void*)0;
            int32_t *l_225 = (void*)0;
            int32_t *l_226 = &g_97[0][0][3].f2;
            int32_t *l_227[7];
            uint32_t l_272 = 0xEB82D4F0L;
            int i;
            for (i = 0; i < 2; i++)
                l_221[i] = (void*)0;
            for (i = 0; i < 1; i++)
                l_220[i] = &l_221[0];
            for (i = 0; i < 7; i++)
                l_227[i] = (void*)0;
            (*l_218) = p_28;
            if ((*l_218))
                continue;
            (*l_219) = (void*)0;
            l_229++;
            for (l_228 = 1; (l_228 >= 0); l_228 -= 1)
            { 
                int16_t l_232 = 0xAC47L;
                int32_t *l_237 = &g_95.f2;
                int32_t l_270 = 0xB7C81992L;
            }
        }
        return g_66;
    }
    return l_275;
}



static union U2  func_29(const int8_t  p_30)
{ 
    int32_t *l_42 = &g_3;
    int32_t **l_43 = &l_42;
    int16_t *l_54[5];
    int32_t l_56 = (-1L);
    uint16_t *l_57[5] = {&g_58,&g_58,&g_58,&g_58,&g_58};
    uint16_t l_59 = 0xD306L;
    int32_t ***l_63 = &l_43;
    int32_t **l_64 = &l_42;
    union U2 l_65[3][1][5] = {{{{0xF0AC7725L},{0xF0AC7725L},{0xFF85A045L},{0xF0AC7725L},{0xF0AC7725L}}},{{{0x4B2CBD72L},{0xF0AC7725L},{0x4B2CBD72L},{0x4B2CBD72L},{0xF0AC7725L}}},{{{0xF0AC7725L},{0x4B2CBD72L},{0x4B2CBD72L},{0xF0AC7725L},{0x4B2CBD72L}}}};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_54[i] = &g_55[1];
    (*l_43) = l_42;
    if ((safe_sub_func_uint16_t_u_u(((**l_43) , (g_58 |= (safe_mul_func_uint16_t_u_u(((0xB4L > (!((l_56 ^= ((p_30 & ((safe_mul_func_int8_t_s_s(g_3, (+(&g_3 == ((*l_43) = (*l_43)))))) ^ (safe_rshift_func_int16_t_s_u(g_3, p_30)))) , 0x83A5L)) >= g_55[1]))) ^ g_3), 0x41ABL)))), l_59)))
    { 
        int32_t *l_60[7][3][1] = {{{(void*)0},{(void*)0},{&g_3}},{{&g_3},{&g_3},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0}},{{&g_3},{&g_3},{&g_3}},{{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{&g_3},{&g_3}},{{&g_3},{(void*)0},{(void*)0}}};
        int i, j, k;
        g_61[0] = (l_60[6][1][0] != &g_3);
    }
    else
    { 
        return g_62[1][0][1];
    }
    l_64 = ((*l_63) = &l_42);
    return l_65[1][0][0];
}



static const int8_t  func_31(uint32_t  p_32)
{ 
    return g_3;
}



static const int8_t  func_35(uint64_t  p_36, union U1  p_37, int16_t  p_38)
{ 
    int32_t *l_41 = (void*)0;
    int32_t **l_40 = &l_41;
    (*l_40) = &g_3;
    return g_3;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_55[i], "g_55[i]", print_hash_value);

    }
    transparent_crc(g_58, "g_58", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_61[i], "g_61[i]", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_62[i][j][k].f0, "g_62[i][j][k].f0", print_hash_value);
                transparent_crc(g_62[i][j][k].f2, "g_62[i][j][k].f2", print_hash_value);
                transparent_crc(g_62[i][j][k].f3, "g_62[i][j][k].f3", print_hash_value);
                transparent_crc(g_62[i][j][k].f4, "g_62[i][j][k].f4", print_hash_value);

            }
        }
    }
    transparent_crc(g_66.f0, "g_66.f0", print_hash_value);
    transparent_crc(g_66.f1, "g_66.f1", print_hash_value);
    transparent_crc(g_66.f2, "g_66.f2", print_hash_value);
    transparent_crc(g_66.f3, "g_66.f3", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_89[i].f0, "g_89[i].f0", print_hash_value);

    }
    transparent_crc(g_95.f0, "g_95.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_97[i][j][k].f0, "g_97[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_149[i], "g_149[i]", print_hash_value);

    }
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_267, "g_267", print_hash_value);
    transparent_crc(g_305, "g_305", print_hash_value);
    transparent_crc(g_354, "g_354", print_hash_value);
    transparent_crc(g_494, "g_494", print_hash_value);
    transparent_crc(g_589, "g_589", print_hash_value);
    transparent_crc(g_633.f0, "g_633.f0", print_hash_value);
    transparent_crc(g_633.f1, "g_633.f1", print_hash_value);
    transparent_crc(g_633.f2, "g_633.f2", print_hash_value);
    transparent_crc(g_633.f3, "g_633.f3", print_hash_value);
    transparent_crc(g_740.f0, "g_740.f0", print_hash_value);
    transparent_crc(g_740.f1, "g_740.f1", print_hash_value);
    transparent_crc(g_740.f2, "g_740.f2", print_hash_value);
    transparent_crc(g_740.f3, "g_740.f3", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_743[i][j][k].f0, "g_743[i][j][k].f0", print_hash_value);
                transparent_crc(g_743[i][j][k].f1, "g_743[i][j][k].f1", print_hash_value);
                transparent_crc(g_743[i][j][k].f2, "g_743[i][j][k].f2", print_hash_value);
                transparent_crc(g_743[i][j][k].f3, "g_743[i][j][k].f3", print_hash_value);

            }
        }
    }
    transparent_crc(g_774, "g_774", print_hash_value);
    transparent_crc(g_796, "g_796", print_hash_value);
    transparent_crc(g_854, "g_854", print_hash_value);
    transparent_crc(g_954, "g_954", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_957[i], "g_957[i]", print_hash_value);

    }
    transparent_crc(g_1046, "g_1046", print_hash_value);
    transparent_crc(g_1054, "g_1054", print_hash_value);
    transparent_crc(g_1201.f0, "g_1201.f0", print_hash_value);
    transparent_crc(g_1201.f1, "g_1201.f1", print_hash_value);
    transparent_crc(g_1201.f2, "g_1201.f2", print_hash_value);
    transparent_crc(g_1201.f3, "g_1201.f3", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1224[i], "g_1224[i]", print_hash_value);

    }
    transparent_crc(g_1314.f0, "g_1314.f0", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
