// SPDX-License-Identifier: MIT
// cctest_csmith_ce83db18.c --- cctest case csmith_ce83db18 (csmith seed 3464747800)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xb3860980 */
/* @exp_ticks 0x7d52 */

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

// Options:   -s 3464747800 -o /tmp/csmith_gen_09gaot42/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint64_t  f0;
   uint64_t  f1;
   int32_t  f2;
   const int8_t  f3;
   const uint32_t  f4;
};
#pragma pack(pop)

union U1 {
   int16_t  f0;
   int8_t * f1;
   const int32_t  f2;
   const uint32_t  f3;
   const uint16_t  f4;
};


static int32_t g_2 = 1L;
static int8_t g_16 = 1L;
static int32_t g_37 = (-9L);
static int32_t g_41 = 0x14A9C79EL;
static int32_t g_77 = 0L;
static int32_t *g_88 = &g_2;
static int32_t **g_87 = &g_88;
static uint16_t g_90 = 1UL;
static int16_t g_101 = 0xC330L;
static int32_t g_102 = 0x0D6CD47BL;
static int32_t g_107 = (-2L);
static uint64_t g_124[7][6] = {{0x70792702ECBAF5A7LL,0xE21E3D09CE060066LL,1UL,1UL,0xE21E3D09CE060066LL,0x70792702ECBAF5A7LL},{0x9A964D50EE726552LL,0x70792702ECBAF5A7LL,1UL,0x70792702ECBAF5A7LL,0x9A964D50EE726552LL,0x9A964D50EE726552LL},{18446744073709551609UL,0x70792702ECBAF5A7LL,0x70792702ECBAF5A7LL,18446744073709551609UL,0xE21E3D09CE060066LL,18446744073709551609UL},{18446744073709551609UL,0xE21E3D09CE060066LL,18446744073709551609UL,0x70792702ECBAF5A7LL,0x70792702ECBAF5A7LL,18446744073709551609UL},{0x9A964D50EE726552LL,0x9A964D50EE726552LL,0x70792702ECBAF5A7LL,1UL,0x70792702ECBAF5A7LL,0x9A964D50EE726552LL},{0x70792702ECBAF5A7LL,0xE21E3D09CE060066LL,1UL,1UL,0xE21E3D09CE060066LL,0x70792702ECBAF5A7LL},{0x9A964D50EE726552LL,0x70792702ECBAF5A7LL,1UL,0x70792702ECBAF5A7LL,0x9A964D50EE726552LL,0x9A964D50EE726552LL}};
static int16_t g_145 = (-2L);
static uint8_t g_157 = 0xF5L;
static int16_t g_168 = 0xED39L;
static int32_t ***g_174[2] = {&g_87,&g_87};
static uint8_t g_181 = 0x81L;
static int16_t g_182 = 0x9F08L;
static int32_t ***g_183 = &g_87;
static uint32_t g_200 = 0x0DA417DDL;
static int8_t *g_228 = &g_16;
static int8_t ** const g_227 = &g_228;
static int64_t g_245 = 1L;
static uint32_t g_247 = 0xAD2AF201L;
static uint32_t g_275 = 0xB7DE32D5L;
static const int32_t **g_283 = (void*)0;
static const int32_t ***g_282 = &g_283;
static const int32_t ****g_281[3] = {&g_282,&g_282,&g_282};
static int8_t **g_295 = &g_228;
static int8_t ***g_294[4] = {&g_295,&g_295,&g_295,&g_295};
static int8_t ****g_293 = &g_294[0];
static int32_t g_299 = 0xA0642853L;
static int64_t *g_307 = &g_245;
static uint8_t g_321 = 0x8EL;
static uint32_t *g_360 = &g_200;
static uint32_t **g_359 = &g_360;
static int16_t g_384[5][6][6] = {{{0x7406L,0x4B62L,0x7D23L,(-7L),2L,0x0363L},{0xBBB2L,0x7D23L,0x683EL,0L,0xDDFBL,0x4280L},{6L,(-1L),0x2CB6L,0x500AL,1L,1L},{0xC1D4L,(-1L),0x26E5L,0xC205L,0xC205L,0x26E5L},{1L,1L,0xC1D4L,0x2367L,(-1L),0L},{0xC6B5L,6L,(-1L),2L,0x95FFL,0xC1D4L}},{{0x32F2L,0xC6B5L,(-1L),(-1L),1L,0L},{(-8L),(-1L),0xC1D4L,0x5EF3L,(-1L),0x26E5L},{0x5EF3L,(-1L),0x26E5L,0L,0x7937L,1L},{0x1120L,0x0BEEL,0x2CB6L,0x06DCL,0x2367L,0x4280L},{0x2367L,0x0363L,0x683EL,0x1120L,0x683EL,0x0363L},{0x500AL,0x06DCL,0x7D23L,0x7406L,(-1L),(-7L)}},{{0x7937L,0xC42CL,0L,0x4B62L,0L,(-1L)},{0x4280L,0xC42CL,0xC205L,(-1L),(-1L),0x2367L},{0x26E5L,0x06DCL,0xBBB2L,0x7D23L,0x683EL,0L},{2L,0x0363L,(-1L),0xC42CL,0x2367L,0x683EL},{(-1L),0x0BEEL,0x7406L,0xDDFBL,0x7937L,(-1L)},{0x06DCL,(-1L),(-8L),(-8L),(-1L),0x06DCL}},{{(-9L),(-1L),0x0BEEL,0x26E5L,1L,0x500AL},{(-1L),0xC6B5L,0x4280L,0x52E0L,0x95FFL,1L},{(-1L),6L,0x52E0L,0x26E5L,(-1L),0xC6B5L},{(-9L),1L,0x32F2L,(-8L),0xC205L,0x2CB6L},{0x06DCL,(-1L),0x5EF3L,0xDDFBL,1L,0x1120L},{(-1L),(-1L),(-9L),0xC42CL,0xDDFBL,(-1L)}},{{2L,0x7D23L,0xDDFBL,0x7D23L,2L,0x32F2L},{0x26E5L,0x4B62L,1L,(-1L),0xC42CL,0x0BEEL},{0x4280L,(-1L),(-1L),0x4B62L,0x500AL,0x0BEEL},{0x7937L,0x5EF3L,1L,0x7406L,6L,0x32F2L},{0x500AL,0xC205L,0xDDFBL,0x1120L,0x5EF3L,(-1L)},{0x2367L,0x26E5L,(-9L),0x06DCL,0x4280L,0x1120L}}};
static int32_t g_417[7] = {0xA4E6D2ADL,0xA4E6D2ADL,0xA4E6D2ADL,0xA4E6D2ADL,0xA4E6D2ADL,0xA4E6D2ADL,0xA4E6D2ADL};
static union U1 g_418 = {0L};
static int32_t **g_451 = &g_88;
static int8_t g_487 = (-1L);
static int32_t **g_500 = (void*)0;
static struct S0 g_509 = {0UL,0x408B1BF8A3C5C08ELL,1L,9L,0x9E42E274L};
static union U1 g_523 = {0L};
static uint32_t g_537 = 6UL;
static uint16_t *g_636[7][5][1] = {{{&g_90},{&g_90},{&g_90},{&g_90},{&g_90}},{{&g_90},{&g_90},{&g_90},{&g_90},{&g_90}},{{&g_90},{&g_90},{&g_90},{&g_90},{&g_90}},{{&g_90},{&g_90},{&g_90},{&g_90},{&g_90}},{{&g_90},{&g_90},{&g_90},{&g_90},{&g_90}},{{&g_90},{&g_90},{&g_90},{&g_90},{&g_90}},{{&g_90},{&g_90},{&g_90},{&g_90},{&g_90}}};
static uint16_t **g_635 = &g_636[5][0][0];
static int32_t g_648[1] = {1L};
static int64_t g_674 = 0x682FA265377C53F0LL;
static const int32_t g_677 = (-3L);
static int32_t g_928 = 0xCC291261L;
static const uint16_t *g_962 = (void*)0;
static const uint16_t **g_961 = &g_962;
static uint16_t g_1023[1] = {0x18EAL};
static struct S0 g_1031 = {0xB3E343C9FFDB6895LL,0x7A2728D1B05D30ACLL,0L,7L,0x7BD27E84L};
static struct S0 *g_1100[1][5][2] = {{{(void*)0,&g_1031},{(void*)0,&g_1031},{(void*)0,&g_1031},{(void*)0,&g_1031},{(void*)0,&g_1031}}};
static struct S0 **g_1099 = &g_1100[0][1][0];
static uint64_t *g_1167 = &g_124[0][0];
static int32_t ****g_1271 = &g_174[0];
static int32_t *****g_1270 = &g_1271;
static uint32_t g_1282 = 6UL;



static uint32_t  func_1(void);
static uint16_t  func_6(int32_t  p_7, uint8_t  p_8, int8_t  p_9, int8_t * p_10);
static int16_t  func_17(int32_t  p_18, uint64_t  p_19, int8_t  p_20);
static int8_t  func_29(int8_t * p_30, int64_t  p_31, int8_t * p_32);
static int32_t  func_44(uint32_t  p_45, union U1  p_46, int32_t ** p_47, const int32_t * p_48);
static struct S0  func_49(int32_t * p_50, int8_t * p_51, union U1  p_52);
static int32_t ** func_56(uint32_t  p_57, uint64_t  p_58, uint32_t  p_59, int8_t  p_60, int8_t * p_61);
static int32_t *** func_78(int8_t * p_79, int32_t  p_80);




static uint32_t  func_1(void)
{ 
    int8_t *l_15 = &g_16;
    int32_t l_27 = 0xC9B996A5L;
    uint16_t l_33 = 0x3C27L;
    uint64_t l_1287 = 0x7EBA57C1404EDA68LL;
    for (g_2 = 20; (g_2 == 12); g_2--)
    { 
        int8_t *l_34 = &g_16;
        uint32_t l_1281[6] = {4294967295UL,0x5454257BL,4294967295UL,4294967295UL,0x5454257BL,4294967295UL};
        int i;
        if (g_2)
            break;
        l_1287 = (+func_6(g_2, ((safe_lshift_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u(g_2, 3)) | ((void*)0 != l_15)), func_17((safe_sub_func_uint64_t_u_u(((safe_rshift_func_uint8_t_u_s((((safe_sub_func_int64_t_s_s(0x4F5AC3D6C1DFE936LL, l_27)) || ((safe_unary_minus_func_int8_t_s((l_27 = func_29(&g_16, l_33, l_34)))) , l_1281[5])) >= 9L), 7)) , (*g_1167)), (*g_307))), l_33, g_1282))) & l_1281[2]), l_1281[5], l_15));
    }
    return l_33;
}



static uint16_t  func_6(int32_t  p_7, uint8_t  p_8, int8_t  p_9, int8_t * p_10)
{ 
    int16_t l_1284 = (-6L);
    int32_t l_1285 = 0L;
    uint32_t l_1286 = 0x41903684L;
    for (g_275 = 0; (g_275 <= 0); g_275 += 1)
    { 
        (*g_87) = (void*)0;
        return l_1284;
    }
    l_1285 ^= 0xBBE18C3FL;
    return l_1286;
}



static int16_t  func_17(int32_t  p_18, uint64_t  p_19, int8_t  p_20)
{ 
    uint32_t l_1283[1][2];
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_1283[i][j] = 0xE9CDD168L;
    }
    return l_1283[0][1];
}



static int8_t  func_29(int8_t * p_30, int64_t  p_31, int8_t * p_32)
{ 
    const uint64_t l_35[1] = {2UL};
    int32_t *l_36 = &g_37;
    const int32_t *l_678[7] = {&g_107,&g_107,&g_107,&g_107,&g_107,&g_107,&g_107};
    int32_t l_707 = 1L;
    int32_t l_711 = 0L;
    int32_t l_716 = 0x9CB18B06L;
    int32_t l_719 = 1L;
    int32_t l_723 = (-8L);
    int32_t l_724 = 0xC9588F43L;
    int32_t l_754 = 0L;
    uint8_t l_755 = 0x9EL;
    uint8_t l_837 = 0xE2L;
    uint16_t ***l_852 = (void*)0;
    uint16_t ****l_851 = &l_852;
    int32_t ****l_882[4][6] = {{&g_174[0],&g_174[0],&g_174[0],&g_174[0],&g_174[0],&g_183},{&g_174[0],&g_174[0],&g_174[0],(void*)0,&g_174[0],&g_174[0]},{&g_174[0],(void*)0,(void*)0,&g_174[0],&g_174[0],&g_174[0]},{&g_174[0],&g_174[0],&g_174[0],&g_183,(void*)0,&g_183}};
    int32_t *****l_900[3][7] = {{&l_882[3][3],&l_882[0][2],&l_882[3][3],&l_882[0][2],&l_882[3][3],&l_882[0][2],&l_882[3][3]},{&l_882[3][3],&l_882[3][3],&l_882[2][4],&l_882[2][4],&l_882[3][3],&l_882[3][3],&l_882[2][4]},{&l_882[3][0],&l_882[0][2],&l_882[3][0],&l_882[0][2],&l_882[3][0],&l_882[0][2],&l_882[3][0]}};
    int8_t *l_923 = &g_16;
    uint16_t *****l_989 = &l_851;
    int32_t l_1021[1];
    int32_t *l_1032 = &l_719;
    union U1 *l_1051 = &g_523;
    int32_t l_1058 = (-5L);
    int16_t l_1079[5];
    struct S0 l_1140 = {0x294F8A17F56D6132LL,0x6E291A157117640CLL,0xBE10BD66L,0L,8UL};
    int32_t l_1141 = 4L;
    int32_t l_1236 = 6L;
    int64_t l_1238[6][4];
    uint16_t l_1241 = 0xAC08L;
    uint32_t **l_1245 = &g_360;
    uint64_t l_1277 = 7UL;
    int i, j;
    for (i = 0; i < 1; i++)
        l_1021[i] = 6L;
    for (i = 0; i < 5; i++)
        l_1079[i] = 0x8402L;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
            l_1238[i][j] = 0L;
    }
    return (*p_32);
}



static int32_t  func_44(uint32_t  p_45, union U1  p_46, int32_t ** p_47, const int32_t * p_48)
{ 
    int64_t l_536 = 8L;
    int8_t **l_554 = &g_228;
    int32_t l_562 = 1L;
    int32_t l_567 = 0xDA1F29BAL;
    uint64_t l_568 = 18446744073709551611UL;
    int32_t l_639 = 0x6D08C03BL;
    int32_t l_642[7];
    int8_t l_649 = (-1L);
    int8_t ****l_672 = (void*)0;
    int i;
    for (i = 0; i < 7; i++)
        l_642[i] = 0xDCCDFF05L;
    for (g_509.f1 = 0; (g_509.f1 < 15); g_509.f1 = safe_add_func_int32_t_s_s(g_509.f1, 2))
    { 
        int8_t l_527 = 0x27L;
        int32_t *l_528 = (void*)0;
        int32_t *l_529 = &g_299;
        int32_t l_530[2][1];
        int32_t *l_531 = &l_530[1][0];
        int32_t *l_532 = &l_530[1][0];
        int32_t *l_533 = &g_107;
        int32_t *l_534 = &g_102;
        int32_t *l_535[7];
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_530[i][j] = 0x5B4D8A96L;
        }
        for (i = 0; i < 7; i++)
            l_535[i] = &l_530[0][0];
        (*g_451) = (*p_47);
        --g_537;
        return l_536;
    }
    if (((**g_451) = l_536))
    { 
        uint64_t l_542 = 0x353D9A90E701736FLL;
        uint8_t *l_546 = (void*)0;
        uint8_t *l_547 = &g_321;
        int32_t *l_559 = (void*)0;
        int64_t *l_560 = (void*)0;
        int16_t *l_561 = &g_384[2][2][0];
        (*g_88) |= (safe_rshift_func_int16_t_s_u(l_542, ((~(safe_mod_func_uint8_t_u_u((--(*l_547)), (safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s(((l_554 != (void*)0) < (safe_add_func_int16_t_s_s((((((*p_47) == l_559) <= ((*l_561) = ((g_182 , l_560) == (void*)0))) < 0UL) && (*g_307)), 0xA185L))), 0)), 13))))) , l_536)));
    }
    else
    { 
        int32_t *l_563 = &g_107;
        int32_t *l_564 = &g_77;
        int32_t *l_565 = &l_562;
        int32_t *l_566[1];
        int8_t **l_587[5][5] = {{&g_228,&g_228,&g_228,(void*)0,&g_228},{(void*)0,(void*)0,&g_228,(void*)0,&g_228},{&g_228,&g_228,&g_228,(void*)0,&g_228},{(void*)0,(void*)0,&g_228,(void*)0,&g_228},{&g_228,&g_228,&g_228,(void*)0,&g_228}};
        int16_t l_591 = 0x825FL;
        uint16_t l_654 = 0x1300L;
        int i, j;
        for (i = 0; i < 1; i++)
            l_566[i] = &g_107;
        l_568++;
lbl_576:
        for (g_275 = 6; (g_275 <= 11); g_275++)
        { 
            if ((*p_48))
                break;
            (*g_88) ^= 0L;
            for (g_299 = 0; (g_299 < 8); g_299 = safe_add_func_int16_t_s_s(g_299, 6))
            { 
                const int32_t l_575[4] = {(-1L),(-1L),(-1L),(-1L)};
                int i;
                if (l_575[1])
                    break;
                if (l_536)
                    goto lbl_576;
            }
        }
        for (g_77 = 0; (g_77 >= 0); g_77 -= 1)
        { 
            uint8_t l_590[2];
            const int8_t *l_592 = &g_509.f3;
            uint8_t *l_634 = &l_590[0];
            int32_t l_638 = 0x79D8EB88L;
            int32_t l_641 = 0L;
            int32_t l_643[1][7][4];
            int8_t *****l_673[1][2][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_590[i] = 0xA3L;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 7; j++)
                {
                    for (k = 0; k < 4; k++)
                        l_643[i][j][k] = (-1L);
                }
            }
        }
    }
    l_639 = (*p_48);
    (*g_451) = (*p_47);
    (*p_47) = (void*)0;
    return l_639;
}



static struct S0  func_49(int32_t * p_50, int8_t * p_51, union U1  p_52)
{ 
    const int8_t *l_517 = (void*)0;
    const int8_t **l_516[1];
    const uint32_t *l_521 = (void*)0;
    const uint32_t **l_520 = &l_521;
    int32_t l_522[5];
    int i;
    for (i = 0; i < 1; i++)
        l_516[i] = &l_517;
    for (i = 0; i < 5; i++)
        l_522[i] = (-4L);
    (*g_88) = (safe_mul_func_uint8_t_u_u(((((safe_add_func_uint64_t_u_u(g_37, ((g_509 , (safe_add_func_uint64_t_u_u((((((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((&p_51 == l_516[0]), 0xF4L)), ((safe_mul_func_int8_t_s_s(((((*l_520) = p_50) != (*g_359)) && l_522[3]), l_522[3])) != 0x2B05L))) ^ l_522[3]) <= 4294967295UL) , g_157) < 0xD1E2L), g_157))) | (*p_51)))) == (*g_307)) || (-8L)) ^ 0x69F7309CL), l_522[3]));
    return g_509;
}



static int32_t ** func_56(uint32_t  p_57, uint64_t  p_58, uint32_t  p_59, int8_t  p_60, int8_t * p_61)
{ 
    int64_t l_74 = 0x95BCD5918CD8B12ALL;
    const int8_t l_75 = 0x69L;
    int32_t *l_421[5] = {&g_102,&g_102,&g_102,&g_102,&g_102};
    struct S0 l_428 = {18446744073709551615UL,1UL,-1L,1L,0xA392003DL};
    uint8_t l_467[5];
    uint32_t ***l_471 = &g_359;
    uint32_t ****l_470 = &l_471;
    int16_t *l_497 = &g_182;
    int32_t l_498 = 1L;
    int i;
    for (i = 0; i < 5; i++)
        l_467[i] = 255UL;
lbl_499:
    for (p_60 = 0; (p_60 > 13); ++p_60)
    { 
        uint32_t l_65[6][1][5] = {{{0x98934ECAL,1UL,0x2E882408L,0x264A3A20L,0x264A3A20L}},{{0x264A3A20L,18446744073709551609UL,0x264A3A20L,0x54824FF2L,18446744073709551615UL}},{{0x2E882408L,1UL,0x98934ECAL,1UL,18446744073709551615UL}},{{0xDDC4EA3CL,0x939EFD91L,0x939EFD91L,0xDDC4EA3CL,0x264A3A20L}},{{0x199ED189L,0xDDC4EA3CL,0x98934ECAL,18446744073709551615UL,1UL}},{{0x199ED189L,0x98934ECAL,0x264A3A20L,0x98934ECAL,0x199ED189L}}};
        uint32_t l_73 = 2UL;
        int32_t l_391 = 0x650F65B8L;
        int8_t ***l_413 = &g_295;
        int32_t l_437 = 0xD55D8CE4L;
        int32_t l_439[5][7];
        uint32_t l_445 = 0xF4D86060L;
        int32_t **l_450[4][5][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
        int8_t *l_494 = &g_487;
        int i, j, k;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 7; j++)
                l_439[i][j] = 1L;
        }
        for (p_58 = 0; (p_58 <= 0); p_58 += 1)
        { 
            int32_t *l_76 = &g_77;
            int32_t ****l_386 = &g_174[1];
            int64_t **l_390 = &g_307;
            int64_t *l_411[6];
            int8_t *** const l_412 = &g_295;
            int32_t l_436 = 0xFAE1AD11L;
            int32_t l_438 = 1L;
            int32_t l_440 = 0x62BF658FL;
            int32_t l_441 = 0xF4356C01L;
            int32_t l_442 = 0x6DF3CD9AL;
            int32_t l_443 = 0xC3CF86C1L;
            int64_t l_460 = 7L;
            int16_t l_461[1][1][5] = {{{0xCA93L,0xCA93L,0xCA93L,0xCA93L,0xCA93L}}};
            int32_t l_465 = 0x0D71DE4FL;
            int32_t l_466 = 8L;
            int i, j, k;
            for (i = 0; i < 6; i++)
                l_411[i] = &l_74;
            (*l_76) = ((0xED3351F4A1AB7048LL == ((safe_lshift_func_uint8_t_u_u(248UL, 6)) & ((g_41 == 0x79AB6733L) != (safe_lshift_func_int16_t_s_u(((+((((safe_mod_func_int32_t_s_s(g_16, (l_73 &= p_60))) , (l_74 > l_65[1][0][3])) != l_75) <= 0x2B2FE073L)) , l_74), 0))))) | 0x75AC3517D3E8228FLL);
            if (l_73)
                goto lbl_499;
        }
        l_498 = (safe_div_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u(0x58L, (((&l_471 == (void*)0) <= ((safe_mul_func_int8_t_s_s(((*l_494) = (**g_295)), (safe_sub_func_uint32_t_u_u((&g_384[1][3][5] == l_497), p_57)))) || p_58)) != (**g_295)))), (*g_307)));
        if (p_60)
            continue;
        if (p_59)
            continue;
    }
    (*g_451) = l_421[3];
    return g_500;
}



static int32_t *** func_78(int8_t * p_79, int32_t  p_80)
{ 
    int32_t **l_85[4][1][1];
    int32_t l_104 = 0x001120EAL;
    int32_t l_105 = 0xFC9AAE81L;
    int32_t l_108[7];
    union U1 l_109 = {0x2B86L};
    int32_t ***l_111 = (void*)0;
    int32_t ****l_110[4][2][7] = {{{&l_111,&l_111,&l_111,&l_111,&l_111,&l_111,&l_111},{&l_111,&l_111,&l_111,&l_111,&l_111,&l_111,&l_111}},{{&l_111,&l_111,&l_111,&l_111,&l_111,&l_111,&l_111},{&l_111,&l_111,&l_111,&l_111,&l_111,&l_111,&l_111}},{{&l_111,&l_111,&l_111,&l_111,&l_111,&l_111,&l_111},{&l_111,&l_111,&l_111,&l_111,&l_111,&l_111,&l_111}},{{&l_111,&l_111,&l_111,&l_111,&l_111,&l_111,&l_111},{&l_111,&l_111,&l_111,&l_111,&l_111,&l_111,&l_111}}};
    int32_t ***l_112 = &l_85[2][0][0];
    struct S0 l_140[2][7][6] = {{{{0x06E003A779F58EA2LL,0x08C1DB4CFA5E242FLL,1L,-1L,1UL},{18446744073709551608UL,18446744073709551611UL,2L,0xC4L,0x2C92A46FL},{0UL,5UL,0x6692AA99L,1L,0x3A6EC57CL},{18446744073709551611UL,0x94159496D93F2D2CLL,-1L,0x40L,0x17B6AFEBL},{18446744073709551615UL,0x786ADAD851819CC9LL,-9L,-1L,4294967295UL},{0x289590F8BFC28CD2LL,0x34E314DBE9247554LL,0x4F81135CL,0x4CL,1UL}},{{0x33F1638C0632B814LL,18446744073709551615UL,0x322E6197L,0x5EL,0xF41821A7L},{0UL,5UL,0x6692AA99L,1L,0x3A6EC57CL},{1UL,0UL,0x02C9C021L,0L,4294967295UL},{0x8E2B3D635D9A7C64LL,0x46866101610A321FLL,0x59A5490CL,0x34L,0x55990644L},{0xD71EDEFA84F3720BLL,0x11735A46787CD55FLL,0x5C09CCC0L,0x6DL,0xFFD8805FL},{18446744073709551615UL,18446744073709551614UL,0L,0x86L,4294967295UL}},{{0x33F1638C0632B814LL,18446744073709551615UL,0x322E6197L,0x5EL,0xF41821A7L},{18446744073709551611UL,0x94159496D93F2D2CLL,-1L,0x40L,0x17B6AFEBL},{0x8E2B3D635D9A7C64LL,0x46866101610A321FLL,0x59A5490CL,0x34L,0x55990644L},{18446744073709551611UL,0x94159496D93F2D2CLL,-1L,0x40L,0x17B6AFEBL},{0x33F1638C0632B814LL,18446744073709551615UL,0x322E6197L,0x5EL,0xF41821A7L},{18446744073709551615UL,0x786ADAD851819CC9LL,-9L,-1L,4294967295UL}},{{0x06E003A779F58EA2LL,0x08C1DB4CFA5E242FLL,1L,-1L,1UL},{18446744073709551615UL,0x786ADAD851819CC9LL,-9L,-1L,4294967295UL},{0xD71EDEFA84F3720BLL,0x11735A46787CD55FLL,0x5C09CCC0L,0x6DL,0xFFD8805FL},{0x33F1638C0632B814LL,18446744073709551615UL,0x322E6197L,0x5EL,0xF41821A7L},{18446744073709551615UL,18446744073709551614UL,0L,0x86L,4294967295UL},{1UL,0xD8D885D17D95D16DLL,-1L,-3L,9UL}},{{0x9261988898D0BA58LL,18446744073709551614UL,-1L,0x83L,4294967287UL},{0x289590F8BFC28CD2LL,0x34E314DBE9247554LL,0x4F81135CL,0x4CL,1UL},{18446744073709551615UL,18446744073709551614UL,0L,0x86L,4294967295UL},{18446744073709551615UL,0x786ADAD851819CC9LL,-9L,-1L,4294967295UL},{1UL,0xD8D885D17D95D16DLL,-1L,-3L,9UL},{1UL,0xD8D885D17D95D16DLL,-1L,-3L,9UL}},{{0xA421FDF78E13ECE3LL,0x92EE31D69C6CBE70LL,-6L,-1L,2UL},{0xD71EDEFA84F3720BLL,0x11735A46787CD55FLL,0x5C09CCC0L,0x6DL,0xFFD8805FL},{0xD71EDEFA84F3720BLL,0x11735A46787CD55FLL,0x5C09CCC0L,0x6DL,0xFFD8805FL},{0xA421FDF78E13ECE3LL,0x92EE31D69C6CBE70LL,-6L,-1L,2UL},{0xAE52F1CB2A3AB484LL,0x688B2AD579426CD9LL,-5L,0xF1L,0xBD15FE66L},{18446744073709551615UL,0x786ADAD851819CC9LL,-9L,-1L,4294967295UL}},{{1UL,0xD8D885D17D95D16DLL,-1L,-3L,9UL},{0xBAEAE63DA66330F8LL,18446744073709551615UL,8L,0xC2L,0x9FDAC882L},{0x8E2B3D635D9A7C64LL,0x46866101610A321FLL,0x59A5490CL,0x34L,0x55990644L},{18446744073709551608UL,18446744073709551611UL,2L,0xC4L,0x2C92A46FL},{18446744073709551611UL,0x94159496D93F2D2CLL,-1L,0x40L,0x17B6AFEBL},{18446744073709551615UL,18446744073709551614UL,0L,0x86L,4294967295UL}}},{{{0x8E2B3D635D9A7C64LL,0x46866101610A321FLL,0x59A5490CL,0x34L,0x55990644L},{0x9261988898D0BA58LL,18446744073709551614UL,-1L,0x83L,4294967287UL},{1UL,0UL,0x02C9C021L,0L,4294967295UL},{0x289590F8BFC28CD2LL,0x34E314DBE9247554LL,0x4F81135CL,0x4CL,1UL},{18446744073709551611UL,0x94159496D93F2D2CLL,-1L,0x40L,0x17B6AFEBL},{0x289590F8BFC28CD2LL,0x34E314DBE9247554LL,0x4F81135CL,0x4CL,1UL}},{{0UL,5UL,0x6692AA99L,1L,0x3A6EC57CL},{0xBAEAE63DA66330F8LL,18446744073709551615UL,8L,0xC2L,0x9FDAC882L},{0UL,5UL,0x6692AA99L,1L,0x3A6EC57CL},{0xE3FE1AB3331872FALL,0x325B3C6BB1117FE5LL,0x7E69CC3EL,0L,0x4C02D86DL},{0xAE52F1CB2A3AB484LL,0x688B2AD579426CD9LL,-5L,0xF1L,0xBD15FE66L},{0x9261988898D0BA58LL,18446744073709551614UL,-1L,0x83L,4294967287UL}},{{18446744073709551615UL,0x786ADAD851819CC9LL,-9L,-1L,4294967295UL},{0xD71EDEFA84F3720BLL,0x11735A46787CD55FLL,0x5C09CCC0L,0x6DL,0xFFD8805FL},{0x33F1638C0632B814LL,18446744073709551615UL,0x322E6197L,0x5EL,0xF41821A7L},{18446744073709551615UL,18446744073709551614UL,0L,0x86L,4294967295UL},{1UL,0xD8D885D17D95D16DLL,-1L,-3L,9UL},{0xAE52F1CB2A3AB484LL,0x688B2AD579426CD9LL,-5L,0xF1L,0xBD15FE66L}},{{18446744073709551608UL,18446744073709551611UL,2L,0xC4L,0x2C92A46FL},{0x289590F8BFC28CD2LL,0x34E314DBE9247554LL,0x4F81135CL,0x4CL,1UL},{0xE3FE1AB3331872FALL,0x325B3C6BB1117FE5LL,0x7E69CC3EL,0L,0x4C02D86DL},{18446744073709551615UL,18446744073709551614UL,0L,0x86L,4294967295UL},{18446744073709551615UL,18446744073709551614UL,0L,0x86L,4294967295UL},{0xE3FE1AB3331872FALL,0x325B3C6BB1117FE5LL,0x7E69CC3EL,0L,0x4C02D86DL}},{{18446744073709551615UL,0x786ADAD851819CC9LL,-9L,-1L,4294967295UL},{18446744073709551615UL,0x786ADAD851819CC9LL,-9L,-1L,4294967295UL},{0xBAEAE63DA66330F8LL,18446744073709551615UL,8L,0xC2L,0x9FDAC882L},{0xE3FE1AB3331872FALL,0x325B3C6BB1117FE5LL,0x7E69CC3EL,0L,0x4C02D86DL},{0x33F1638C0632B814LL,18446744073709551615UL,0x322E6197L,0x5EL,0xF41821A7L},{0UL,5UL,0x6692AA99L,1L,0x3A6EC57CL}},{{0UL,5UL,0x6692AA99L,1L,0x3A6EC57CL},{18446744073709551611UL,0x94159496D93F2D2CLL,-1L,0x40L,0x17B6AFEBL},{18446744073709551615UL,0x786ADAD851819CC9LL,-9L,-1L,4294967295UL},{0x289590F8BFC28CD2LL,0x34E314DBE9247554LL,0x4F81135CL,0x4CL,1UL},{0xD71EDEFA84F3720BLL,0x11735A46787CD55FLL,0x5C09CCC0L,0x6DL,0xFFD8805FL},{0xBAEAE63DA66330F8LL,18446744073709551615UL,8L,0xC2L,0x9FDAC882L}},{{0x8E2B3D635D9A7C64LL,0x46866101610A321FLL,0x59A5490CL,0x34L,0x55990644L},{0UL,5UL,0x6692AA99L,1L,0x3A6EC57CL},{18446744073709551615UL,0x786ADAD851819CC9LL,-9L,-1L,4294967295UL},{18446744073709551608UL,18446744073709551611UL,2L,0xC4L,0x2C92A46FL},{18446744073709551615UL,0x786ADAD851819CC9LL,-9L,-1L,4294967295UL},{0UL,5UL,0x6692AA99L,1L,0x3A6EC57CL}}}};
    int32_t ***l_184 = &g_87;
    int32_t *l_222 = &l_108[2];
    int64_t *l_305[7];
    int16_t *l_329[3];
    int8_t l_357[3];
    uint32_t * const *l_369 = &g_360;
    uint32_t * const ** const l_368 = &l_369;
    uint32_t * const ** const *l_367 = &l_368;
    int32_t ***l_385 = &l_85[2][0][0];
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_85[i][j][k] = (void*)0;
        }
    }
    for (i = 0; i < 7; i++)
        l_108[i] = (-1L);
    for (i = 0; i < 7; i++)
        l_305[i] = &g_245;
    for (i = 0; i < 3; i++)
        l_329[i] = &l_109.f0;
    for (i = 0; i < 3; i++)
        l_357[i] = (-5L);
    for (p_80 = 16; (p_80 >= 6); p_80--)
    { 
        int32_t ***l_86 = &l_85[0][0][0];
        uint16_t *l_89 = &g_90;
        int16_t *l_99 = (void*)0;
        int16_t *l_100 = &g_101;
        int8_t l_103 = (-1L);
        int32_t *l_106[2];
        int i;
        for (i = 0; i < 2; i++)
            l_106[i] = &g_107;
        l_108[1] &= ((safe_div_func_uint16_t_u_u((((((g_77 | ((((*l_89) &= ((g_87 = ((*l_86) = l_85[2][0][0])) == &g_88)) != (l_104 = (((safe_lshift_func_uint8_t_u_s((safe_sub_func_int64_t_s_s((safe_add_func_int32_t_s_s(((&g_2 != &g_77) == p_80), ((g_102 &= ((*l_100) = (safe_add_func_int32_t_s_s(p_80, g_77)))) & p_80))), 0xA71B0FACDC9FF6DELL)), 7)) < 0x71L) < l_103))) || g_101)) , p_80) || 1UL) == (*p_79)) < l_105), l_105)) & g_41);
        g_77 = ((0x2E2804CE6FA9739ALL || p_80) && 0x1CDA016EL);
        return &g_87;
    }
    g_102 &= (*g_88);
    if (((l_109 , g_101) , ((l_112 = &g_87) != &g_87)))
    { 
        for (p_80 = 0; (p_80 <= (-15)); p_80 = safe_sub_func_int8_t_s_s(p_80, 9))
        { 
            int32_t ***l_118 = &g_87;
            for (l_104 = (-7); (l_104 < (-6)); l_104++)
            { 
                int32_t ***l_117[6][1][4] = {{{(void*)0,(void*)0,&l_85[2][0][0],&l_85[3][0][0]}},{{&l_85[2][0][0],(void*)0,&l_85[2][0][0],&l_85[2][0][0]}},{{&l_85[2][0][0],&l_85[2][0][0],&l_85[2][0][0],&l_85[2][0][0]}},{{(void*)0,&l_85[2][0][0],&l_85[3][0][0],&l_85[2][0][0]}},{{&l_85[2][0][0],(void*)0,&l_85[3][0][0],(void*)0}},{{&l_85[2][0][0],&l_85[2][0][0],&l_85[2][0][0],(void*)0}}};
                int i, j, k;
                return l_118;
            }
        }
        (**l_112) = (*g_87);
    }
    else
    { 
        int32_t ***l_119[5] = {&l_85[3][0][0],&l_85[3][0][0],&l_85[3][0][0],&l_85[3][0][0],&l_85[3][0][0]};
        int i;
        return &g_87;
    }
    if ((safe_add_func_uint8_t_u_u(249UL, (safe_lshift_func_int8_t_s_u((g_124[0][0] = g_41), 3)))))
    { 
        uint8_t l_125 = 1UL;
        l_125 |= (g_102 >= g_77);
    }
    else
    { 
        int32_t l_133 = 7L;
        int32_t l_158 = 0xD22C2485L;
        int32_t ***l_185 = &l_85[2][0][0];
        int32_t **l_188 = &g_88;
        uint32_t l_202 = 6UL;
        int32_t l_210 = 0xAE5F79DBL;
        int32_t l_211 = 0x9FBC8AC4L;
        int32_t l_212 = (-6L);
        int32_t l_213 = 0xF1ACA370L;
        int32_t l_214 = 0x760F319DL;
        int32_t l_215 = (-6L);
        int32_t l_216 = 0x33CE81CBL;
        int32_t l_217 = 0x701D3A4CL;
        uint8_t *l_300 = &g_157;
        int64_t *l_333 = &g_245;
        int16_t l_334[3][1];
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_334[i][j] = 0xE9E2L;
        }
        if ((l_133 = (((((((safe_sub_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(0x6111D559L, p_80)), g_37)) ^ (65533UL || (g_124[3][5] != ((((~(safe_lshift_func_uint16_t_u_s((l_109 , g_124[0][0]), 15))) == (-8L)) && p_80) > 5L)))) > 0xBD0BL) || (*g_88)) == 3L) , g_16) <= g_90)))
        { 
            struct S0 l_136 = {0xB94EFEA996BB96E4LL,0xE6EC67F3A6B8F9ADLL,-5L,-2L,0x31382D96L};
            int64_t l_137 = 0xB730D59BCE111123LL;
            int32_t *l_141 = &g_41;
            l_133 |= ((&g_88 != &g_88) || (safe_add_func_uint64_t_u_u(((l_136 , l_137) , (((safe_sub_func_uint8_t_u_u(((l_136.f0 , g_107) >= (l_140[0][1][3] , g_124[6][5])), 0x57L)) >= 0x9AL) , l_136.f1)), 0xF0944A3940A6EEA4LL)));
            (*g_87) = l_141;
        }
        else
        { 
            int32_t l_144 = 0L;
            int8_t *l_155 = &g_16;
            int8_t **l_154 = &l_155;
            uint8_t *l_156 = &g_157;
            int32_t ***l_173[1][5][6] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
            uint16_t l_201 = 1UL;
            uint64_t l_218 = 0x379C0B1A54CAF079LL;
            int i, j, k;
            (*g_87) = (*g_87);
            if ((safe_div_func_int32_t_s_s((g_145 = l_144), (safe_div_func_int16_t_s_s(0x6381L, (safe_sub_func_int64_t_s_s(1L, (safe_add_func_uint64_t_u_u((l_158 = ((((((*l_154) = &g_16) != &g_16) < (((l_133 = 0xC5L) && ((*l_156) |= g_77)) <= p_80)) & l_144) < g_16)), l_144)))))))))
            { 
                int32_t ***l_175[4][4][4] = {{{&l_85[2][0][0],&l_85[2][0][0],&g_87,&l_85[2][0][0]},{&l_85[2][0][0],&l_85[2][0][0],&l_85[2][0][0],&l_85[2][0][0]},{&l_85[2][0][0],&l_85[2][0][0],&l_85[2][0][0],&l_85[2][0][0]},{&l_85[2][0][0],&l_85[2][0][0],&g_87,&l_85[2][0][0]}},{{&l_85[2][0][0],&l_85[2][0][0],&l_85[2][0][0],&l_85[2][0][0]},{&l_85[2][0][0],&l_85[2][0][0],&l_85[2][0][0],&l_85[2][0][0]},{&l_85[2][0][0],&l_85[2][0][0],&g_87,&l_85[2][0][0]},{&l_85[2][0][0],&l_85[2][0][0],&l_85[2][0][0],&l_85[2][0][0]}},{{&l_85[2][0][0],&l_85[2][0][0],&l_85[2][0][0],&l_85[2][0][0]},{&l_85[2][0][0],&l_85[2][0][0],&g_87,&l_85[2][0][0]},{&l_85[2][0][0],&l_85[2][0][0],&l_85[2][0][0],&l_85[2][0][0]},{&l_85[2][0][0],&l_85[2][0][0],&l_85[2][0][0],&l_85[2][0][0]}},{{&l_85[2][0][0],&l_85[2][0][0],&g_87,&l_85[2][0][0]},{&l_85[2][0][0],&l_85[2][0][0],&l_85[2][0][0],&l_85[2][0][0]},{&l_85[2][0][0],&l_85[2][0][0],&l_85[2][0][0],&l_85[2][0][0]},{&l_85[2][0][0],&l_85[2][0][0],&g_87,&l_85[2][0][0]}}};
                uint32_t *l_199 = &g_200;
                uint16_t *l_208 = &g_90;
                int16_t l_209 = 0xA7A7L;
                int i, j, k;
                g_77 = p_80;
                for (l_104 = (-2); (l_104 == 3); ++l_104)
                { 
                    int64_t *l_167[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_167[i] = (void*)0;
                    g_107 ^= (safe_rshift_func_int16_t_s_s((safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(((g_168 = l_133) || ((((safe_add_func_int64_t_s_s((g_182 &= (safe_rshift_func_uint8_t_u_s(((((l_175[1][0][0] = (g_174[0] = l_173[0][2][5])) == l_173[0][1][2]) & ((safe_add_func_int8_t_s_s((((p_80 , ((g_168 != (safe_unary_minus_func_int32_t_s(p_80))) < (((safe_lshift_func_uint8_t_u_s((g_2 , 0x6DL), (*p_79))) <= p_80) || l_133))) || g_181) < l_158), g_168)) && p_80)) , 0UL), 4))), 2UL)) , (*g_88)) > (-1L)) > p_80)), 4)), g_157)), 3));
                    (*g_87) = &l_133;
                    (***l_112) = (((g_2 == p_80) != 0xC5F2DE2AC364A4C9LL) | ((g_183 = &g_87) != (l_185 = (l_184 = &g_87))));
                }
                l_202 ^= ((0x952072D0B3D72312LL ^ (safe_mul_func_uint16_t_u_u(g_2, ((l_188 == (void*)0) | (safe_mul_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s(g_157, 6)) == (((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u(p_80, 6)), 9)), (((*l_199) = g_16) ^ p_80))) <= l_201) , g_16)), (*p_79))))))) == 0xFDL);
                for (g_200 = 0; (g_200 > 47); g_200 = safe_add_func_uint32_t_u_u(g_200, 3))
                { 
                    int8_t l_205 = 2L;
                    int32_t *l_206[3];
                    int8_t ***l_221 = &l_154;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_206[i] = &l_104;
                    l_205 |= p_80;
                    l_206[0] = (*g_87);
                    l_158 &= (!((l_208 == &g_90) , (*p_79)));
                    l_218--;
                    (*l_221) = &p_79;
                }
                l_222 = ((*g_87) = (*g_87));
            }
            else
            { 
                const int8_t ** const **l_229 = (void*)0;
                const int8_t *l_233 = &l_140[0][1][3].f3;
                const int8_t ** const l_232 = &l_233;
                const int8_t ** const *l_231 = &l_232;
                const int8_t ** const **l_230 = &l_231;
                uint16_t *l_242 = (void*)0;
                uint16_t *l_243 = (void*)0;
                uint16_t *l_244 = &l_201;
                int16_t *l_246 = &g_168;
                (*l_222) |= ((safe_mod_func_int64_t_s_s(0xD9B5BCDB702C7A5CLL, (safe_rshift_func_int16_t_s_s((((*l_230) = ((g_227 == &p_79) , (void*)0)) != (void*)0), (safe_mul_func_int8_t_s_s((((safe_mul_func_int16_t_s_s(((*l_246) = (safe_mod_func_int16_t_s_s(((((safe_rshift_func_int16_t_s_u((((g_90 ^= ((***l_112) , (g_245 ^= ((*l_244) = ((((0xDAL && p_80) , (*g_88)) | 0x93242E56L) <= g_124[6][2]))))) <= p_80) || (**l_188)), g_124[2][3])) , 0xB3L) , (void*)0) == (*g_87)), 0x8C51L))), 65530UL)) | p_80) ^ g_41), (*g_228))))))) && g_145);
            }
            if (g_247)
            { 
                int32_t l_263 = 0L;
                for (p_80 = 9; (p_80 == (-20)); p_80 = safe_sub_func_uint32_t_u_u(p_80, 5))
                { 
                    int8_t l_257 = 0x15L;
                    uint64_t *l_258 = &l_140[0][1][3].f0;
                    uint32_t *l_276 = &g_200;
                    uint16_t *l_277 = &g_90;
                    int32_t l_278 = 0x1DFCF9E4L;
                    const int32_t *****l_284 = &g_281[2];
                    int64_t *l_285 = &g_245;
                    l_278 &= (safe_div_func_uint32_t_u_u((!(safe_div_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((l_257 < ((*l_277) = ((((*l_258)--) ^ p_80) <= ((safe_add_func_uint64_t_u_u(l_263, g_77)) && (safe_lshift_func_uint8_t_u_s(((((0xC0BA9720L >= ((safe_div_func_uint32_t_u_u(((((safe_div_func_uint8_t_u_u((safe_unary_minus_func_uint64_t_u((safe_lshift_func_int16_t_s_s(0x30ACL, 7)))), ((*l_156) = ((safe_div_func_uint8_t_u_u((((*l_276) = g_275) , g_101), 1UL)) , 0xF2L)))) , (-1L)) == g_124[0][0]) || 0xB557L), 0x19D29158L)) == p_80)) || p_80) , 0x80L) | 0x8EL), (*p_79))))))), 0xDFCB4B0FL)), 0x7927L))), p_80));
                    if (l_278)
                        continue;
                    l_263 &= ((g_107 > (((safe_mod_func_int64_t_s_s(p_80, ((0L && p_80) , (p_80 || ((*l_285) = (((((((*l_284) = g_281[2]) != &g_282) < g_200) | p_80) && 18446744073709551615UL) > 1L)))))) > (**g_227)) != p_80)) >= p_80);
                }
            }
            else
            { 
                uint8_t l_286 = 0xD5L;
                int8_t l_298 = 0x85L;
                int64_t l_301 = 0xF1FC9B049E0BF1E8LL;
                int32_t l_308 = 1L;
                int32_t l_318 = 1L;
                int32_t l_320 = 0xA1BA3C89L;
                int32_t *l_324 = &l_215;
                int32_t l_354 = 0xE60648A6L;
                const uint64_t l_356 = 4UL;
                if (((l_286 , (g_77 & (safe_mul_func_int8_t_s_s(((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((g_293 == (void*)0), (((safe_mod_func_uint8_t_u_u((((l_286 == (6UL && (((((p_80 == (***g_183)) || l_298) & 0xDEL) , (**g_293)) != (void*)0))) , l_298) | g_299), g_247)) , l_300) != &g_181))), l_301)) > p_80), 0xDCL)))) ^ 1UL))
                { 
                    int64_t * const l_304 = &l_301;
                    int64_t **l_306[5];
                    int32_t l_309 = 0xE70D1222L;
                    int32_t l_310 = 0xC4933A01L;
                    int32_t l_311 = 0L;
                    int16_t l_312 = 0x0B5BL;
                    int32_t l_313 = 6L;
                    uint8_t l_314 = 0x52L;
                    int32_t l_317 = 1L;
                    int32_t l_319[2];
                    int16_t l_327[2];
                    int16_t *l_328[6][2][2] = {{{&l_327[0],&g_182},{&l_109.f0,(void*)0}},{{(void*)0,&l_327[0]},{&l_327[1],(void*)0}},{{&l_312,&l_327[1]},{&l_312,(void*)0}},{{&l_327[1],&l_327[0]},{(void*)0,(void*)0}},{{&l_109.f0,&g_182},{&l_327[0],&g_168}},{{&g_168,&g_168},{&l_327[0],&g_182}}};
                    uint32_t l_332[5][5][7] = {{{0xED819893L,4UL,0x03DB69E9L,0xAC696D2CL,1UL,1UL,5UL},{1UL,18446744073709551607UL,0x0C42AC63L,1UL,0x58A5C257L,0x99E8AC9FL,0xAC696D2CL},{0xCF6CDC54L,18446744073709551610UL,5UL,0x3C6BBCF5L,2UL,1UL,1UL},{0xE1A42C4EL,18446744073709551609UL,0x594A0836L,4UL,2UL,0x58A5C257L,1UL},{0x96AF4251L,0UL,0x3050B240L,0xB6406CD2L,0x58A5C257L,5UL,0x1E4228D9L}},{{0x9D942953L,18446744073709551615UL,0xE57BA105L,1UL,1UL,0xE57BA105L,18446744073709551615UL},{0UL,0xCF6CDC54L,0x067BEC60L,0xDBDAC93BL,0x2B4FC96FL,0x74CCCD61L,0xEE10D031L},{0xC3A3B31FL,0xE57BA105L,0x9D942953L,0x58A5C257L,18446744073709551615UL,0x38F53EC4L,0x03DB69E9L},{1UL,0xE1A42C4EL,0xC7718B64L,0xDBDAC93BL,18446744073709551613UL,0x20501DBAL,1UL},{1UL,0x067BEC60L,18446744073709551615UL,0xE57BA105L,0xED819893L,0xC7718B64L,0xB6406CD2L}},{{0x20501DBAL,0xED819893L,1UL,0x009296E4L,0UL,18446744073709551610UL,1UL},{0xC7718B64L,0xAC696D2CL,0x9D942953L,1UL,0x009296E4L,0x1E4228D9L,0x20501DBAL},{0xC233ED27L,1UL,0x9D942953L,0x99E8AC9FL,0UL,18446744073709551615UL,1UL},{0x8C08B6E8L,0UL,1UL,0x38F53EC4L,0x54B1F418L,0xC233ED27L,0xEE10D031L},{0xE1A42C4EL,18446744073709551613UL,18446744073709551615UL,18446744073709551615UL,18446744073709551613UL,0xE1A42C4EL,0x54B1F418L}},{{0x38F53EC4L,0x3C6BBCF5L,0x20501DBAL,0x417E2C75L,1UL,1UL,0x30CD26FBL},{18446744073709551607UL,0xE57BA105L,1UL,1UL,18446744073709551610UL,0x20501DBAL,0x0C42AC63L},{0x3050B240L,0x3C6BBCF5L,0UL,2UL,0x99E8AC9FL,18446744073709551609UL,4UL},{0UL,18446744073709551613UL,0xAB270CE4L,18446744073709551615UL,0x20501DBAL,0x009296E4L,18446744073709551615UL},{18446744073709551613UL,0UL,0xD8CFC2ADL,0x1E4228D9L,18446744073709551607UL,0xB6406CD2L,0x03DB69E9L}},{{0UL,1UL,0UL,0x54B1F418L,18446744073709551615UL,1UL,0xAB270CE4L},{0UL,0xAC696D2CL,0x0C42AC63L,0UL,0xC7718B64L,1UL,0xC233ED27L},{18446744073709551613UL,0xED819893L,18446744073709551609UL,0xDBDAC93BL,0UL,1UL,0UL},{0UL,0x067BEC60L,0x067BEC60L,0UL,5UL,0x2B4FC96FL,0x009296E4L},{0x3050B240L,0xEE10D031L,1UL,1UL,0x03DB69E9L,0x58A5C257L,18446744073709551613UL}}};
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                        l_306[i] = &l_305[2];
                    for (i = 0; i < 2; i++)
                        l_319[i] = 0xA631D278L;
                    for (i = 0; i < 2; i++)
                        l_327[i] = (-7L);
                    l_308 ^= (safe_sub_func_uint8_t_u_u(g_200, (l_304 == (g_307 = l_305[2]))));
                    l_314++;
                    g_321++;
                    l_324 = ((**g_183) = (**l_184));
                    l_319[1] = (((safe_add_func_int32_t_s_s((((g_182 &= (g_101 = l_327[1])) <= ((((((p_80 & (l_329[0] == (void*)0)) | ((((((safe_sub_func_uint16_t_u_u((l_332[4][2][3] ^ ((&g_245 != l_333) != 0x11514C04C149F11BLL)), g_145)) == g_37) < p_80) ^ l_332[4][2][3]) || (***g_183)) , p_80)) != (*g_307)) > p_80) < (-8L)) , g_275)) == (**g_295)), 0x1877C88EL)) ^ (**l_188)) >= g_247);
                }
                else
                { 
                    uint64_t *l_335 = &l_218;
                    uint64_t *l_336 = &g_124[2][0];
                    int32_t l_337 = 7L;
                    int8_t *l_346 = &l_298;
                    uint32_t l_349 = 0x924F6406L;
                    uint32_t *l_355 = &l_202;
                    uint32_t ***l_361 = (void*)0;
                    uint32_t ***l_362[3][5][1] = {{{&g_359},{&g_359},{&g_359},{&g_359},{&g_359}},{{&g_359},{&g_359},{&g_359},{&g_359},{&g_359}},{{&g_359},{&g_359},{&g_359},{&g_359},{&g_359}}};
                    int i, j, k;
                    l_337 = ((((((*l_336) |= ((*l_335) = l_334[2][0])) < ((*g_307) | ((void*)0 != l_329[0]))) >= ((*l_324) = (*g_307))) != p_80) , p_80);
                    if (l_301)
                        goto lbl_358;
                    (*l_324) = (safe_lshift_func_uint16_t_u_s(((*g_228) == p_80), (((((safe_add_func_uint8_t_u_u((((*g_307) || (safe_lshift_func_int8_t_s_s((*g_228), ((*l_346) = (safe_add_func_uint16_t_u_u(p_80, p_80)))))) == (safe_mul_func_int16_t_s_s((p_80 , g_102), 0UL))), g_124[0][0])) || (*g_88)) , l_349) | 0xCBB4EB2AL) | 0x074DED6C069431AALL)));
lbl_358:
                    l_357[2] &= (((((~0xE5571A8812CF314ELL) < (((**l_188) || ((((((*l_355) = (((((((safe_div_func_uint8_t_u_u(p_80, ((((safe_unary_minus_func_int8_t_s((p_80 != (p_80 != 1L)))) || (p_80 >= l_354)) < g_200) | (-10L)))) == 0xEA4AFD84L) , (*g_228)) ^ 0x15L) , l_349) != p_80) , g_77)) , 0xBC92094387CDF4BELL) ^ l_356) , &l_305[0]) == (void*)0)) || l_337)) , (***l_112)) == g_37) , p_80);
                    g_359 = g_359;
                }
            }
        }
    }
    if (p_80)
    { 
        for (g_101 = 0; (g_101 < 13); g_101++)
        { 
            union U1 l_365 = {-4L};
            int32_t *l_366 = &g_41;
            uint32_t * const ** const l_371 = (void*)0;
            uint32_t * const ** const *l_370 = &l_371;
            l_366 = (l_365 , l_366);
            l_370 = l_367;
        }
        return &g_87;
    }
    else
    { 
        const int64_t l_380 = 0x8C88A2468CED126DLL;
        for (l_104 = 0; (l_104 >= 12); l_104 = safe_add_func_int32_t_s_s(l_104, 2))
        { 
            int32_t *****l_383 = &l_110[3][1][0];
            g_384[1][3][5] &= (((((((safe_lshift_func_int8_t_s_s((p_80 < ((***l_368) = (**g_359))), 2)) == (safe_sub_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((l_380 | 1UL), (safe_lshift_func_int16_t_s_u(((&g_168 != &g_145) | g_107), 4)))), 0x3AEEC9DEL))) && l_380) | p_80) > p_80) , l_383) == (void*)0);
            return &g_87;
        }
    }
    return &g_87;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_124[i][j], "g_124[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_182, "g_182", print_hash_value);
    transparent_crc(g_200, "g_200", print_hash_value);
    transparent_crc(g_245, "g_245", print_hash_value);
    transparent_crc(g_247, "g_247", print_hash_value);
    transparent_crc(g_275, "g_275", print_hash_value);
    transparent_crc(g_299, "g_299", print_hash_value);
    transparent_crc(g_321, "g_321", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_384[i][j][k], "g_384[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_417[i], "g_417[i]", print_hash_value);

    }
    transparent_crc(g_418.f0, "g_418.f0", print_hash_value);
    transparent_crc(g_418.f4, "g_418.f4", print_hash_value);
    transparent_crc(g_487, "g_487", print_hash_value);
    transparent_crc(g_509.f0, "g_509.f0", print_hash_value);
    transparent_crc(g_509.f1, "g_509.f1", print_hash_value);
    transparent_crc(g_509.f2, "g_509.f2", print_hash_value);
    transparent_crc(g_509.f3, "g_509.f3", print_hash_value);
    transparent_crc(g_509.f4, "g_509.f4", print_hash_value);
    transparent_crc(g_523.f0, "g_523.f0", print_hash_value);
    transparent_crc(g_523.f4, "g_523.f4", print_hash_value);
    transparent_crc(g_537, "g_537", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_648[i], "g_648[i]", print_hash_value);

    }
    transparent_crc(g_674, "g_674", print_hash_value);
    transparent_crc(g_677, "g_677", print_hash_value);
    transparent_crc(g_928, "g_928", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1023[i], "g_1023[i]", print_hash_value);

    }
    transparent_crc(g_1031.f0, "g_1031.f0", print_hash_value);
    transparent_crc(g_1031.f1, "g_1031.f1", print_hash_value);
    transparent_crc(g_1031.f2, "g_1031.f2", print_hash_value);
    transparent_crc(g_1031.f3, "g_1031.f3", print_hash_value);
    transparent_crc(g_1031.f4, "g_1031.f4", print_hash_value);
    transparent_crc(g_1282, "g_1282", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
