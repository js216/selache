// SPDX-License-Identifier: MIT
// cctest_csmith_2e8d6248.c --- cctest case csmith_2e8d6248 (csmith seed 781017672)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xf042d194 */
/* @exp_ticks 0x3685 */

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

// Options:   -s 781017672 -o /tmp/csmith_gen_rl8x7ovc/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const uint16_t  f0;
   int8_t  f1;
   int16_t  f2;
   int16_t  f3;
   const int64_t  f4;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int32_t  f0;
   uint32_t  f1;
   int64_t  f2;
   uint16_t  f3;
   uint32_t  f4;
};
#pragma pack(pop)

union U2 {
   int64_t  f0;
};

union U3 {
   int8_t  f0;
   const int16_t  f1;
   uint8_t  f2;
};


static int32_t g_2 = 0L;
static int8_t g_41 = 1L;
static union U2 g_43 = {0L};
static uint32_t g_58 = 0x67B33DF1L;
static uint32_t g_63 = 0UL;
static int64_t g_65 = 0x4638B1AAE879CFD2LL;
static int32_t g_66 = 6L;
static uint8_t g_67 = 251UL;
static int32_t g_77[3][3] = {{0L,0L,0L},{0L,0L,0L},{0L,0L,0L}};
static uint8_t g_80 = 0xC4L;
static uint32_t g_118 = 3UL;
static uint32_t g_149 = 0x75008D73L;
static uint32_t g_150 = 0xA72BBAD3L;
static int16_t g_151 = 0xEC48L;
static int8_t g_158 = 0xB9L;
static uint32_t g_167 = 1UL;
static uint32_t g_189[3] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
static struct S1 g_191[1] = {{0x79903A01L,0x1F22465FL,0x9602BA4091520A11LL,1UL,18446744073709551614UL}};
static int8_t g_218 = 0L;



static int16_t  func_1(void);
static int32_t  func_5(uint8_t  p_6, uint16_t  p_7, int32_t  p_8, uint64_t  p_9);
static int16_t  func_13(int32_t  p_14, const struct S0  p_15);
static union U2  func_19(uint32_t  p_20, int32_t  p_21);




static int16_t  func_1(void)
{ 
    const struct S0 l_17[3] = {{0x924BL,1L,0x4571L,0xFFD8L,0x43836745799333C7LL},{0x924BL,1L,0x4571L,0xFFD8L,0x43836745799333C7LL},{0x924BL,1L,0x4571L,0xFFD8L,0x43836745799333C7LL}};
    int i;
    for (g_2 = 0; (g_2 < (-15)); g_2 = safe_sub_func_int32_t_s_s(g_2, 5))
    { 
        uint16_t l_10 = 0xD26EL;
        int32_t l_16 = 0xC70AB227L;
        int32_t l_217[3];
        int32_t l_219 = 0x62232ECDL;
        int i;
        for (i = 0; i < 3; i++)
            l_217[i] = 0L;
        if (func_5(l_10, g_2, g_2, (safe_sub_func_int16_t_s_s(func_13((l_16 = 0x74B28ED4L), l_17[2]), l_17[2].f3))))
        { 
            for (g_80 = 0; (g_80 < 30); g_80 = safe_add_func_uint64_t_u_u(g_80, 1))
            { 
                int32_t l_188 = 0x73BA691AL;
                g_189[1] |= (g_77[2][0] ^= (g_67 , (safe_mul_func_uint16_t_u_u((g_43.f0 >= ((safe_unary_minus_func_int64_t_s((safe_sub_func_int32_t_s_s((0x5030AC00ABAC2E15LL > 0xBBCD16063313960BLL), 0x7C65B12CL)))) <= 65532UL)), l_188))));
            }
        }
        else
        { 
            struct S1 l_190[3] = {{0xC5815B4CL,0xA253C7AFL,-1L,65532UL,18446744073709551615UL},{0xC5815B4CL,0xA253C7AFL,-1L,65532UL,18446744073709551615UL},{0xC5815B4CL,0xA253C7AFL,-1L,65532UL,18446744073709551615UL}};
            int i;
            g_191[0] = l_190[2];
            g_191[0].f0 = g_158;
            for (l_16 = 18; (l_16 < (-25)); l_16 = safe_sub_func_uint64_t_u_u(l_16, 5))
            { 
                uint64_t l_200 = 3UL;
                int32_t l_216 = (-1L);
                uint32_t l_220[2];
                int32_t l_221 = (-9L);
                int i;
                for (i = 0; i < 2; i++)
                    l_220[i] = 0xA8FA583BL;
                g_77[2][2] = g_149;
                g_77[2][2] = (g_191[0].f0 = ((8UL || (+((safe_mod_func_int16_t_s_s((safe_div_func_uint64_t_u_u(l_17[2].f4, l_10)), (+(l_200 , g_191[0].f2)))) || 0L))) , g_150));
                g_77[0][2] = (l_221 = ((l_219 ^= (safe_add_func_int64_t_s_s(((safe_unary_minus_func_int64_t_s(((safe_lshift_func_int8_t_s_u(((safe_mod_func_int16_t_s_s(((g_218 = (safe_sub_func_uint16_t_u_u((((l_17[2].f1 >= ((safe_div_func_int32_t_s_s(g_77[2][2], (((l_216 &= (safe_sub_func_int32_t_s_s(((safe_rshift_func_int8_t_s_s(0L, g_191[0].f4)) != g_191[0].f2), (-10L)))) | l_17[2].f4) | l_217[0]))) && l_190[2].f4)) < g_191[0].f0) >= 1UL), g_167))) ^ g_189[1]), l_217[0])) ^ 0x0DA2L), 5)) || g_63))) != l_217[0]), 1UL))) & l_220[1]));
            }
        }
        for (g_118 = 8; (g_118 <= 5); g_118 = safe_sub_func_int32_t_s_s(g_118, 4))
        { 
            return g_66;
        }
        g_77[2][2] &= g_151;
    }
    return l_17[2].f0;
}



static int32_t  func_5(uint8_t  p_6, uint16_t  p_7, int32_t  p_8, uint64_t  p_9)
{ 
    int64_t l_145 = 1L;
    int32_t l_148 = 0xF45DD7FDL;
    if ((~18446744073709551615UL))
    { 
        union U3 l_144 = {0xB6L};
        int32_t l_152[1];
        int i;
        for (i = 0; i < 1; i++)
            l_152[i] = 0xA9757F06L;
        l_152[0] &= ((g_151 = ((g_150 = ((0x056028530B2CD532LL || ((l_144 , (g_149 = (((l_145 = 0x1A2211D25EB2E64DLL) <= (((safe_add_func_uint64_t_u_u(6UL, 18446744073709551607UL)) ^ l_148) & 1UL)) >= p_6))) & g_43.f0)) || 9UL)) > p_6)) && p_6);
        for (g_80 = 0; (g_80 <= 42); g_80++)
        { 
            int8_t l_157[2][3] = {{0x87L,0x87L,0x4CL},{0x87L,0x87L,0x4CL}};
            int i, j;
            g_158 |= (g_149 && (!((((g_77[2][2] , (+((g_65 && (l_148 = (255UL >= l_145))) <= g_2))) , l_157[0][1]) ^ p_8) || 0UL)));
            for (l_144.f0 = 22; (l_144.f0 < (-9)); --l_144.f0)
            { 
                uint32_t l_178 = 1UL;
                g_77[2][2] = (18446744073709551615UL ^ (p_9 > (safe_mod_func_int32_t_s_s((safe_div_func_uint32_t_u_u((g_167 ^= (safe_add_func_uint64_t_u_u((l_157[0][1] && 0x67C7D0B8D769405CLL), l_144.f2))), (-3L))), 0x7BE4936EL))));
                l_178 = ((((g_41 , (safe_add_func_int64_t_s_s(((+(~0x8842E752L)) > (safe_lshift_func_int8_t_s_u((((safe_mul_func_int16_t_s_s((safe_div_func_int32_t_s_s((l_144.f2 ^ g_167), p_7)), l_145)) && g_65) == g_118), p_6))), 1UL))) <= l_148) & 0x5CFF5E1EL) != l_157[0][1]);
            }
            if (l_152[0])
                break;
        }
    }
    else
    { 
        l_148 = ((g_151 || p_7) <= p_9);
    }
    return g_151;
}



static int16_t  func_13(int32_t  p_14, const struct S0  p_15)
{ 
    int32_t l_18[1];
    int32_t l_37 = 0x3EEDA781L;
    struct S1 l_44 = {-10L,0xF98093AFL,9L,1UL,18446744073709551615UL};
    int32_t l_137 = (-5L);
    int32_t l_138 = 0x531938C4L;
    int32_t l_139[3][2][4] = {{{0x3E27632AL,8L,0x3E27632AL,8L},{0x3E27632AL,8L,0x3E27632AL,8L}},{{0x3E27632AL,8L,0x3E27632AL,8L},{0x3E27632AL,8L,0x3E27632AL,8L}},{{0x3E27632AL,8L,0x3E27632AL,8L},{0x3E27632AL,8L,0x3E27632AL,8L}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_18[i] = 1L;
    for (p_14 = 0; (p_14 >= 0); p_14 -= 1)
    { 
        int32_t l_64 = 1L;
        uint32_t l_76 = 0x669BA90DL;
        uint32_t l_81[5][1] = {{0xB63BBBF1L},{0x2F95C78EL},{0xB63BBBF1L},{0x2F95C78EL},{0xB63BBBF1L}};
        struct S1 l_85 = {0xC46E721FL,0x129D736DL,-1L,0xFBADL,0x945289E6L};
        int32_t l_86 = 0L;
        uint8_t l_103 = 0UL;
        int32_t l_128 = 0xF97960EBL;
        int32_t l_129 = 3L;
        int32_t l_130 = 0x6211E331L;
        int32_t l_131[1];
        int i, j;
        for (i = 0; i < 1; i++)
            l_131[i] = 0x8B9B0A51L;
        if ((func_19(((safe_div_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((safe_unary_minus_func_uint8_t_u((safe_sub_func_int64_t_s_s((safe_mul_func_int64_t_s_s(l_18[p_14], ((l_37 = (safe_add_func_int64_t_s_s((l_18[p_14] != g_2), ((safe_lshift_func_uint16_t_u_s(p_15.f4, l_18[p_14])) < g_2)))) != 9L))), g_2)))), p_15.f3)), p_15.f1)), g_2)) & 0L), l_18[0]) , l_18[p_14]))
        { 
            int32_t l_57 = 0x120B2523L;
            for (g_43.f0 = 0; (g_43.f0 <= 0); g_43.f0 += 1)
            { 
                struct S1 l_45 = {7L,0x2D863E32L,-1L,9UL,18446744073709551611UL};
                int i;
                l_45 = l_44;
                if (l_18[p_14])
                    continue;
                l_64 = (p_15.f0 , (safe_mul_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s((g_63 = (safe_sub_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u(((((~p_15.f4) , ((safe_mod_func_uint64_t_u_u(((l_44.f3 < (((++g_58) , (safe_lshift_func_uint16_t_u_u(p_14, 1))) > 0UL)) != g_41), g_41)) , l_44.f4)) <= 0xAF57L) <= (-4L)), g_2)) == (-6L)), 0x7BC4A6B1L))), g_2)) & (-1L)), g_43.f0)));
            }
            for (l_44.f4 = 0; (l_44.f4 <= 0); l_44.f4 += 1)
            { 
                g_65 = l_44.f3;
                if (l_64)
                    continue;
            }
            ++g_67;
        }
        else
        { 
            uint16_t l_70 = 0UL;
            l_70 = (g_41 | l_44.f1);
            if ((l_44.f1 >= 0xA5C54CD8L))
            { 
                struct S0 l_73 = {0x7C8AL,0x0BL,0x0F65L,0xD2A1L,0xD8D7774CA6A66835LL};
                l_76 = (((g_63 <= (safe_lshift_func_int16_t_s_u((l_73 , (0x342F278403027642LL >= (safe_rshift_func_uint8_t_u_u((g_43.f0 | g_66), g_43.f0)))), 12))) , 0xE644L) , p_14);
            }
            else
            { 
                if (g_43.f0)
                    break;
                if (l_44.f0)
                    continue;
            }
            for (g_63 = 0; (g_63 <= 0); g_63 += 1)
            { 
                uint64_t l_82 = 0UL;
                g_77[2][2] &= (-8L);
                l_82 = (((((safe_lshift_func_int16_t_s_u(((0x8624L > (g_41 || (g_80 = ((l_44 , g_77[0][0]) & 4294967295UL)))) < l_81[1][0]), p_15.f2)) >= l_18[0]) ^ g_63) == l_70) , 0xBDFE816DL);
                if (l_82)
                    break;
            }
        }
        for (l_44.f4 = 0; (l_44.f4 <= 0); l_44.f4 += 1)
        { 
            int32_t l_115 = 0x8E8FF622L;
            int32_t l_133 = 0x19CEE683L;
            int32_t l_134 = 7L;
            int32_t l_135[4][3] = {{0x0D186C8CL,0x0D186C8CL,0x6F9DF61DL},{(-6L),0x6F9DF61DL,0x6F9DF61DL},{0x6F9DF61DL,0x02F12706L,0x506553B8L},{(-6L),0x02F12706L,(-6L)}};
            uint16_t l_140[3][4][3] = {{{1UL,65535UL,7UL},{3UL,0UL,0UL},{65527UL,0UL,65527UL},{65527UL,65527UL,1UL}},{{3UL,9UL,0x0378L},{1UL,0x0D59L,65528UL},{0x0D59L,9UL,0xCA7BL},{65535UL,65527UL,65535UL}},{{9UL,0UL,65535UL},{7UL,0UL,0xCA7BL},{0xCA7BL,65535UL,65528UL},{0UL,0x3C47L,0x0378L}}};
            int i, j, k;
            if ((safe_sub_func_uint32_t_u_u((l_85 , l_18[p_14]), 0L)))
            { 
                uint64_t l_102 = 0x794C0DA39397282FLL;
                struct S0 l_110 = {0x327DL,-1L,0L,0x87E5L,0xE2A5121EC5D866FALL};
                int i, j;
                l_86 = l_18[p_14];
                l_64 = ((((l_81[p_14][l_44.f4] > ((safe_div_func_uint8_t_u_u((((safe_div_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(0x03L, 2)), (safe_unary_minus_func_uint16_t_u((safe_mod_func_int16_t_s_s(((safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u(((l_81[(l_44.f4 + 1)][l_44.f4] > (g_41 ^= ((((l_81[(l_44.f4 + 1)][l_44.f4] ^ 0xF8DCL) >= l_18[0]) & l_44.f3) < p_15.f2))) , g_67), 1L)), g_77[2][2])), p_15.f1)) && g_77[1][0]), p_14)))))) && l_18[p_14]) , l_102), l_103)) ^ l_18[p_14])) , g_58) , g_41) == 0x47FA911AL);
                g_77[0][1] = ((((g_65 = (((safe_mul_func_uint16_t_u_u(g_41, ((safe_div_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(((l_110 , ((safe_mod_func_int32_t_s_s(p_15.f2, ((((((safe_rshift_func_uint8_t_u_u(0xDFL, p_15.f1)) | l_18[p_14]) , l_110.f3) , g_65) > 0xEAL) | 4UL))) != g_80)) == p_15.f2), 0x09B6L)), g_80)) || p_14))) ^ g_80) <= g_58)) && l_115) || l_81[p_14][l_44.f4]) != l_115);
            }
            else
            { 
                uint16_t l_125 = 5UL;
                int32_t l_126 = 0x602C2F6DL;
                int32_t l_127[5][3] = {{(-1L),(-1L),(-1L)},{(-1L),0x42F3EDF1L,1L},{(-1L),0x42F3EDF1L,(-1L)},{5L,(-1L),1L},{5L,5L,(-1L)}};
                int32_t l_132 = 0xA799C40DL;
                int16_t l_136 = 0xEE98L;
                int i, j;
                l_85.f0 ^= (safe_mul_func_uint16_t_u_u((++g_118), (safe_lshift_func_int8_t_s_s((-8L), (safe_add_func_int8_t_s_s((g_77[2][2] != 0L), g_67))))));
                l_125 = g_66;
                l_140[0][2][2]++;
            }
        }
    }
    return g_65;
}



static union U2  func_19(uint32_t  p_20, int32_t  p_21)
{ 
    uint16_t l_40 = 0UL;
    int32_t l_42 = 0xD8D58945L;
    l_42 |= (safe_mul_func_int8_t_s_s(0L, (g_41 = (p_21 , ((g_2 | ((l_40 = g_2) && g_2)) && 0x21BA52B3L)))));
    return g_43;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_43.f0, "g_43.f0", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_77[i][j], "g_77[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_118, "g_118", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_189[i], "g_189[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_191[i].f0, "g_191[i].f0", print_hash_value);
        transparent_crc(g_191[i].f1, "g_191[i].f1", print_hash_value);
        transparent_crc(g_191[i].f2, "g_191[i].f2", print_hash_value);
        transparent_crc(g_191[i].f3, "g_191[i].f3", print_hash_value);
        transparent_crc(g_191[i].f4, "g_191[i].f4", print_hash_value);

    }
    transparent_crc(g_218, "g_218", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
