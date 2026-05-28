// SPDX-License-Identifier: MIT
// cctest_csmith_c9de87b4.c --- cctest case csmith_c9de87b4 (csmith seed 3386804148)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x4256c9a9 */
/* @exp_ticks 0x5783 */

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

// Options:   -s 3386804148 -o /tmp/csmith_gen_46pvgg88/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int16_t  f0;
   uint16_t  f1;
   int32_t  f2;
   const uint32_t  f3;
   const int32_t  f4;
};
#pragma pack(pop)

union U1 {
   struct S0  f0;
};

union U2 {
   const int32_t  f0;
};

union U3 {
   int8_t  f0;
   uint8_t  f1;
};


static uint32_t g_4 = 0x1C5534BFL;
static uint32_t g_28 = 18446744073709551615UL;
static uint32_t g_61[3] = {9UL,9UL,9UL};
static uint32_t g_62 = 0xE8CE1F6DL;
static uint64_t g_86 = 0x7F1499195F91B207LL;
static int32_t g_103 = 0xC9CC5FAEL;
static struct S0 g_111[3] = {{-8L,65535UL,0L,1UL,0x94C470FEL},{-8L,65535UL,0L,1UL,0x94C470FEL},{-8L,65535UL,0L,1UL,0x94C470FEL}};
static int64_t g_119 = 0x785604A185305F71LL;
static int8_t g_126 = 0x75L;
static int64_t g_127 = 0x01B87C57D7CE4956LL;
static uint32_t g_128 = 9UL;
static int32_t g_138 = 0xD84E8D85L;
static const union U2 g_146 = {0x9812E294L};



static const union U2  func_1(void);
static int64_t  func_6(const union U2  p_7);
static union U2  func_8(int64_t  p_9, union U3  p_10, uint8_t  p_11, const int32_t  p_12);
static int8_t  func_14(int32_t  p_15);




static const union U2  func_1(void)
{ 
    union U1 l_5[4][2][4] = {{{{{0x0A9BL,9UL,0x5CF1C946L,0x43D2717FL,0x039EE491L}},{{0xED6BL,0x5720L,-8L,4294967289UL,-6L}},{{0L,65528UL,-6L,4294967290UL,0x32CF415DL}},{{0xC6FEL,0x3A26L,0xD210EC32L,4294967295UL,-5L}}},{{{0xED6BL,0x5720L,-8L,4294967289UL,-6L}},{{1L,1UL,9L,0xD14CD495L,0x8AAF0A9BL}},{{-3L,0x0866L,0x93FE6966L,0xF3B0639EL,0xA4137D6CL}},{{0x0A9BL,9UL,0x5CF1C946L,0x43D2717FL,0x039EE491L}}}},{{{{5L,65535UL,0xC5674FA7L,4294967295UL,-4L}},{{0xC821L,0x4667L,0x20DD93BAL,4294967295UL,-1L}},{{0xC821L,0x4667L,0x20DD93BAL,4294967295UL,-1L}},{{5L,65535UL,0xC5674FA7L,4294967295UL,-4L}}},{{{5L,65535UL,0xC5674FA7L,4294967295UL,-4L}},{{0xC6FEL,0x3A26L,0xD210EC32L,4294967295UL,-5L}},{{-3L,0x0866L,0x93FE6966L,0xF3B0639EL,0xA4137D6CL}},{{0xA6B4L,0xBE19L,0xE7C14AB6L,0x3B1DAB55L,0L}}}},{{{{0xED6BL,0x5720L,-8L,4294967289UL,-6L}},{{5L,65535UL,0xC5674FA7L,4294967295UL,-4L}},{{0L,65528UL,-6L,4294967290UL,0x32CF415DL}},{{0x7FA3L,0UL,0x5BEFA1E1L,0x5A3D7F19L,-5L}}},{{{0x0A9BL,9UL,0x5CF1C946L,0x43D2717FL,0x039EE491L}},{{3L,0xDD2EL,1L,0x4132D38CL,0x8C98AAC1L}},{{0x0A9BL,9UL,0x5CF1C946L,0x43D2717FL,0x039EE491L}},{{0x7FA3L,0UL,0x5BEFA1E1L,0x5A3D7F19L,-5L}}}},{{{{0L,65528UL,-6L,4294967290UL,0x32CF415DL}},{{5L,65535UL,0xC5674FA7L,4294967295UL,-4L}},{{0xED6BL,0x5720L,-8L,4294967289UL,-6L}},{{0xA6B4L,0xBE19L,0xE7C14AB6L,0x3B1DAB55L,0L}}},{{{-3L,0x0866L,0x93FE6966L,0xF3B0639EL,0xA4137D6CL}},{{0xC6FEL,0x3A26L,0xD210EC32L,4294967295UL,-5L}},{{5L,65535UL,0xC5674FA7L,4294967295UL,-4L}},{{5L,65535UL,0xC5674FA7L,4294967295UL,-4L}}}}};
    union U3 l_13 = {0x23L};
    int8_t l_144[2];
    int32_t l_145 = 8L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_144[i] = 0x86L;
    l_145 = (safe_add_func_uint8_t_u_u(g_4, ((g_4 | ((l_5[0][1][2] , (((l_144[1] = func_6(func_8(g_4, l_13, l_5[0][1][2].f0.f0, l_13.f1))) ^ g_111[2].f4) != g_111[2].f3)) >= 0x67F9L)) || g_128)));
    return g_146;
}



static int64_t  func_6(const union U2  p_7)
{ 
    union U3 l_77[5] = {{0x2BL},{0x2BL},{0x2BL},{0x2BL},{0x2BL}};
    int32_t l_89[5] = {0x1CB9B5B5L,0x1CB9B5B5L,0x1CB9B5B5L,0x1CB9B5B5L,0x1CB9B5B5L};
    int16_t l_125 = 0x9869L;
    int i;
lbl_143:
    for (g_62 = 0; (g_62 < 47); g_62++)
    { 
        int32_t l_87 = 9L;
        int32_t l_88[3][3] = {{(-2L),(-2L),(-2L)},{0xA5162C4FL,0xA5162C4FL,0xA5162C4FL},{(-2L),(-2L),(-2L)}};
        int i, j;
        l_89[3] = (safe_div_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_u((l_88[0][1] = ((((safe_add_func_int64_t_s_s((g_86 &= ((safe_lshift_func_int8_t_s_u((((l_77[1] , 0x31361057L) == (safe_mul_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u((p_7.f0 >= (safe_mul_func_uint8_t_u_u((p_7.f0 , 0x77L), g_4))), g_61[1])) > g_28), 1UL)), 8UL))) && 0UL), 3)) < p_7.f0)), 18446744073709551615UL)) && l_87) >= l_87) < g_61[2])), 5)) > p_7.f0) <= 0xCB2EL), g_62)) || g_86), l_77[1].f0));
        for (l_87 = (-27); (l_87 < (-2)); l_87 = safe_add_func_int32_t_s_s(l_87, 8))
        { 
            l_89[3] = p_7.f0;
        }
        for (l_87 = (-16); (l_87 == 18); l_87++)
        { 
            uint32_t l_102 = 4294967287UL;
            int32_t l_105 = (-1L);
            if (((-6L) && (safe_mul_func_uint16_t_u_u(g_61[0], (safe_lshift_func_uint8_t_u_u(((l_88[2][1] == (g_103 ^= (safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(0x13L, l_102)), g_61[1])))) | p_7.f0), g_62))))))
            { 
                l_88[0][1] &= l_89[0];
            }
            else
            { 
                uint32_t l_104 = 4294967287UL;
                l_105 = l_104;
                l_88[2][2] = (safe_div_func_int8_t_s_s(p_7.f0, (-1L)));
            }
            if (p_7.f0)
                continue;
            if (((safe_unary_minus_func_int16_t_s(1L)) , (safe_rshift_func_uint16_t_u_s((g_111[2] , (safe_unary_minus_func_int64_t_s((g_119 &= (safe_div_func_int8_t_s_s(7L, (safe_mod_func_int64_t_s_s(((((safe_div_func_uint16_t_u_u((g_103 || 0xE5L), l_87)) < 0x811D2751B8D994F8LL) == p_7.f0) , 0xD78B1D69833782E3LL), 3UL)))))))), 2))))
            { 
                return g_111[2].f2;
            }
            else
            { 
                int32_t l_120[3][2][3] = {{{0x2407C9B6L,0x2C646EC4L,0x5DD02E5DL},{0x2407C9B6L,0x459F139CL,0xD3BC2F6DL}},{{0x2407C9B6L,0x015DFAB5L,0x2407C9B6L},{0x2407C9B6L,0x2C646EC4L,0x5DD02E5DL}},{{0x2407C9B6L,0x459F139CL,0xD3BC2F6DL},{0x2407C9B6L,0x015DFAB5L,0x2407C9B6L}}};
                int i, j, k;
                l_120[2][0][2] = p_7.f0;
                l_125 ^= ((safe_div_func_uint8_t_u_u(((((((safe_sub_func_int16_t_s_s(((l_77[1] , 0xB2F6CA1BL) > l_120[2][0][2]), ((l_89[1] > g_28) < g_111[2].f4))) & l_120[2][0][2]) || 0x07L) ^ 2L) >= p_7.f0) || g_103), (-1L))) == l_88[0][1]);
                g_126 = (-4L);
            }
        }
    }
    for (g_103 = 0; (g_103 <= 4); g_103 += 1)
    { 
        uint32_t l_137 = 0xA1A4E4CFL;
        uint64_t l_140[5];
        int i;
        for (i = 0; i < 5; i++)
            l_140[i] = 0x2397AFB7A7CBF150LL;
        for (g_28 = 0; (g_28 <= 4); g_28 += 1)
        { 
            for (g_86 = 1; (g_86 <= 4); g_86 += 1)
            { 
                g_127 = 7L;
                ++g_128;
                l_89[0] &= 0x5EEAC9F2L;
            }
        }
        for (g_126 = 4; (g_126 >= 0); g_126 -= 1)
        { 
            union U1 l_131 = {{2L,0x7CFBL,0x67B20451L,0x912C0205L,0x7226B515L}};
            int32_t l_136 = 0x4605F856L;
            int16_t l_139 = (-1L);
            l_89[3] = ((l_131 , ((safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((p_7.f0 || ((4L < (l_136 |= 0xE4573DCF354A0364LL)) > g_28)), 3)), l_137)) | (-1L))) | 18446744073709551615UL);
            l_140[2]--;
        }
        return l_77[1].f0;
    }
    if (g_126)
        goto lbl_143;
    return p_7.f0;
}



static union U2  func_8(int64_t  p_9, union U3  p_10, uint8_t  p_11, const int32_t  p_12)
{ 
    uint8_t l_18 = 0x26L;
    int64_t l_63 = 0xAA0404C6930A8756LL;
    union U2 l_64 = {0x2B8877E4L};
    g_62 = (func_14((safe_div_func_uint16_t_u_u(0UL, l_18))) , (safe_mul_func_uint8_t_u_u(g_61[2], p_11)));
    l_63 = l_18;
    return l_64;
}



static int8_t  func_14(int32_t  p_15)
{ 
    int16_t l_23 = (-1L);
    int64_t l_31[3];
    int32_t l_32 = 0x1F903A79L;
    int32_t l_33 = 0L;
    int32_t l_58 = 0x2BEB855BL;
    int i;
    for (i = 0; i < 3; i++)
        l_31[i] = 0xF05C8A2DB6377F0ALL;
    g_28 |= ((safe_sub_func_uint64_t_u_u((safe_mod_func_uint32_t_u_u(l_23, (safe_sub_func_int16_t_s_s(p_15, ((safe_sub_func_uint32_t_u_u((l_23 >= l_23), l_23)) > 0x1D497C24L))))), g_4)) , g_4);
    l_33 = (l_32 ^= (safe_rshift_func_int16_t_s_s(l_31[0], 4)));
    for (l_32 = 0; (l_32 <= 20); ++l_32)
    { 
        int32_t l_48[2];
        int32_t l_57 = (-6L);
        int i;
        for (i = 0; i < 2; i++)
            l_48[i] = (-1L);
        l_33 = ((safe_lshift_func_int16_t_s_s(((((((safe_rshift_func_int8_t_s_u((safe_div_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(g_4, ((g_4 , (safe_rshift_func_uint16_t_u_u(((255UL > p_15) > 2L), l_23))) | g_28))), 1)), g_4)), 4)) & g_4) & l_48[1]) < l_33) > p_15) != 1UL), 4)) || p_15);
        if (g_28)
            continue;
        l_58 &= (2UL && (l_57 ^= (((safe_rshift_func_uint16_t_u_u((l_33 = (l_48[1] && (safe_lshift_func_int8_t_s_u(0xF5L, 7)))), 4)) == (((safe_rshift_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(65535UL, 0xA9D2L)) < p_15), l_31[0])) , g_4) != g_28)) , g_4)));
    }
    return l_32;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_61[i], "g_61[i]", print_hash_value);

    }
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_111[i].f0, "g_111[i].f0", print_hash_value);
        transparent_crc(g_111[i].f1, "g_111[i].f1", print_hash_value);
        transparent_crc(g_111[i].f2, "g_111[i].f2", print_hash_value);
        transparent_crc(g_111[i].f3, "g_111[i].f3", print_hash_value);
        transparent_crc(g_111[i].f4, "g_111[i].f4", print_hash_value);

    }
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_146.f0, "g_146.f0", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
