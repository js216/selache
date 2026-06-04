// SPDX-License-Identifier: MIT
// cctest_csmith_8d6daeb4.c --- cctest case csmith_8d6daeb4 (csmith seed 2372775604)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xe5ee6c80 */
/* @exp_ticks 0x741 */

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

// Options:   -s 2372775604 -o /home/agent1/fast_data/tmp/csmith_gen_lydz8djn/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint64_t  f0;
   uint64_t  f1;
   const uint32_t  f2;
   uint32_t  f3;
   int32_t  f4;
};
#pragma pack(pop)

union U1 {
   const uint32_t  f0;
   uint16_t  f1;
   uint32_t  f2;
   uint64_t  f3;
};

union U2 {
   uint64_t  f0;
   int32_t  f1;
   int64_t  f2;
};


static union U2 g_8 = {0xA266D210EC3203BDLL};
static int16_t g_26 = 0L;
static int32_t g_32 = 0L;
static uint16_t g_33 = 0xDB63L;
static uint64_t g_58[2][4][3] = {{{18446744073709551614UL,0x36EFE450DE0B5DAELL,18446744073709551614UL},{18446744073709551614UL,18446744073709551615UL,0xB8438CF8356F5961LL},{18446744073709551614UL,5UL,18446744073709551612UL},{18446744073709551614UL,0x36EFE450DE0B5DAELL,18446744073709551614UL}},{{18446744073709551614UL,18446744073709551615UL,0xB8438CF8356F5961LL},{18446744073709551614UL,5UL,18446744073709551612UL},{18446744073709551614UL,0x36EFE450DE0B5DAELL,18446744073709551614UL},{18446744073709551614UL,18446744073709551615UL,0xB8438CF8356F5961LL}}};
static int32_t g_65 = 1L;
static int16_t g_68[2][3] = {{1L,1L,1L},{1L,1L,1L}};
static uint32_t g_71 = 0xF1499195L;
static uint8_t g_74[3] = {0xDFL,0xDFL,0xDFL};
static uint32_t g_80 = 0xFED5CAB5L;
static const union U1 g_104 = {0x3782E33FL};
static uint16_t g_149 = 1UL;



static uint32_t  func_1(void);
static struct S0  func_4(union U2  p_5, int32_t  p_6, union U2  p_7);
static int64_t  func_16(uint32_t  p_17);
static int32_t  func_19(int32_t  p_20, struct S0  p_21, int64_t  p_22);




static uint32_t  func_1(void)
{ 
    uint32_t l_9 = 0x531D14CDL;
    g_149 = (((safe_mul_func_uint16_t_u_u((func_4(g_8, l_9, g_8) , g_68[0][2]), l_9)) >= 0xF7L) || g_71);
    return l_9;
}



static struct S0  func_4(union U2  p_5, int32_t  p_6, union U2  p_7)
{ 
    uint8_t l_18[1];
    int32_t l_75 = 0x5CB2EA73L;
    int32_t l_76 = 0xBD1CB9B5L;
    int32_t l_77 = 0x9369D405L;
    const uint32_t l_129 = 0x7FEC2A52L;
    struct S0 l_148 = {18446744073709551615UL,0x78A07D3DD64F9C2CLL,0x3F04C9F3L,18446744073709551608UL,0xA1CDE342L};
    int i;
    for (i = 0; i < 1; i++)
        l_18[i] = 0x51L;
    l_77 ^= (safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((((l_76 = (((safe_sub_func_uint64_t_u_u(2UL, ((l_75 &= (func_16(l_18[0]) <= (g_74[2] &= (p_7.f0 != l_18[0])))) != (-6L)))) >= l_18[0]) | p_5.f2)) > l_18[0]) < p_7.f2), 6)), l_18[0]));
    if (((l_76 &= (safe_mul_func_int8_t_s_s((p_5.f2 > (p_7.f0 > 0x8105A18AL)), ((2L > g_80) , 0x32L)))) , 0x9DA46A13L))
    { 
        uint32_t l_97 = 0xDEE43C49L;
        int32_t l_111[4] = {0xA1D3BC2FL,0xA1D3BC2FL,0xA1D3BC2FL,0xA1D3BC2FL};
        int32_t l_112 = 1L;
        struct S0 l_113 = {0UL,0xD5450317E307078ALL,0x4A5CD318L,0UL,2L};
        int i;
        for (p_7.f2 = (-19); (p_7.f2 >= (-6)); ++p_7.f2)
        { 
            uint32_t l_83 = 18446744073709551614UL;
            int32_t l_92 = 0L;
            union U2 l_93 = {9UL};
            uint64_t l_94 = 1UL;
            g_8.f1 = ((g_33 != l_83) || (((safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(((0xEBADL <= ((safe_sub_func_int64_t_s_s((safe_lshift_func_int8_t_s_u((l_92 = (p_7.f1 > 0x85E7L)), 2)), g_33)) > 9UL)) , l_18[0]), 1)), l_83)) , l_93) , l_94));
            if (g_65)
                break;
        }
        if ((safe_add_func_uint8_t_u_u(l_97, (safe_mul_func_uint8_t_u_u(((l_18[0] && (-1L)) & (p_7.f0 == 0L)), 0xD8L)))))
        { 
            uint32_t l_110 = 0xD5AEA95DL;
            l_77 |= ((safe_sub_func_int64_t_s_s((p_5.f2 = 0x811D2751B8D994F8LL), (safe_sub_func_int16_t_s_s((g_104 , (((safe_mul_func_uint8_t_u_u((((+(((l_112 ^= ((safe_rshift_func_uint8_t_u_s(((l_111[2] &= l_110) && ((1UL ^ 1UL) && g_80)), 5)) >= 0xD339L)) <= p_6) , 0x928101EF9C6BEA79LL)) >= 0xC9B2L) == p_7.f2), p_7.f2)) , l_18[0]) ^ 0x607BL)), p_6)))) ^ l_97);
            return l_113;
        }
        else
        { 
            union U1 l_114 = {0xCE8A8DCBL};
            int32_t l_117 = 0x24D48F7CL;
            g_65 = (g_104.f2 || (l_114 , ((safe_rshift_func_int16_t_s_s(((l_75 |= 0xD6L) | (p_6 > l_111[2])), p_7.f0)) , p_5.f1)));
            g_65 |= ((l_117 = g_80) <= l_77);
            l_76 = (p_5.f1 = (l_117 &= (((safe_mul_func_int8_t_s_s((((+(safe_mul_func_int16_t_s_s(g_68[0][2], ((((((safe_div_func_int8_t_s_s(((safe_add_func_uint32_t_u_u((((g_32 < (l_111[2] = (safe_div_func_int8_t_s_s(l_18[0], p_7.f2)))) ^ l_113.f1) <= p_7.f0), p_7.f2)) || l_129), l_114.f2)) && g_104.f2) != l_113.f4) != g_65) , p_6) <= 0UL)))) && g_80) <= 0xCBF15030L), (-1L))) < g_74[2]) == g_104.f2)));
        }
        for (l_75 = 0; l_75 < 2; l_75 += 1)
        {
            for (g_32 = 0; g_32 < 3; g_32 += 1)
            {
                g_68[l_75][g_32] = 0L;
            }
        }
    }
    else
    { 
        int32_t l_135 = (-1L);
        if (((!(6L >= (((g_80++) , ((g_74[2] = (g_8.f2 & (l_76 = (p_5.f1 > (safe_sub_func_uint32_t_u_u((l_135 ^ p_6), 0x5E4B6027L)))))) & p_7.f0)) && l_135))) != g_8.f1))
        { 
            int64_t l_141 = 1L;
            int32_t l_142 = 9L;
            g_8.f1 ^= 0x662F39AAL;
            for (g_33 = 0; (g_33 >= 2); g_33++)
            { 
                uint32_t l_140 = 1UL;
                l_135 = (((((((0x945EL <= (p_6 & (safe_sub_func_int64_t_s_s(l_140, (((p_5.f2 &= (((l_141 = g_80) || p_7.f2) <= p_7.f1)) <= g_74[0]) & l_140))))) < l_75) || (-2L)) && g_68[0][1]) <= p_7.f2) && l_18[0]) , 0x4D06AD95L);
                l_142 = 0L;
            }
        }
        else
        { 
            l_135 ^= ((l_129 ^ ((safe_unary_minus_func_uint16_t_u(l_77)) == (g_8.f2 = (g_104.f1 >= g_71)))) <= 0xC72A9CDDL);
        }
    }
    return l_148;
}



static int64_t  func_16(uint32_t  p_17)
{ 
    const uint8_t l_23 = 0x7DL;
    int32_t l_27 = 2L;
    struct S0 l_28[1][1] = {{{18446744073709551615UL,7UL,0x53D97512L,0x020F620AL,0x418EB0BAL}}};
    int32_t l_51 = 7L;
    uint32_t l_55 = 2UL;
    int i, j;
    g_8.f1 = func_19((l_23 , (((g_8.f2 <= (l_27 = ((((safe_add_func_int32_t_s_s(3L, (g_26 &= l_23))) || p_17) | g_8.f1) && l_23))) == p_17) & l_23)), l_28[0][0], g_8.f1);
    for (g_8.f2 = 8; (g_8.f2 >= 17); g_8.f2 = safe_add_func_uint64_t_u_u(g_8.f2, 7))
    { 
        int32_t l_54 = 0x6B3FA45FL;
        int32_t l_67[5][5] = {{(-4L),1L,1L,(-4L),1L},{0xF7313610L,0L,0xDA12577EL,0xD0A3AFD5L,4L},{3L,1L,3L,3L,1L},{4L,(-1L),0xDA12577EL,0xD0A3AFD5L,0xDA12577EL},{1L,1L,(-4L),1L,1L}};
        int i, j;
        for (l_27 = (-5); (l_27 <= (-2)); l_27 = safe_add_func_uint16_t_u_u(l_27, 8))
        { 
            l_51 = p_17;
            if (p_17)
                continue;
        }
        for (l_27 = (-27); (l_27 != 17); ++l_27)
        { 
            int32_t l_69[4] = {0xB4242223L,0xB4242223L,0xB4242223L,0xB4242223L};
            int i;
            l_55++;
            for (l_55 = 0; (l_55 <= 1); l_55 += 1)
            { 
                int16_t l_66 = 0x5E77L;
                int32_t l_70 = 0xB6057BADL;
                l_67[4][3] = (((((p_17 < ((safe_sub_func_int8_t_s_s((safe_unary_minus_func_int32_t_s((safe_rshift_func_int8_t_s_s(((5L && (~(g_65 = (g_8 , 0xC8L)))) != g_58[1][3][0]), 7)))), (-1L))) == p_17)) >= g_26) > p_17) | l_66) != g_32);
                if (l_28[0][0].f4)
                    break;
                --g_71;
            }
            if (l_67[1][4])
                break;
        }
    }
    l_27 = l_51;
    return g_8.f0;
}



static int32_t  func_19(int32_t  p_20, struct S0  p_21, int64_t  p_22)
{ 
    int32_t l_31 = 1L;
    int32_t l_45 = 4L;
    int32_t l_46 = 0xA8C97D73L;
    l_46 ^= ((safe_mul_func_uint16_t_u_u((l_31 &= (++g_33)), (((((safe_add_func_uint64_t_u_u((p_21.f4 == ((safe_unary_minus_func_uint8_t_u(((p_21.f2 != (((safe_add_func_int64_t_s_s((((g_26 > (safe_add_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(0x61L, g_8.f1)), 9UL))) || l_45) , g_26), 2L)) > 0x0B09EDB9CC5119B5LL) || l_45)) && 1L))) != p_21.f1)), 0x43DA7D8E2DC6606ALL)) != p_22) == g_32) < 0xC853L) > 0L))) & p_21.f1);
    l_46 = 9L;
    return g_32;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8.f1, "g_8.f1", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_58[i][j][k], "g_58[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_65, "g_65", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_68[i][j], "g_68[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_71, "g_71", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_74[i], "g_74[i]", print_hash_value);

    }
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_104.f0, "g_104.f0", print_hash_value);
    transparent_crc(g_104.f1, "g_104.f1", print_hash_value);
    transparent_crc(g_104.f2, "g_104.f2", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
