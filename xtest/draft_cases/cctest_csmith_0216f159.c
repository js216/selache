// SPDX-License-Identifier: MIT
// cctest_csmith_0216f159.c --- cctest case csmith_0216f159 (csmith seed 35058009)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xdb9632c9 */
/* @exp_ticks 0xb10 */

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

// Options:   -s 35058009 -o /home/agent1/fast_data/tmp/csmith_gen_cv2hjaqd/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int32_t  f0;
   const uint32_t  f1;
   const uint32_t  f2;
   uint8_t  f3;
   int64_t  f4;
   uint32_t  f5;
};
#pragma pack(pop)

union U1 {
   const struct S0  f0;
   const struct S0  f1;
   const uint16_t  f2;
};

union U2 {
   int16_t  f0;
   int8_t  f1;
};

union U3 {
   uint16_t  f0;
};

union U4 {
   const uint8_t  f0;
   uint32_t  f1;
   struct S0  f2;
};


static int32_t g_10 = (-2L);
static int16_t g_11 = 0L;
static int32_t g_34 = (-10L);
static uint32_t g_35 = 5UL;
static uint64_t g_48 = 1UL;
static uint64_t g_50 = 0x642D94904418F7F2LL;
static uint32_t g_53 = 0x523668F7L;
static uint8_t g_58[4] = {0UL,0UL,0UL,0UL};
static union U3 g_72[4] = {{0x9056L},{0x9056L},{0x9056L},{0x9056L}};
static struct S0 g_81 = {1L,0xBEE99B4DL,0x14858521L,0UL,-1L,0x311C0D40L};
static uint64_t g_82 = 0xE88D378B361F1687LL;
static int64_t g_102 = 0xA2347DC7AB573DB0LL;
static uint64_t g_104[5] = {18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL};
static int16_t g_111 = (-10L);
static uint32_t g_140[1] = {0x4D083314L};
static union U2 g_173[2] = {{-7L},{-7L}};
static uint32_t g_174 = 1UL;
static int8_t g_193[1][2][1] = {{{0L},{0L}}};



static uint32_t  func_1(void);
static uint32_t  func_4(uint16_t  p_5, union U3  p_6, uint16_t  p_7, union U2  p_8, int32_t  p_9);
static union U3  func_12(uint16_t  p_13, uint32_t  p_14, const int32_t  p_15, int32_t  p_16, uint32_t  p_17);
static uint8_t  func_28(const struct S0  p_29, int64_t  p_30, const uint32_t  p_31);




static uint32_t  func_1(void)
{ 
    int8_t l_18 = 0x6BL;
    uint32_t l_129 = 0xDE03748BL;
    union U2 l_130[4][1][1] = {{{{-4L}}},{{{-4L}}},{{{-4L}}},{{{-4L}}}};
    int32_t l_143 = 0L;
    int32_t l_175[5][5] = {{0L,0L,1L,0L,0L},{0xF383A4A2L,0L,0xF383A4A2L,0x5D4ADB4FL,6L},{0L,(-2L),(-2L),0L,(-2L)},{6L,0L,7L,0L,6L},{(-2L),0L,(-2L),(-2L),(-2L)}};
    int i, j, k;
    l_143 = ((safe_sub_func_uint32_t_u_u(func_4((g_11 = g_10), func_12(l_18, l_18, (((safe_mul_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_u(g_10, 2)) && g_10) , g_10), g_10)) , g_10) , l_18), g_10, l_18), l_129, l_130[0][0][0], g_81.f4), g_81.f5)) ^ 0x0E56CCD6F842C222LL);
    l_175[0][4] = ((((g_174 = ((((safe_lshift_func_uint16_t_u_s(((safe_add_func_uint32_t_u_u(((!((g_72[2].f0 = (safe_div_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((((safe_lshift_func_uint8_t_u_s(l_130[0][0][0].f1, 0)) ^ (safe_add_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((l_129 > 18446744073709551615UL), ((safe_add_func_uint32_t_u_u(((l_143 = (((((safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u((((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u((g_81.f3 &= (g_173[0] , g_10)), g_81.f1)), g_35)) <= 1UL) > g_104[4]), g_173[0].f0)), g_82)) <= l_129) || 0x12FDF6FDFC4D21CDLL) != l_143) & l_143)) ^ g_53), g_48)) ^ l_130[0][0][0].f0))), g_173[0].f1))) , 0xDDL), 6)), 7)) || l_143) < g_50) >= l_18), 0)), l_130[0][0][0].f1))) <= l_129)) , 0xDD3C1BD1L), l_130[0][0][0].f0)) >= g_140[0]), l_18)) <= 0x23L) | l_18) || (-6L))) > 8UL) >= g_11) != g_58[0]);
    for (l_129 = 0; (l_129 < 57); l_129 = safe_add_func_uint16_t_u_u(l_129, 5))
    { 
        uint32_t l_188 = 0UL;
        union U4 l_191[3] = {{3UL},{3UL},{3UL}};
        int32_t l_194 = (-3L);
        int i;
        for (g_11 = 10; (g_11 < 0); g_11 = safe_sub_func_int32_t_s_s(g_11, 2))
        { 
            uint32_t l_192 = 0x1ED449BAL;
            l_194 = ((safe_add_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u(g_173[0].f1, ((safe_mul_func_uint8_t_u_u((((safe_mul_func_int16_t_s_s((-1L), (l_188 = g_81.f0))) > ((safe_div_func_uint32_t_u_u((g_193[0][1][0] = (g_53 = ((((l_191[0] , (-3L)) == l_130[0][0][0].f1) | l_191[0].f0) < l_192))), l_191[0].f0)) > l_192)) , 1UL), l_129)) && l_191[0].f0))) > g_81.f0), g_173[0].f0)) == l_175[0][4]);
        }
        for (g_48 = 0; g_48 < 4; g_48 += 1)
        {
            union U3 tmp = {0x16BFL};
            g_72[g_48] = tmp;
        }
    }
    return g_104[0];
}



static uint32_t  func_4(uint16_t  p_5, union U3  p_6, uint16_t  p_7, union U2  p_8, int32_t  p_9)
{ 
    int64_t l_138 = 0x005B716F66F7480ELL;
    int32_t l_139 = 1L;
    l_138 |= (safe_add_func_uint64_t_u_u((safe_add_func_int16_t_s_s((g_11 = (!p_8.f1)), (safe_add_func_uint32_t_u_u(g_35, g_53)))), 0UL));
    ++g_140[0];
    return p_6.f0;
}



static union U3  func_12(uint16_t  p_13, uint32_t  p_14, const int32_t  p_15, int32_t  p_16, uint32_t  p_17)
{ 
    const struct S0 l_32 = {0xFAD0D727L,18446744073709551606UL,0x2B752BF3L,1UL,0xBD791F9E6A0122D8LL,1UL};
    int64_t l_49 = 0x164C116104DBC0BALL;
    int32_t l_62 = (-3L);
    uint32_t l_87 = 1UL;
    union U3 l_128 = {7UL};
    l_49 = ((safe_unary_minus_func_uint32_t_u((((65526UL >= g_10) > ((safe_mul_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_s(func_28(l_32, (!(g_10 && 0UL)), g_10), l_32.f0)) != p_17) || p_16), l_32.f3)) >= l_32.f2)) || 0xD89C1C50D5D742CCLL))) & g_34);
    g_50 |= 0x05F67326L;
    for (g_50 = 9; (g_50 > 24); g_50 = safe_add_func_uint8_t_u_u(g_50, 9))
    { 
        uint8_t l_63 = 1UL;
        struct S0 l_88 = {0x06B0045BL,18446744073709551615UL,0UL,0xCCL,0x27AF4644DEA1A09BLL,0UL};
        union U1 l_99 = {{5L,0x78F14D57L,0x4C63812DL,0x28L,0L,0xEF7FEE68L}};
        --g_53;
        if ((((safe_sub_func_int16_t_s_s((g_58[1] = l_32.f3), l_32.f3)) && (p_13 & (safe_div_func_int32_t_s_s(((l_62 |= (+p_14)) || l_32.f4), 0x73ECB6AEL)))) != l_63))
        { 
            for (g_53 = 0; (g_53 <= 3); g_53 += 1)
            { 
                int i;
                l_62 &= (((safe_rshift_func_uint8_t_u_u(((6UL > 0x5916L) <= ((safe_rshift_func_int8_t_s_u(5L, (safe_mod_func_int64_t_s_s((safe_sub_func_uint64_t_u_u(((g_72[2] , 5L) < g_58[g_53]), 0x91E412D46FEDEA8FLL)), g_58[g_53])))) | g_35)), g_35)) , l_32.f5) || g_53);
                p_16 |= (safe_lshift_func_int16_t_s_s(((safe_add_func_uint32_t_u_u((p_17 = (p_13 != g_58[g_53])), 2L)) & (safe_add_func_int32_t_s_s(g_72[2].f0, p_13))), g_72[2].f0));
            }
        }
        else
        { 
            int16_t l_90[3];
            int i;
            for (i = 0; i < 3; i++)
                l_90[i] = 0x59F0L;
            g_82 &= ((safe_rshift_func_uint16_t_u_s((g_72[2].f0 != (g_81 , (p_14 , (((((l_62 = (p_15 , 0L)) & p_15) && (-3L)) != 2UL) == g_81.f3)))), 7)) <= p_16);
            for (g_48 = 0; (g_48 == 44); g_48 = safe_add_func_int8_t_s_s(g_48, 1))
            { 
                uint8_t l_89 = 255UL;
                p_16 = (g_48 > (safe_add_func_int8_t_s_s(0xBCL, (l_87 | (l_62 &= (l_90[1] = (l_88 , l_89)))))));
            }
        }
        for (l_88.f5 = 0; (l_88.f5 <= 3); l_88.f5 += 1)
        { 
            int32_t l_100 = 0x22B5D766L;
            int32_t l_103 = 1L;
            int8_t l_126 = 0x6BL;
            int16_t l_127[3];
            int i;
            for (i = 0; i < 3; i++)
                l_127[i] = 1L;
            for (l_88.f4 = 3; (l_88.f4 >= 0); l_88.f4 -= 1)
            { 
                int32_t l_101 = 0x8EE3BABBL;
                int i;
                l_101 = (((safe_mod_func_int16_t_s_s((g_58[l_88.f5] & ((safe_rshift_func_int8_t_s_u((1UL < (p_15 || (safe_mod_func_int8_t_s_s(((safe_div_func_int64_t_s_s(((l_99 , l_100) && 255UL), l_32.f4)) >= 0x0E5BL), g_72[2].f0)))), l_32.f3)) >= 0UL)), 65528UL)) != g_53) ^ 0x29L);
                ++g_104[3];
                l_103 = (safe_mul_func_int8_t_s_s(g_82, (safe_sub_func_int16_t_s_s((l_99.f0 , l_103), (g_58[3] ^ l_32.f1)))));
            }
            for (g_81.f3 = 0; (g_81.f3 <= 3); g_81.f3 += 1)
            { 
                int32_t l_118 = 0xDC8FC35AL;
                int i;
                g_111 ^= g_58[g_81.f3];
                if (g_81.f3)
                    break;
                l_118 |= ((l_62 = ((safe_mod_func_int64_t_s_s(((0UL && (p_13 = (g_72[2].f0 > (safe_mul_func_int16_t_s_s((safe_div_func_int16_t_s_s((l_103 &= g_35), g_81.f0)), g_34))))) > l_99.f1.f1), p_15)) > p_16)) , l_88.f5);
            }
            p_16 = (safe_mod_func_uint64_t_u_u((~(p_16 < ((safe_add_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((((l_126 > 255UL) >= ((0x0C50EEEEL & l_100) <= g_34)) >= p_16) && l_32.f5), l_127[1])), g_81.f4)) && l_32.f2))), p_16));
        }
    }
    return l_128;
}



static uint8_t  func_28(const struct S0  p_29, int64_t  p_30, const uint32_t  p_31)
{ 
    int8_t l_40 = 0L;
    int32_t l_47 = 0xEF4FC6A3L;
    g_35++;
    g_48 &= ((safe_sub_func_uint8_t_u_u(l_40, (l_40 & (p_29.f2 > (safe_rshift_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s(((safe_lshift_func_uint16_t_u_u((4294967295UL != 1UL), 2)) | l_47), 0)) >= g_10), l_47)))))) && 0UL);
    return p_29.f4;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_58[i], "g_58[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_72[i].f0, "g_72[i].f0", print_hash_value);

    }
    transparent_crc(g_81.f0, "g_81.f0", print_hash_value);
    transparent_crc(g_81.f1, "g_81.f1", print_hash_value);
    transparent_crc(g_81.f2, "g_81.f2", print_hash_value);
    transparent_crc(g_81.f3, "g_81.f3", print_hash_value);
    transparent_crc(g_81.f4, "g_81.f4", print_hash_value);
    transparent_crc(g_81.f5, "g_81.f5", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_104[i], "g_104[i]", print_hash_value);

    }
    transparent_crc(g_111, "g_111", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_140[i], "g_140[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_173[i].f0, "g_173[i].f0", print_hash_value);
        transparent_crc(g_173[i].f1, "g_173[i].f1", print_hash_value);

    }
    transparent_crc(g_174, "g_174", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_193[i][j][k], "g_193[i][j][k]", print_hash_value);

            }
        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
