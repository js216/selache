// SPDX-License-Identifier: MIT
// cctest_csmith_2ee8186e.c --- cctest case csmith_2ee8186e (csmith seed 786962542)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x9e56abe3 */
/* @exp_ticks 0x3b11 */

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

// Options:   -s 786962542 -o /tmp/csmith_gen_hql4yk_d/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint32_t  f0;
   const int32_t  f1;
   int64_t  f2;
   int32_t  f3;
};
#pragma pack(pop)

struct S1 {
   int64_t  f0;
   uint8_t  f1;
   uint32_t  f2;
   int32_t  f3;
   int8_t  f4;
};

struct S2 {
   const int32_t  f0;
   uint64_t  f1;
   const int32_t  f2;
   uint64_t  f3;
   uint8_t  f4;
   const uint32_t  f5;
};

union U3 {
   const int32_t  f0;
   int32_t  f1;
   int64_t  f2;
   const uint32_t  f3;
};


static union U3 g_22 = {0xF0E77DA1L};
static struct S0 g_38 = {0UL,-2L,0x4D083830386B9BDDLL,3L};
static struct S2 g_39[2] = {{0x358509EFL,0xE88F3C25A1B5826CLL,0xE71C9EEBL,0UL,250UL,0xF04B2B3AL},{0x358509EFL,0xE88F3C25A1B5826CLL,0xE71C9EEBL,0UL,250UL,0xF04B2B3AL}};
static int16_t g_78[3][1][2] = {{{1L,1L}},{{1L,1L}},{{1L,1L}}};
static struct S1 g_95 = {0x5D01A8FC39F97B59LL,251UL,0xE233B6E2L,0xDB36A152L,0L};
static uint32_t g_99 = 1UL;
static int32_t g_143[3] = {0x08CD4FB8L,0x08CD4FB8L,0x08CD4FB8L};



static const union U3  func_1(void);
static int8_t  func_2(struct S2  p_3);
static union U3  func_6(struct S0  p_7, int32_t  p_8, int64_t  p_9, struct S0  p_10, struct S2  p_11);
static struct S0  func_12(int32_t  p_13, struct S0  p_14, int32_t  p_15, const uint32_t  p_16, uint16_t  p_17);




static const union U3  func_1(void)
{ 
    struct S2 l_4 = {-10L,0xFCF33F23E93D0B54LL,-1L,8UL,0UL,0xD60A2215L};
    int64_t l_145 = 0x961142FEC1ED602CLL;
    l_145 = (func_2(l_4) != l_4.f0);
    return g_22;
}



static int8_t  func_2(struct S2  p_3)
{ 
    int32_t l_23 = 0xE82A74DBL;
    int32_t l_24 = 0xD4826422L;
    struct S0 l_25 = {0xEC02DFCEL,0x5866B388L,-4L,0x058A13C4L};
    uint32_t l_80 = 0UL;
    uint32_t l_92 = 18446744073709551607UL;
    int32_t l_97 = (-1L);
    struct S1 l_103[2][5][5] = {{{{0x4C43CD8866DC531FLL,0x2FL,0x882A91ADL,1L,0xCCL},{0x763735208E988613LL,0x43L,18446744073709551615UL,0x23539A05L,0xB5L},{0xC9F68CF576304A0BLL,1UL,0x0D791CDEL,0x361DA5A7L,0xF2L},{0x4C43CD8866DC531FLL,0x2FL,0x882A91ADL,1L,0xCCL},{0x07010F87BC80A444LL,0x81L,0x4FB29E57L,0x6B11A4FFL,0x4BL}},{{0L,255UL,0x449A3136L,-1L,-10L},{0x41C76BB48C356ED0LL,0xC0L,1UL,-1L,0x0DL},{0x39D9FE8AC17F9EEELL,0x0CL,0xAF5C048DL,0x9CDFBC4FL,-7L},{0x41C76BB48C356ED0LL,0xC0L,1UL,-1L,0x0DL},{0L,255UL,0x449A3136L,-1L,-10L}},{{0xC9F68CF576304A0BLL,1UL,0x0D791CDEL,0x361DA5A7L,0xF2L},{8L,0x8FL,18446744073709551606UL,0xAABE801AL,0xE0L},{0x763735208E988613LL,0x43L,18446744073709551615UL,0x23539A05L,0xB5L},{0x07010F87BC80A444LL,0x81L,0x4FB29E57L,0x6B11A4FFL,0x4BL},{8L,0x8FL,18446744073709551606UL,0xAABE801AL,0xE0L}},{{0L,255UL,0x449A3136L,-1L,-10L},{0x869DD9846AC962BCLL,255UL,18446744073709551615UL,0x9E358F53L,9L},{0x869DD9846AC962BCLL,255UL,18446744073709551615UL,0x9E358F53L,9L},{0L,255UL,0x449A3136L,-1L,-10L},{0x314B3E7E0054F3BALL,0x4CL,0x0CA3B740L,0L,1L}},{{0x4C43CD8866DC531FLL,0x2FL,0x882A91ADL,1L,0xCCL},{0xCDCE665EB517B2DELL,0x82L,18446744073709551615UL,0L,-1L},{0x4B00287A080E1D11LL,0xAAL,4UL,0xB3DE1EFCL,0x47L},{8L,0x8FL,18446744073709551606UL,0xAABE801AL,0xE0L},{8L,0x8FL,18446744073709551606UL,0xAABE801AL,0xE0L}}},{{{0x11AB6490890113F6LL,253UL,0x4454C8FCL,0xF996E4E2L,0L},{0L,255UL,0x449A3136L,-1L,-10L},{0x11AB6490890113F6LL,253UL,0x4454C8FCL,0xF996E4E2L,0L},{0x314B3E7E0054F3BALL,0x4CL,0x0CA3B740L,0L,1L},{0L,255UL,0x449A3136L,-1L,-10L}},{{8L,0x8FL,18446744073709551606UL,0xAABE801AL,0xE0L},{0x763735208E988613LL,0x43L,18446744073709551615UL,0x23539A05L,0xB5L},{0x07010F87BC80A444LL,0x81L,0x4FB29E57L,0x6B11A4FFL,0x4BL},{8L,0x8FL,18446744073709551606UL,0xAABE801AL,0xE0L},{0x07010F87BC80A444LL,0x81L,0x4FB29E57L,0x6B11A4FFL,0x4BL}},{{0x11AB6490890113F6LL,253UL,0x4454C8FCL,0xF996E4E2L,0L},{0x11AB6490890113F6LL,253UL,0x4454C8FCL,0xF996E4E2L,0L},{9L,255UL,8UL,-1L,0x38L},{0x869DD9846AC962BCLL,255UL,18446744073709551615UL,0x9E358F53L,9L},{0x314B3E7E0054F3BALL,0x4CL,0x0CA3B740L,0L,1L}},{{0x2EDBCE3F75E0FD25LL,0x8CL,1UL,0xD93D51DFL,-1L},{0x07010F87BC80A444LL,0x81L,0x4FB29E57L,0x6B11A4FFL,0x4BL},{0x4DCFDAD02808DCF8LL,0x3BL,0x7F04C0B5L,0xB2B2917DL,1L},{0x4DCFDAD02808DCF8LL,0x3BL,0x7F04C0B5L,0xB2B2917DL,1L},{0x07010F87BC80A444LL,0x81L,0x4FB29E57L,0x6B11A4FFL,0x4BL}},{{0x314B3E7E0054F3BALL,0x4CL,0x0CA3B740L,0L,1L},{0x39D9FE8AC17F9EEELL,0x0CL,0xAF5C048DL,0x9CDFBC4FL,-7L},{8L,1UL,0x93B09627L,-1L,0x46L},{0x314B3E7E0054F3BALL,0x4CL,0x0CA3B740L,0L,1L},{-4L,0x7EL,0xC9179A28L,0L,7L}}}};
    union U3 l_142[4][1][4] = {{{{0x90FF8399L},{5L},{0x25A2B16FL},{0x25A2B16FL}}},{{{0L},{0L},{0L},{5L}}},{{{5L},{0x90FF8399L},{0L},{0x90FF8399L}}},{{{0L},{-2L},{0x25A2B16FL},{0L}}}};
    uint32_t l_144 = 0x16DB70B3L;
    int i, j, k;
    if (((!(func_6(func_12(((safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((g_22 , (l_23 , (5L | 0xC7L))), 1)), l_24)) <= (-1L)), l_25, l_23, p_3.f2, p_3.f1), p_3.f4, g_38.f0, l_25, g_39[0]) , l_25.f3)) > p_3.f4))
    { 
        int32_t l_72 = (-1L);
        int64_t l_74 = 0xB3C44AE9DA5FDE22LL;
        int32_t l_75 = 1L;
lbl_52:
        g_22.f1 |= l_23;
        for (p_3.f4 = 0; (p_3.f4 >= 6); p_3.f4 = safe_add_func_int64_t_s_s(p_3.f4, 5))
        { 
            int32_t l_71 = (-7L);
            int32_t l_73[2];
            int i;
            for (i = 0; i < 2; i++)
                l_73[i] = 0xA410498CL;
            if (l_24)
                goto lbl_52;
            g_22.f1 = ((safe_add_func_int8_t_s_s(((l_75 ^= (safe_add_func_uint8_t_u_u(0xB6L, (safe_mul_func_uint8_t_u_u(((~((safe_unary_minus_func_int8_t_s((0xE7A9L <= (safe_mod_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s(g_38.f2, ((safe_add_func_int16_t_s_s(((safe_div_func_int16_t_s_s(((((l_71 = (safe_lshift_func_uint8_t_u_u((1L == l_24), 2))) && g_38.f1) <= 6UL) < l_72), l_73[1])) || l_73[0]), g_38.f2)) , g_39[0].f4))) || g_22.f0), l_74))))) < p_3.f3)) != p_3.f1), p_3.f5))))) != 0x64AC225C50F45F4DLL), l_74)) <= g_38.f2);
        }
    }
    else
    { 
        const int32_t l_79[2] = {(-10L),(-10L)};
        int32_t l_85 = (-7L);
        int32_t l_98 = (-1L);
        struct S1 l_102 = {0x7C8792F5982E8761LL,0xCAL,18446744073709551615UL,0x0A5FE3C0L,0xC3L};
        int i;
        g_22.f1 |= (0x5FL & (safe_lshift_func_int8_t_s_u((g_78[0][0][0] || (((l_79[1] != (((-6L) & 1UL) >= 2L)) , 65526UL) == l_80)), 3)));
        for (p_3.f4 = (-7); (p_3.f4 != 46); p_3.f4 = safe_add_func_uint32_t_u_u(p_3.f4, 1))
        { 
            uint16_t l_83[4][4] = {{0xFF2AL,0xFF2AL,0xFF2AL,0xFF2AL},{0xFF2AL,0xFF2AL,0xFF2AL,0xFF2AL},{0xFF2AL,0xFF2AL,0xFF2AL,0xFF2AL},{0xFF2AL,0xFF2AL,0xFF2AL,0xFF2AL}};
            int32_t l_84 = 0xA4427A07L;
            int i, j;
            l_84 = l_83[3][1];
        }
        if (((func_12(((0UL | l_25.f1) > 1L), g_38, p_3.f4, l_25.f0, g_22.f0) , p_3.f5) != g_22.f0))
        { 
            l_85 &= (-10L);
        }
        else
        { 
            uint16_t l_93 = 0xEB6CL;
            int32_t l_94 = 0x4A83BE94L;
            struct S1 l_96[1][5][1] = {{{{0xA51574812A85F466LL,0UL,0UL,0x99B53D0EL,8L}},{{0xA51574812A85F466LL,0UL,0UL,0x99B53D0EL,8L}},{{0xA51574812A85F466LL,0UL,0UL,0x99B53D0EL,8L}},{{0xA51574812A85F466LL,0UL,0UL,0x99B53D0EL,8L}},{{0xA51574812A85F466LL,0UL,0UL,0x99B53D0EL,8L}}}};
            int i, j, k;
            if ((((g_22.f2 = (g_38.f2 = (safe_lshift_func_int16_t_s_s(8L, (l_94 = (l_24 ^ (safe_sub_func_int64_t_s_s((safe_sub_func_uint64_t_u_u(((((p_3.f4 = (l_92 = ((l_23 = (g_78[0][0][1] >= ((-9L) > p_3.f3))) <= (-7L)))) != p_3.f2) | p_3.f0) & l_93), p_3.f1)), g_38.f0)))))))) || p_3.f0) != p_3.f3))
            { 
                l_96[0][1][0] = g_95;
                --g_99;
            }
            else
            { 
                int8_t l_109 = 0x61L;
                int32_t l_112 = 0x9A59BD7BL;
                l_103[1][1][1] = l_102;
                l_98 ^= (safe_mul_func_uint8_t_u_u(0x08L, (safe_mod_func_uint8_t_u_u(((safe_unary_minus_func_int64_t_s(l_109)) ^ (safe_mul_func_int16_t_s_s((0xBEB0L < (l_25 , l_109)), 0x959CL))), p_3.f2))));
                l_112 |= p_3.f5;
            }
            for (g_22.f2 = 0; (g_22.f2 == 16); ++g_22.f2)
            { 
                uint32_t l_115 = 0xD822687BL;
                l_102.f3 = (-6L);
                ++l_115;
            }
            l_97 = (safe_mod_func_int32_t_s_s(l_103[1][1][1].f4, (safe_rshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((g_95 , ((safe_div_func_uint8_t_u_u(l_96[0][1][0].f1, (((safe_mod_func_int16_t_s_s(g_95.f1, l_93)) <= p_3.f5) & g_39[0].f3))) & 0xC833108AL)), p_3.f1)), 4))));
        }
    }
    g_95.f3 = (safe_mul_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((g_38.f2 = (safe_div_func_int64_t_s_s((((safe_mod_func_uint32_t_u_u((g_143[2] = ((l_142[2][0][0].f1 = ((safe_add_func_uint32_t_u_u((--g_38.f0), ((8UL <= (p_3.f5 & (safe_mul_func_int16_t_s_s((((l_142[2][0][0] , (l_103[1][2][1] , l_25)) , 0x7BL) || l_25.f3), g_38.f2)))) || g_78[0][0][0]))) | g_95.f3)) | l_103[1][1][1].f2)), 0x4B987B17L)) | l_92) == l_144), p_3.f2))) & 0UL), 0x52L)), g_95.f3));
    return g_78[0][0][0];
}



static union U3  func_6(struct S0  p_7, int32_t  p_8, int64_t  p_9, struct S0  p_10, struct S2  p_11)
{ 
    int8_t l_46 = 0x96L;
    int32_t l_48 = 0x16A37A54L;
    struct S0 l_49 = {4UL,0L,-1L,0L};
    g_22.f1 = (safe_rshift_func_int16_t_s_u(((safe_mod_func_uint64_t_u_u((func_12(((((safe_sub_func_uint8_t_u_u(((p_10.f0 = (l_46 , ((l_46 || (+(l_48 = ((0x63E3L & l_46) > l_46)))) >= p_8))) != l_46), g_22.f3)) , p_9) <= g_22.f1) != 0x19455490L), l_49, g_39[0].f1, g_39[0].f3, l_49.f3) , g_38.f2), 0x62BFFD659CA02B23LL)) & p_10.f3), 8));
    return g_22;
}



static struct S0  func_12(int32_t  p_13, struct S0  p_14, int32_t  p_15, const uint32_t  p_16, uint16_t  p_17)
{ 
    int16_t l_34 = 0x9960L;
    uint8_t l_35 = 255UL;
    int32_t l_36 = 1L;
    int32_t l_37[4] = {0xE11F3177L,0xE11F3177L,0xE11F3177L,0xE11F3177L};
    int i;
    l_37[0] &= (l_36 = (p_13 , ((~g_22.f3) >= ((((!(safe_mod_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((safe_add_func_uint64_t_u_u(l_34, l_34)), 4)), p_14.f2))) <= l_35) || p_17) >= p_14.f3))));
    return g_38;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_22.f0, "g_22.f0", print_hash_value);
    transparent_crc(g_22.f1, "g_22.f1", print_hash_value);
    transparent_crc(g_22.f3, "g_22.f3", print_hash_value);
    transparent_crc(g_38.f0, "g_38.f0", print_hash_value);
    transparent_crc(g_38.f1, "g_38.f1", print_hash_value);
    transparent_crc(g_38.f2, "g_38.f2", print_hash_value);
    transparent_crc(g_38.f3, "g_38.f3", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_39[i].f0, "g_39[i].f0", print_hash_value);
        transparent_crc(g_39[i].f1, "g_39[i].f1", print_hash_value);
        transparent_crc(g_39[i].f2, "g_39[i].f2", print_hash_value);
        transparent_crc(g_39[i].f3, "g_39[i].f3", print_hash_value);
        transparent_crc(g_39[i].f4, "g_39[i].f4", print_hash_value);
        transparent_crc(g_39[i].f5, "g_39[i].f5", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_78[i][j][k], "g_78[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_95.f0, "g_95.f0", print_hash_value);
    transparent_crc(g_95.f1, "g_95.f1", print_hash_value);
    transparent_crc(g_95.f2, "g_95.f2", print_hash_value);
    transparent_crc(g_95.f3, "g_95.f3", print_hash_value);
    transparent_crc(g_95.f4, "g_95.f4", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_143[i], "g_143[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
