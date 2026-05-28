// SPDX-License-Identifier: MIT
// cctest_csmith_6922cc84.c --- cctest case csmith_6922cc84 (csmith seed 1763888260)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xd862bfd0 */
/* @exp_ticks 0x5ebe */

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

// Options:   -s 1763888260 -o /tmp/csmith_gen_k1eipq86/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const uint8_t  f0;
   int8_t  f1;
   uint8_t  f2;
};
#pragma pack(pop)

struct S1 {
   const int8_t  f0;
   uint16_t  f1;
   int8_t  f2;
   uint16_t  f3;
   int64_t  f4;
   int32_t  f5;
   uint32_t  f6;
};

union U2 {
   uint8_t  f0;
   int32_t  f1;
   const int32_t  f2;
   int32_t  f3;
};

union U3 {
   uint8_t  f0;
   struct S0  f1;
   uint16_t  f2;
   int32_t  f3;
   int64_t  f4;
};


static uint64_t g_8 = 0xFA831EB2391CB4E7LL;
static int32_t g_12 = 0xC45C1D10L;
static uint32_t g_21 = 0x1F6F49C2L;
static struct S0 g_42[4] = {{255UL,1L,0UL},{255UL,1L,0UL},{255UL,1L,0UL},{255UL,1L,0UL}};
static struct S0 *g_48 = &g_42[3];
static struct S0 **g_47 = &g_48;
static uint64_t g_60 = 1UL;
static uint32_t *g_75 = &g_21;
static uint32_t **g_74[7] = {&g_75,&g_75,&g_75,&g_75,&g_75,&g_75,&g_75};
static union U3 g_88[3] = {{0x65L},{0x65L},{0x65L}};
static union U3 g_91 = {0x37L};
static union U3 *g_90[1][4] = {{&g_91,&g_91,&g_91,&g_91}};
static union U3 g_93[3] = {{0x66L},{0x66L},{0x66L}};
static union U3 *g_92 = &g_93[1];
static struct S1 g_105 = {0x3EL,5UL,0x62L,0x4A88L,0xBFF34F21D6FFC8DFLL,0x1A916490L,1UL};
static struct S0 g_107 = {1UL,1L,0x8EL};
static int16_t g_110[6][6] = {{0x8DF3L,0xCACAL,0x2D3BL,0xCACAL,0x8DF3L,0x8DF3L},{0xA5AFL,0xCACAL,0xCACAL,0xA5AFL,1L,0xA5AFL},{0xA5AFL,1L,0xA5AFL,0xCACAL,0xCACAL,0xA5AFL},{0x8DF3L,0x8DF3L,0xCACAL,0x2D3BL,0xCACAL,0x8DF3L},{0xCACAL,0x8DF3L,1L,1L,0x8DF3L,0xA5AFL},{0xCACAL,0xA5AFL,1L,0xA5AFL,0xCACAL,0xCACAL}};
static struct S0 ***g_118 = &g_47;
static uint8_t g_122 = 0xFFL;
static int8_t g_141[2] = {0L,0L};
static uint32_t g_142 = 0x8034325EL;
static uint32_t g_145 = 0x3D9D2973L;
static uint32_t g_168 = 1UL;
static uint32_t g_169 = 3UL;
static union U3 g_171 = {251UL};
static union U3 ***g_174[3] = {(void*)0,(void*)0,(void*)0};
static union U2 g_177 = {5UL};
static union U2 *g_176[7][2][6] = {{{&g_177,&g_177,&g_177,&g_177,&g_177,&g_177},{&g_177,&g_177,&g_177,&g_177,(void*)0,&g_177}},{{&g_177,&g_177,&g_177,&g_177,&g_177,&g_177},{&g_177,&g_177,&g_177,&g_177,&g_177,&g_177}},{{&g_177,&g_177,&g_177,&g_177,&g_177,&g_177},{&g_177,(void*)0,&g_177,&g_177,&g_177,&g_177}},{{&g_177,(void*)0,&g_177,&g_177,&g_177,&g_177},{&g_177,&g_177,&g_177,&g_177,&g_177,(void*)0}},{{&g_177,&g_177,(void*)0,&g_177,(void*)0,&g_177},{&g_177,&g_177,&g_177,&g_177,&g_177,&g_177}},{{&g_177,&g_177,&g_177,&g_177,&g_177,&g_177},{&g_177,&g_177,&g_177,(void*)0,(void*)0,&g_177}},{{&g_177,&g_177,&g_177,&g_177,&g_177,&g_177},{&g_177,&g_177,(void*)0,&g_177,&g_177,&g_177}}};
static union U2 g_180 = {0x1AL};
static int64_t g_214 = 0xC0104BDE13CD0DB1LL;
static struct S1 g_262 = {0x64L,0x4040L,0L,0x8090L,0xA3EDBD5586F38ED0LL,7L,4294967287UL};
static uint64_t g_267[2][5] = {{0x0C31A17AF234C5E8LL,0xFCF56D30B18F1BF9LL,0xFCF56D30B18F1BF9LL,0x0C31A17AF234C5E8LL,0xFCF56D30B18F1BF9LL},{0x0C31A17AF234C5E8LL,0x0C31A17AF234C5E8LL,18446744073709551615UL,0x0C31A17AF234C5E8LL,0x0C31A17AF234C5E8LL}};
static uint64_t *g_277 = &g_267[1][1];
static uint64_t **g_276[4][5][6] = {{{&g_277,&g_277,&g_277,&g_277,&g_277,&g_277},{&g_277,&g_277,&g_277,&g_277,&g_277,&g_277},{&g_277,&g_277,&g_277,&g_277,&g_277,&g_277},{&g_277,&g_277,&g_277,&g_277,&g_277,&g_277},{&g_277,&g_277,&g_277,&g_277,&g_277,&g_277}},{{&g_277,&g_277,&g_277,&g_277,&g_277,&g_277},{&g_277,&g_277,&g_277,&g_277,&g_277,&g_277},{&g_277,&g_277,&g_277,&g_277,&g_277,&g_277},{&g_277,&g_277,&g_277,&g_277,&g_277,&g_277},{&g_277,&g_277,&g_277,&g_277,&g_277,&g_277}},{{&g_277,&g_277,&g_277,&g_277,&g_277,&g_277},{&g_277,&g_277,&g_277,&g_277,&g_277,&g_277},{&g_277,&g_277,&g_277,&g_277,&g_277,&g_277},{&g_277,&g_277,&g_277,&g_277,&g_277,&g_277},{&g_277,&g_277,&g_277,&g_277,&g_277,&g_277}},{{&g_277,&g_277,&g_277,&g_277,&g_277,&g_277},{&g_277,&g_277,&g_277,&g_277,&g_277,&g_277},{&g_277,&g_277,&g_277,&g_277,&g_277,&g_277},{&g_277,&g_277,&g_277,&g_277,&g_277,&g_277},{&g_277,&g_277,&g_277,&g_277,&g_277,&g_277}}};
static uint64_t **g_279 = &g_277;
static struct S1 g_290 = {0xD4L,0UL,0xF7L,0x41CAL,-1L,0x2DBF7B13L,0x3004D836L};
static int16_t g_298 = 1L;
static union U3 g_323 = {0x51L};
static int32_t g_357 = 0xBCDBA9DBL;
static uint8_t g_358[5] = {0xB4L,0xB4L,0xB4L,0xB4L,0xB4L};
static uint32_t g_456 = 9UL;
static uint8_t *g_535 = &g_88[2].f0;
static const int32_t *g_591[5] = {&g_88[2].f3,&g_88[2].f3,&g_88[2].f3,&g_88[2].f3,&g_88[2].f3};
static int8_t g_649[4][5] = {{(-4L),(-4L),(-4L),(-4L),(-4L)},{0x9FL,0x75L,0x9FL,0x75L,0x9FL},{(-4L),(-4L),(-4L),(-4L),(-4L)},{0x9FL,0x75L,0x9FL,0x75L,0x9FL}};



static int16_t  func_1(void);
static int64_t  func_2(int32_t  p_3, int32_t  p_4, uint32_t  p_5, int32_t  p_6, const union U2  p_7);
static uint16_t  func_9(int64_t  p_10);
static struct S0 * func_13(int32_t  p_14, uint8_t  p_15, uint32_t  p_16);
static union U3 * const  func_25(uint32_t * p_26, union U3 * p_27, struct S0 * p_28);
static uint32_t * func_29(uint8_t  p_30, int32_t  p_31, union U2  p_32, struct S0 * p_33, const uint8_t  p_34);
static struct S0 ** func_45(struct S0 ** p_46);
static struct S0  func_63(union U2  p_64, int64_t  p_65, int8_t  p_66, uint32_t ** p_67);




static int16_t  func_1(void)
{ 
    int64_t *l_661 = (void*)0;
    int64_t *l_662 = &g_290.f4;
    int32_t l_663 = (-4L);
    const union U2 l_664 = {0x69L};
    int32_t *l_666 = &l_663;
    (*l_666) = (((g_180.f1 = ((func_2(g_8, ((func_9(g_8) < (safe_mul_func_uint16_t_u_u(((g_105.f6 | ((*l_662) = ((g_290.f2 >= (safe_lshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u((&g_298 != &g_298), 0x564FL)), 4))) >= g_262.f2))) , g_649[3][0]), l_663))) , 0x93CA6FA7L), g_105.f5, g_649[3][4], l_664) , g_290.f0) & l_664.f0)) , g_262) , l_664.f0);
    return g_91.f1.f2;
}



static int64_t  func_2(int32_t  p_3, int32_t  p_4, uint32_t  p_5, int32_t  p_6, const union U2  p_7)
{ 
    int16_t l_665 = 0x1F0DL;
    return l_665;
}



static uint16_t  func_9(int64_t  p_10)
{ 
    int32_t *l_11 = &g_12;
    uint32_t *l_19 = (void*)0;
    uint32_t *l_20 = &g_21;
    uint32_t l_24[5] = {0x8EB16E2CL,0x8EB16E2CL,0x8EB16E2CL,0x8EB16E2CL,0x8EB16E2CL};
    struct S0 **l_623 = &g_48;
    int32_t l_643 = 0x1CF7E96CL;
    int32_t l_644 = 0L;
    int32_t l_645 = 5L;
    int32_t l_646 = (-10L);
    int32_t l_647 = 0x2196A110L;
    int32_t l_648[4];
    int i;
    for (i = 0; i < 4; i++)
        l_648[i] = 0x0576B422L;
    (*l_11) ^= p_10;
    (*l_623) = func_13((l_24[1] = ((safe_lshift_func_uint8_t_u_u(((void*)0 == &g_12), (((*l_20) |= 0x8B166C19L) || (((safe_mul_func_uint16_t_u_u((p_10 | g_21), g_8)) == 1UL) > g_21)))) , (*l_11))), (*l_11), p_10);
    for (g_171.f1.f1 = 22; (g_171.f1.f1 >= (-28)); g_171.f1.f1 = safe_sub_func_uint16_t_u_u(g_171.f1.f1, 6))
    { 
        uint32_t ***l_632[2][1][3] = {{{&g_74[5],&g_74[5],&g_74[5]}},{{&g_74[0],&g_74[0],&g_74[0]}}};
        int32_t l_633 = 1L;
        uint16_t *l_634 = (void*)0;
        int32_t *l_635 = &g_91.f3;
        int32_t *l_636 = &g_323.f3;
        int32_t *l_637 = &g_88[2].f3;
        int32_t *l_638 = &g_12;
        int32_t *l_639 = &g_88[2].f3;
        int32_t *l_640 = &g_177.f3;
        int32_t *l_641 = &g_93[1].f3;
        int32_t *l_642[6][6] = {{(void*)0,(void*)0,&g_171.f3,&g_12,&g_91.f3,&g_12},{&l_633,(void*)0,&l_633,&g_171.f3,&g_171.f3,&g_171.f3},{(void*)0,&l_633,&l_633,(void*)0,(void*)0,&g_12},{&g_12,(void*)0,&g_171.f3,(void*)0,&g_12,&g_171.f3},{(void*)0,&g_12,&g_171.f3,&g_171.f3,&g_12,(void*)0},{&l_633,(void*)0,(void*)0,&g_12,(void*)0,(void*)0}};
        uint32_t l_650 = 4294967288UL;
        int i, j, k;
        (*l_635) ^= (safe_mul_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((g_168 >= (safe_mul_func_int8_t_s_s((((*l_11) > (l_632[1][0][1] == &g_74[2])) || p_10), l_633))) != (g_323.f2 = 0x91F1L)), (*l_11))), l_633));
        l_650++;
    }
    return (*l_11);
}



static struct S0 * func_13(int32_t  p_14, uint8_t  p_15, uint32_t  p_16)
{ 
    uint32_t *l_38 = (void*)0;
    uint32_t **l_37 = &l_38;
    int32_t l_39 = (-1L);
    union U2 l_40 = {0x82L};
    struct S0 *l_41 = &g_42[0];
    struct S0 *l_44 = &g_42[2];
    struct S0 **l_43 = &l_44;
    uint32_t **l_596 = &g_75;
    uint32_t **l_597 = (void*)0;
    uint32_t *l_599 = (void*)0;
    uint32_t **l_598 = &l_599;
    union U3 *l_600 = &g_88[2];
    struct S0 *l_601 = &g_42[0];
    union U3 **l_605 = (void*)0;
    union U3 **l_606 = &g_92;
    uint64_t ***l_618[4];
    uint8_t l_619 = 255UL;
    int16_t *l_620 = (void*)0;
    int16_t *l_621[2];
    int32_t *l_622 = &g_91.f3;
    int i;
    for (i = 0; i < 4; i++)
        l_618[i] = &g_276[3][2][4];
    for (i = 0; i < 2; i++)
        l_621[i] = &g_110[4][5];
    (*l_606) = func_25(((*l_598) = ((*l_596) = ((*l_37) = func_29((safe_add_func_int64_t_s_s(g_21, (p_16 || (((*l_37) = (void*)0) == &g_21)))), l_39, l_40, ((*l_43) = (l_41 = (void*)0)), l_40.f0)))), l_600, l_601);
    (*l_622) ^= (((g_110[0][5] = ((*g_535) && (safe_mod_func_uint32_t_u_u((+((safe_mul_func_int8_t_s_s(0x9FL, (safe_mod_func_uint64_t_u_u(((0x2EBFL <= 0x8DB4L) | l_40.f0), (safe_mul_func_uint16_t_u_u(g_122, ((safe_mod_func_int64_t_s_s((g_262.f4 &= (l_619 = (l_618[2] == l_618[1]))), 4UL)) == g_262.f0))))))) && 0xBE17L)), (-10L))))) & g_262.f3) && (-2L));
    return (*g_47);
}



static union U3 * const  func_25(uint32_t * p_26, union U3 * p_27, struct S0 * p_28)
{ 
    int32_t *l_603 = &g_177.f3;
    int32_t **l_602[2][5][5] = {{{(void*)0,&l_603,&l_603,&l_603,&l_603},{&l_603,(void*)0,&l_603,&l_603,&l_603},{(void*)0,&l_603,&l_603,&l_603,(void*)0},{&l_603,&l_603,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&l_603,(void*)0,&l_603}},{{&l_603,&l_603,&l_603,&l_603,(void*)0},{&l_603,(void*)0,&l_603,&l_603,(void*)0},{(void*)0,&l_603,&l_603,&l_603,&l_603},{&l_603,(void*)0,&l_603,&l_603,&l_603},{(void*)0,&l_603,&l_603,&l_603,(void*)0}}};
    union U3 * const l_604 = (void*)0;
    int i, j, k;
    g_591[2] = (void*)0;
    return l_604;
}



static uint32_t * func_29(uint8_t  p_30, int32_t  p_31, union U2  p_32, struct S0 * p_33, const uint8_t  p_34)
{ 
    struct S0 ***l_458[7][5][7] = {{{&g_47,&g_47,(void*)0,&g_47,&g_47,&g_47,&g_47},{&g_47,&g_47,&g_47,&g_47,&g_47,&g_47,&g_47},{&g_47,&g_47,&g_47,&g_47,&g_47,&g_47,&g_47},{&g_47,(void*)0,&g_47,&g_47,&g_47,&g_47,&g_47},{(void*)0,(void*)0,&g_47,&g_47,&g_47,&g_47,&g_47}},{{&g_47,&g_47,&g_47,&g_47,&g_47,&g_47,(void*)0},{&g_47,(void*)0,&g_47,&g_47,&g_47,&g_47,(void*)0},{&g_47,&g_47,&g_47,&g_47,&g_47,&g_47,&g_47},{&g_47,&g_47,&g_47,(void*)0,&g_47,&g_47,(void*)0},{&g_47,&g_47,&g_47,&g_47,&g_47,&g_47,&g_47}},{{(void*)0,&g_47,&g_47,&g_47,&g_47,&g_47,&g_47},{&g_47,&g_47,&g_47,&g_47,&g_47,&g_47,&g_47},{&g_47,(void*)0,&g_47,&g_47,&g_47,&g_47,&g_47},{&g_47,&g_47,&g_47,&g_47,&g_47,&g_47,&g_47},{&g_47,&g_47,&g_47,&g_47,&g_47,&g_47,&g_47}},{{&g_47,&g_47,&g_47,&g_47,&g_47,&g_47,&g_47},{&g_47,(void*)0,&g_47,(void*)0,&g_47,(void*)0,&g_47},{(void*)0,&g_47,&g_47,&g_47,&g_47,&g_47,&g_47},{&g_47,&g_47,&g_47,&g_47,&g_47,&g_47,&g_47},{&g_47,&g_47,&g_47,&g_47,(void*)0,(void*)0,&g_47}},{{(void*)0,&g_47,&g_47,(void*)0,&g_47,&g_47,&g_47},{(void*)0,&g_47,&g_47,(void*)0,&g_47,&g_47,&g_47},{(void*)0,&g_47,(void*)0,&g_47,&g_47,&g_47,&g_47},{&g_47,&g_47,&g_47,&g_47,&g_47,&g_47,&g_47},{&g_47,&g_47,&g_47,&g_47,&g_47,&g_47,&g_47}},{{&g_47,&g_47,&g_47,&g_47,&g_47,&g_47,&g_47},{&g_47,&g_47,&g_47,&g_47,&g_47,&g_47,(void*)0},{(void*)0,&g_47,&g_47,&g_47,&g_47,&g_47,&g_47},{&g_47,&g_47,&g_47,&g_47,&g_47,&g_47,(void*)0},{(void*)0,&g_47,&g_47,(void*)0,&g_47,&g_47,(void*)0}},{{&g_47,&g_47,(void*)0,&g_47,&g_47,&g_47,(void*)0},{&g_47,&g_47,&g_47,&g_47,&g_47,(void*)0,&g_47},{&g_47,&g_47,&g_47,&g_47,&g_47,&g_47,&g_47},{&g_47,&g_47,(void*)0,&g_47,(void*)0,&g_47,&g_47},{&g_47,&g_47,&g_47,&g_47,&g_47,&g_47,&g_47}}};
    union U3 *l_469 = &g_91;
    int32_t l_474[1][7][5];
    uint16_t *l_507[3];
    uint16_t **l_506 = &l_507[1];
    const int8_t l_514[4] = {0xF1L,0xF1L,0xF1L,0xF1L};
    int32_t l_560 = 0xD743FF64L;
    const int32_t * const l_576[1][4] = {{&l_474[0][4][1],&l_474[0][4][1],&l_474[0][4][1],&l_474[0][4][1]}};
    uint32_t *l_592 = &g_142;
    int32_t *l_593 = &g_323.f3;
    int32_t *l_594[6] = {&g_91.f3,&g_12,&g_12,&g_91.f3,&g_12,&g_12};
    uint32_t *l_595 = &g_290.f6;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 5; k++)
                l_474[i][j][k] = (-1L);
        }
    }
    for (i = 0; i < 3; i++)
        l_507[i] = &g_171.f2;
    g_47 = func_45(g_47);
    for (g_91.f1.f1 = 0; (g_91.f1.f1 == 27); g_91.f1.f1++)
    { 
        const uint16_t *l_464 = &g_290.f1;
        const uint16_t **l_463 = &l_464;
        const int32_t l_471 = 0x74B907FBL;
        int32_t *l_472 = &g_88[2].f3;
        int32_t l_473 = 0x9AE890F3L;
        uint64_t **l_485 = &g_277;
        struct S0 l_486 = {0x22L,0x9AL,0UL};
        union U3 ****l_512 = &g_174[0];
        const uint8_t l_558 = 0xEEL;
        uint8_t **l_562[7][6] = {{&g_535,&g_535,&g_535,(void*)0,(void*)0,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,(void*)0},{&g_535,(void*)0,&g_535,&g_535,(void*)0,&g_535},{&g_535,&g_535,&g_535,(void*)0,&g_535,(void*)0},{&g_535,(void*)0,&g_535,&g_535,&g_535,&g_535},{&g_535,&g_535,&g_535,&g_535,&g_535,(void*)0},{&g_535,(void*)0,&g_535,(void*)0,&g_535,&g_535}};
        int i, j;
        for (p_32.f0 = 0; (p_32.f0 <= 16); p_32.f0++)
        { 
            const uint16_t ***l_465 = &l_463;
            uint64_t ****l_466 = (void*)0;
            int32_t *l_467 = (void*)0;
            int32_t *l_468 = &g_180.f3;
            union U3 *l_470 = (void*)0;
            (*l_465) = l_463;
            (*l_468) = (l_466 == (void*)0);
            l_470 = l_469;
        }
        l_473 ^= l_471;
    }
    g_91.f3 ^= 0xD5417663L;
    return l_595;
}



static struct S0 ** func_45(struct S0 ** p_46)
{ 
    int8_t l_56 = 0xCEL;
    uint64_t *l_59 = &g_60;
    union U2 l_68 = {0xC2L};
    int32_t *l_72[6][6] = {{(void*)0,&g_12,&g_12,&g_12,&g_12,&g_12},{&g_12,&g_12,&g_12,(void*)0,&g_12,(void*)0},{&g_12,&g_12,&g_12,&g_12,&g_12,&g_12},{&g_12,&g_12,(void*)0,&g_12,(void*)0,&g_12},{&g_12,(void*)0,&g_12,&g_12,&g_12,&g_12},{&g_12,&g_12,&g_12,&g_12,(void*)0,&g_12}};
    uint32_t l_73 = 6UL;
    union U3 l_451 = {0xC5L};
    int32_t l_452[6] = {(-6L),(-6L),(-6L),(-6L),(-6L),(-6L)};
    uint8_t *l_453[2][7] = {{(void*)0,&g_88[2].f0,&g_93[1].f0,&g_122,&g_93[1].f0,&g_88[2].f0,(void*)0},{(void*)0,&g_88[2].f0,&g_93[1].f0,&g_122,&g_93[1].f0,&g_88[2].f0,(void*)0}};
    int32_t l_454[1][7][6] = {{{(-8L),1L,0L,0L,9L,(-1L)},{0x80A151F5L,0L,(-2L),0L,(-8L),(-8L)},{(-8L),6L,6L,(-8L),0L,0xD5C49A5CL},{1L,0x80A151F5L,(-1L),0xAA0F5035L,(-2L),0x109D3251L},{0L,0L,0L,(-6L),(-2L),1L},{0L,0x80A151F5L,(-8L),0x80A151F5L,0L,(-6L)},{0L,6L,0L,0xD5C49A5CL,(-8L),0L}}};
    int8_t l_455 = 5L;
    int8_t l_457 = 3L;
    int i, j, k;
    g_456 ^= ((safe_mod_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((g_180.f0 = (((safe_add_func_uint64_t_u_u((((g_42[0].f2 > ((-4L) | g_42[0].f2)) , (safe_unary_minus_func_uint16_t_u((l_56 | ((safe_sub_func_uint64_t_u_u((++(*l_59)), ((((func_63(l_68, (safe_mod_func_uint16_t_u_u((~(((void*)0 == l_72[0][0]) , 1UL)), 0x2DA6L)), l_73, g_74[0]) , (-1L)) || g_177.f0) , l_451) , (*g_277)))) | g_262.f2))))) , (*g_277)), l_452[0])) , (void*)0) != &l_451)), l_454[0][3][2])), l_455)) > g_42[0].f0);
    l_457 ^= (g_171.f3 = (g_91.f3 = g_145));
    g_177.f3 = 5L;
    return (*g_118);
}



static struct S0  func_63(union U2  p_64, int64_t  p_65, int8_t  p_66, uint32_t ** p_67)
{ 
    uint64_t *l_77 = &g_8;
    uint64_t **l_76 = &l_77;
    uint64_t ***l_78 = &l_76;
    int32_t l_79 = 6L;
    int32_t *l_80 = &g_12;
    int32_t l_83 = 0x922041F5L;
    union U3 *l_87 = &g_88[2];
    union U3 **l_89[6] = {&l_87,&l_87,&l_87,&l_87,&l_87,&l_87};
    struct S0 *l_106 = &g_107;
    int32_t l_121 = (-1L);
    int32_t l_213 = 0x80D308A8L;
    int16_t l_249 = (-10L);
    const union U2 l_256 = {0xB0L};
    const int8_t l_275[2] = {0x67L,0x67L};
    uint32_t l_299[1][6][6] = {{{0x56BCBA8EL,0x56BCBA8EL,0x56BCBA8EL,0x56BCBA8EL,0x56BCBA8EL,0x56BCBA8EL},{0x56BCBA8EL,0x56BCBA8EL,0x56BCBA8EL,0x56BCBA8EL,0x56BCBA8EL,0x56BCBA8EL},{0x56BCBA8EL,0x56BCBA8EL,0x56BCBA8EL,0x56BCBA8EL,0x56BCBA8EL,0x56BCBA8EL},{0x56BCBA8EL,0x56BCBA8EL,0x56BCBA8EL,0x56BCBA8EL,0x56BCBA8EL,0x56BCBA8EL},{0x56BCBA8EL,0x56BCBA8EL,0x56BCBA8EL,0x56BCBA8EL,0x56BCBA8EL,0x56BCBA8EL},{0x56BCBA8EL,0x56BCBA8EL,0x56BCBA8EL,0x56BCBA8EL,0x56BCBA8EL,0x56BCBA8EL}}};
    int64_t l_333 = 0x976ADAB57541A58ALL;
    uint32_t l_362 = 1UL;
    int i, j, k;
    (*l_78) = l_76;
    (*l_80) |= l_79;
lbl_173:
    (*l_80) = 2L;
    if (((safe_div_func_int8_t_s_s((l_83 > (safe_div_func_int32_t_s_s((((+((g_90[0][0] = l_87) == (g_92 = &g_88[2]))) < 0x47EFL) ^ g_93[1].f0), (safe_sub_func_int16_t_s_s(0x21B0L, 0L))))), 1L)) & 9UL))
    { 
        uint32_t l_98[7][7] = {{0xC8C4E1B8L,4UL,0xC8C4E1B8L,0xC8C4E1B8L,4UL,0xC8C4E1B8L,0xC8C4E1B8L},{18446744073709551613UL,18446744073709551613UL,0xAC9C4BD7L,18446744073709551613UL,18446744073709551613UL,0xAC9C4BD7L,18446744073709551613UL},{4UL,0xC8C4E1B8L,0xC8C4E1B8L,4UL,0xC8C4E1B8L,0xC8C4E1B8L,4UL},{0x00FF6CFDL,18446744073709551613UL,0x00FF6CFDL,0x00FF6CFDL,18446744073709551613UL,0x00FF6CFDL,0x00FF6CFDL},{4UL,4UL,0UL,4UL,4UL,0UL,4UL},{18446744073709551613UL,0x00FF6CFDL,0x00FF6CFDL,18446744073709551613UL,0x00FF6CFDL,0x00FF6CFDL,18446744073709551613UL},{0xC8C4E1B8L,4UL,0xC8C4E1B8L,0xC8C4E1B8L,4UL,0xC8C4E1B8L,0xC8C4E1B8L}};
        int16_t *l_108 = (void*)0;
        int16_t *l_109 = &g_110[4][5];
        int64_t *l_111 = (void*)0;
        int64_t *l_112 = (void*)0;
        int64_t *l_113 = &g_93[1].f4;
        uint8_t *l_114 = &g_91.f0;
        int32_t l_115 = 0x91089868L;
        struct S0 ***l_116 = &g_47;
        int32_t l_140[4][3][7] = {{{0x1008EF74L,0x1008EF74L,0xA7E42936L,0x498758D7L,0x5786F59EL,0x0E1A7F23L,(-6L)},{(-1L),0x65DC0845L,0x0DE80311L,0x64BD89D4L,0x279C2BD3L,0x8F8F025CL,1L},{(-6L),1L,1L,5L,0x5786F59EL,0x4A7E5ECDL,0x141CCEB6L}},{{5L,0x62F14741L,0x4DF62E77L,(-3L),0x5BB15C06L,0x5786F59EL,0xA7E42936L},{0xA7E42936L,(-6L),0x9896714EL,5L,0L,(-1L),0x64BD89D4L},{0xA7E42936L,3L,5L,0x62F14741L,0x62F14741L,5L,3L}},{{5L,(-8L),0L,0x9896714EL,(-6L),0xD45B9058L,(-5L)},{(-6L),0x4A7E5ECDL,0L,1L,0x93D3ABD0L,0x80028DF6L,0x3DD5295BL},{(-1L),0x5BB15C06L,0x1008EF74L,0x9896714EL,1L,0x3DD5295BL,0x498758D7L}},{{0x1008EF74L,0x3DD5295BL,(-5L),0x62F14741L,0xFC97D5E0L,0xD5BCCF1AL,(-1L)},{1L,0L,0xFC97D5E0L,5L,0x80028DF6L,0x1008EF74L,(-1L)},{0x498758D7L,7L,(-1L),(-3L),(-1L),7L,0x498758D7L}}};
        union U3 l_201 = {246UL};
        union U3 ****l_211 = &g_174[0];
        union U3 *****l_210 = &l_211;
        int i, j, k;
        g_12 = ((l_115 |= ((safe_lshift_func_int8_t_s_s((((((l_98[1][1] , (p_64.f0 >= p_66)) >= (safe_mul_func_uint8_t_u_u(((*l_114) = (((*l_113) = (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((((*l_80) , ((*l_109) = ((g_105 , (*g_47)) == (l_106 = (*g_47))))) == l_98[1][0]), g_8)), 1UL))) < p_66)), 248UL))) , l_98[1][1]) < g_105.f2) <= 0xFA1DL), 7)) | l_98[3][0])) , (-1L));
lbl_186:
        (*l_80) &= (g_88[2].f0 && (l_115 ^ l_98[4][6]));
        for (g_91.f3 = 0; (g_91.f3 <= 6); g_91.f3 += 1)
        { 
            struct S0 ****l_117[1];
            int32_t *l_119 = &l_115;
            int32_t *l_120[6] = {&l_79,&l_79,&l_79,&l_79,&l_79,&l_79};
            union U3 l_125 = {0x63L};
            union U3 * const *l_128[7][3][3] = {{{&l_87,&g_92,&l_87},{&l_87,&l_87,&l_87},{&l_87,&g_92,&l_87}},{{&l_87,&l_87,&l_87},{&l_87,&g_92,&l_87},{&l_87,&l_87,&l_87}},{{&l_87,&g_92,&l_87},{&l_87,&l_87,&l_87},{&l_87,&g_92,&l_87}},{{&l_87,&l_87,&l_87},{&l_87,&g_92,&l_87},{&l_87,&l_87,&l_87}},{{&l_87,&g_92,&l_87},{&l_87,&l_87,&l_87},{&l_87,&g_92,&l_87}},{{&l_87,&l_87,&l_87},{&l_87,&g_92,&l_87},{&l_87,&l_87,&l_87}},{{&l_87,&g_92,&l_87},{&l_87,&l_87,&l_87},{&l_87,&g_92,&l_87}}};
            union U3 *l_170 = &g_171;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_117[i] = &l_116;
            l_116 = (g_118 = l_116);
            g_122--;
            for (g_107.f2 = 0; (g_107.f2 <= 6); g_107.f2 += 1)
            { 
                int32_t l_139[1];
                int i, j;
                for (i = 0; i < 1; i++)
                    l_139[i] = 0L;
                (*l_80) = (l_125 , ((safe_mod_func_uint32_t_u_u((&l_87 != l_128[2][1][0]), 0x7690A484L)) > (((safe_lshift_func_uint8_t_u_s(l_98[g_91.f3][g_107.f2], (safe_lshift_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u((((safe_add_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u(((0xEE52087D55B84CCELL > g_91.f2) | (**p_67)), l_98[g_91.f3][g_107.f2])) < l_139[0]), (**p_67))) , (*l_119)) , 0xB9L), g_42[0].f0)) != 0x5AFD9305L), 1)))) & g_122) <= 0x07556C5F0395E10BLL)));
            }
            for (g_105.f3 = 0; (g_105.f3 <= 5); g_105.f3 += 1)
            { 
                struct S0 l_148 = {0x1FL,0xB4L,0xA8L};
                int32_t *l_150 = &l_83;
                int i, j;
                (*l_80) = g_110[g_105.f3][g_105.f3];
                --g_142;
                (*l_119) = g_42[0].f1;
                if (p_66)
                { 
                    (*l_119) = p_65;
                    ++g_145;
                    if (p_64.f0)
                        continue;
                    return l_148;
                }
                else
                { 
                    int32_t **l_149[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_149[i] = &l_119;
                    l_150 = &l_140[1][1][4];
                    l_150 = &g_12;
                    (*l_80) = g_145;
                    g_169 |= ((*l_119) = (safe_div_func_uint64_t_u_u((((l_140[1][1][4] ^ ((((((safe_mul_func_uint16_t_u_u(((g_168 &= (safe_sub_func_int8_t_s_s(((0x5C18L > 1L) , ((!1L) <= ((*l_80) ^ (safe_rshift_func_uint16_t_u_u(p_66, 2))))), (((((safe_div_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((safe_sub_func_int64_t_s_s((*l_150), g_107.f1)), (*l_150))), p_64.f0)) <= p_66) == l_115) , (void*)0) != &l_76)))) | g_21), p_66)) >= 2UL) , g_91.f1.f1) | 6L) , (*l_80)) > g_42[0].f1)) && 0xDBF33FCB7661C506LL) ^ (**p_67)), 0x41FE22FAA98AF002LL)));
                }
                for (l_125.f3 = 0; (l_125.f3 <= 5); l_125.f3 += 1)
                { 
                    union U3 *l_172 = (void*)0;
                    union U3 ****l_175 = &g_174[1];
                    l_172 = (l_170 = &g_88[2]);
                    g_93[1].f3 = ((*l_80) = (*l_119));
                    if (g_105.f1)
                        goto lbl_173;
                    (*l_175) = g_174[0];
                }
            }
            for (g_171.f3 = 5; (g_171.f3 >= 0); g_171.f3 -= 1)
            { 
                union U2 *l_179 = &g_180;
                union U3 * const **l_183 = &l_128[5][2][0];
                union U3 * const ***l_182 = &l_183;
                for (g_142 = 1; (g_142 <= 5); g_142 += 1)
                { 
                    union U2 **l_178[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    struct S0 l_181[1] = {{0UL,-7L,0xABL}};
                    int i;
                    l_179 = g_176[5][1][1];
                    if (g_42[0].f2)
                        continue;
                    return l_181[0];
                }
                for (p_64.f0 = 0; (p_64.f0 <= 5); p_64.f0 += 1)
                { 
                    union U3 * const ****l_184 = &l_182;
                    int32_t **l_185 = &l_80;
                    (*l_119) = g_171.f1.f1;
                    (*l_184) = l_182;
                    (*l_185) = &l_79;
                }
                for (l_125.f0 = 1; (l_125.f0 <= 5); l_125.f0 += 1)
                { 
                    int16_t l_212 = 0x20B5L;
                    if (p_64.f0)
                        goto lbl_186;
                    (*l_80) = (safe_lshift_func_uint16_t_u_u((safe_add_func_uint64_t_u_u((safe_sub_func_int32_t_s_s((safe_add_func_uint32_t_u_u(0x619C9193L, (((*g_75) = ((p_65 || (safe_mul_func_int16_t_s_s((safe_mod_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((l_201 , (safe_mul_func_int16_t_s_s((g_105.f3 >= ((safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(p_66, (safe_mul_func_uint16_t_u_u(((void*)0 != l_210), p_66)))), g_122)) <= l_212)), l_213))), g_91.f1.f0)), 65530UL)), (-1L)))) >= 0x6710L)) != g_214))), p_66)), g_145)), g_110[4][5]));
                }
            }
        }
    }
    else
    { 
        int32_t l_221 = (-1L);
        const union U3 *l_224 = &g_93[1];
        int32_t l_225[6] = {4L,4L,0xB6731223L,4L,4L,0xB6731223L};
        int8_t l_226 = 0xEDL;
        uint8_t *l_227 = &g_93[1].f1.f2;
        int32_t **l_248 = (void*)0;
        struct S1 *l_261 = &g_262;
        int64_t l_264[4];
        const struct S0 *l_330 = (void*)0;
        union U3 *l_429 = &g_93[0];
        int64_t l_438 = 0xF13ABF147A8B9234LL;
        int32_t *l_443 = &g_12;
        int32_t *l_444 = &g_177.f3;
        int32_t *l_445 = &g_91.f3;
        int32_t *l_446 = &l_121;
        int32_t *l_447 = &l_121;
        uint8_t l_448 = 0x6EL;
        int i;
        for (i = 0; i < 4; i++)
            l_264[i] = 0x7B0A03C78DF01C7FLL;
        (*l_80) = (((safe_sub_func_uint64_t_u_u(((safe_div_func_uint64_t_u_u(((((safe_sub_func_int32_t_s_s(p_65, l_221)) == (g_42[0].f0 == (safe_sub_func_int16_t_s_s((-4L), (((*l_227) = ((((((l_225[1] = (((void*)0 == l_224) , ((**p_67) ^= 4294967294UL))) > l_226) > 0x377B0656L) | g_107.f1) == 0x09DD69673EEE6CD1LL) <= p_65)) != 0xC7L))))) , p_64) , (*l_80)), g_105.f5)) <= (*l_80)), g_42[0].f2)) != g_105.f5) == p_66);
        if ((!((*l_80) ^ (((safe_sub_func_int64_t_s_s((!((safe_mul_func_uint8_t_u_u(255UL, (safe_div_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(((((safe_div_func_uint32_t_u_u((*l_80), (safe_mul_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(0x6AD7L, (safe_sub_func_int16_t_s_s(g_93[1].f0, (-1L))))), ((void*)0 != l_248))))) ^ 0UL) < g_105.f4) & (*l_80)), g_177.f0)), 14)), g_93[1].f0)))) == 7L)), p_64.f0)) > l_249) || p_64.f0))))
        { 
            uint32_t l_250 = 18446744073709551615UL;
            union U2 l_259 = {0UL};
            int32_t l_265 = 0x369643D4L;
            int32_t l_266 = 0x86AEEF4BL;
            struct S0 l_272 = {1UL,0x4BL,255UL};
            uint64_t **l_278[3][4][4] = {{{&g_277,&g_277,&g_277,&g_277},{(void*)0,&g_277,&g_277,(void*)0},{&g_277,(void*)0,&g_277,&l_77},{&g_277,&g_277,&g_277,&g_277}},{{(void*)0,&l_77,&g_277,&g_277},{&g_277,&g_277,&g_277,&l_77},{&l_77,(void*)0,&g_277,(void*)0},{&g_277,&g_277,&g_277,&g_277}},{{(void*)0,&g_277,&g_277,(void*)0},{&g_277,(void*)0,&g_277,&l_77},{&g_277,&g_277,&g_277,&g_277},{(void*)0,&l_77,&g_277,&g_277}}};
            union U3 ***l_293[3][3][6];
            uint32_t l_317 = 0x3CED1D92L;
            struct S1 l_321 = {3L,1UL,2L,0xB67AL,0x492F3A7BD05B2C2ELL,9L,0x358BD54BL};
            uint32_t **l_345 = &g_75;
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    for (k = 0; k < 6; k++)
                        l_293[i][j][k] = &l_89[3];
                }
            }
lbl_314:
            l_250++;
            if ((p_66 <= ((l_250 & ((*g_75) , ((safe_mod_func_uint64_t_u_u((!(((l_256 , (safe_mod_func_uint8_t_u_u((l_259 , 255UL), (((*g_48) , 0x7321L) || g_42[0].f2)))) , 0x2D656744L) , p_66)), g_12)) & 246UL))) && 65529UL)))
            { 
                struct S1 **l_260[3];
                int32_t *l_263[3];
                union U2 l_273 = {255UL};
                union U3 l_281 = {0x82L};
                int i;
                for (i = 0; i < 3; i++)
                    l_260[i] = (void*)0;
                for (i = 0; i < 3; i++)
                    l_263[i] = (void*)0;
                l_261 = &g_105;
                ++g_267[1][3];
                if (((safe_add_func_uint8_t_u_u(((((*l_80) <= (l_272 , (p_64.f0 < p_66))) <= (l_265 ^= (l_266 &= (l_273 , (!(0xB38CE81F14C923DBLL > p_64.f0)))))) , p_66), l_275[1])) != 9L))
                { 
                    int64_t *l_280 = &g_105.f4;
                    struct S1 *l_289[7] = {&g_290,&g_290,&g_290,&g_290,&g_290,&g_290,&g_290};
                    int16_t *l_291[3];
                    int32_t l_292 = (-9L);
                    int32_t l_294 = (-10L);
                    struct S0 l_295[3] = {{250UL,1L,1UL},{250UL,1L,1UL},{250UL,1L,1UL}};
                    int i;
                    for (i = 0; i < 3; i++)
                        l_291[i] = (void*)0;
                    l_294 ^= (((((g_110[4][5] = (g_267[0][1] | (((*l_280) = (g_276[2][1][5] != (g_279 = l_278[2][3][3]))) | ((((l_289[3] = ((l_281 , ((safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u(9UL, (safe_sub_func_int64_t_s_s(((((~((p_66 || ((0UL > 0xF4L) <= g_110[0][1])) & p_66)) == l_272.f2) == 1UL) && 0UL), p_66)))) && p_65), 4)) != g_105.f6)) , &g_262)) != &g_290) < 0xD754E12CC2AE3911LL) & p_65)))) <= l_292) < (*l_80)) , g_174[0]) == l_293[1][1][1]);
                    return l_295[2];
                }
                else
                { 
                    int64_t l_296[5][5][2] = {{{0x27664DF74A3EB68ELL,(-1L)},{0x46E4403DE6FF4662LL,0x8B857439B39C02D8LL},{8L,0x27664DF74A3EB68ELL},{(-2L),8L},{0xF7D3FE88EDFA1680LL,(-5L)}},{{0xF7D3FE88EDFA1680LL,8L},{(-2L),0x27664DF74A3EB68ELL},{8L,0x8B857439B39C02D8LL},{0x46E4403DE6FF4662LL,(-1L)},{0x27664DF74A3EB68ELL,0x036B2E91BB1884F5LL}},{{0x036B2E91BB1884F5LL,0x036B2E91BB1884F5LL},{0x27664DF74A3EB68ELL,(-1L)},{0x46E4403DE6FF4662LL,0x8B857439B39C02D8LL},{8L,0x27664DF74A3EB68ELL},{(-2L),8L}},{{0xF7D3FE88EDFA1680LL,(-5L)},{0xF7D3FE88EDFA1680LL,8L},{(-2L),0x27664DF74A3EB68ELL},{8L,0x8B857439B39C02D8LL},{0x46E4403DE6FF4662LL,(-1L)}},{{0x27664DF74A3EB68ELL,0x036B2E91BB1884F5LL},{0x036B2E91BB1884F5LL,0x036B2E91BB1884F5LL},{0x27664DF74A3EB68ELL,(-1L)},{0x46E4403DE6FF4662LL,0x8B857439B39C02D8LL},{8L,0x27664DF74A3EB68ELL}}};
                    int32_t **l_297[1];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_297[i] = (void*)0;
                    l_296[1][0][1] = ((*l_80) = (-1L));
                    if (g_169)
                        goto lbl_302;
                    if (g_105.f4)
                        goto lbl_302;
                    l_263[0] = &l_121;
lbl_302:
                    --l_299[0][2][3];
                    (*l_80) ^= g_110[4][5];
                    (**g_118) = (void*)0;
                }
            }
            else
            { 
                int32_t **l_303 = &l_80;
                uint16_t *l_312[1][3];
                struct S1 l_328 = {0xEBL,0UL,0L,1UL,0x5524AC20B9416D76LL,1L,4294967288UL};
                struct S0 **l_329 = &l_106;
                union U3 **l_331 = &g_90[0][0];
                uint32_t **l_346 = (void*)0;
                int32_t l_349 = 0L;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_312[i][j] = &g_105.f3;
                }
lbl_313:
                (*l_303) = &g_12;
                if (((safe_add_func_uint64_t_u_u(0xDAC993534EED16C8LL, 18446744073709551615UL)) > (5UL | ((*g_92) , ((1L >= ((safe_mul_func_int16_t_s_s((((((safe_mul_func_uint16_t_u_u((l_266 ^= (safe_add_func_uint8_t_u_u((0xEFL < (((((g_267[1][3] ^ 9UL) != 1L) < g_262.f1) & p_65) == (**p_67))), p_64.f0))), (*l_80))) > 0xF310229F8BE13376LL) & (**l_303)) | (*l_80)) != p_66), g_141[0])) < (*l_80))) && (**p_67))))))
                { 
                    if (g_107.f1)
                        goto lbl_313;
                    if (g_107.f1)
                        goto lbl_314;
                    (*l_80) = (l_272.f2 < l_259.f0);
                    (**l_303) ^= (safe_lshift_func_int8_t_s_s(p_64.f0, ((l_317 |= l_266) >= ((safe_unary_minus_func_uint16_t_u(((p_66 >= 0x26118C7AA07E235DLL) , (safe_rshift_func_uint16_t_u_s(p_66, p_64.f0))))) , (((**g_279) = (l_321 , (**g_279))) >= 0xE8A6A471C4FF715ELL)))));
                }
                else
                { 
                    union U3 *l_322 = &g_323;
                    uint64_t ****l_324 = (void*)0;
                    uint64_t ****l_325[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_325[i] = &l_78;
                    l_322 = (void*)0;
                    l_78 = &g_276[2][1][0];
                    return (**g_47);
                }
                (*l_303) = (*l_303);
                if ((safe_div_func_uint16_t_u_u((l_328 , (((**g_47) , (void*)0) == ((((*l_329) = &l_272) == ((*l_80) , l_330)) , l_331))), (**l_303))))
                { 
                    (*l_303) = &g_12;
                }
                else
                { 
                    struct S0 ***l_334 = &l_329;
                    union U3 l_344[4][4] = {{{249UL},{249UL},{249UL},{249UL}},{{249UL},{249UL},{249UL},{249UL}},{{249UL},{249UL},{249UL},{249UL}},{{249UL},{249UL},{249UL},{249UL}}};
                    uint32_t ***l_347 = &g_74[1];
                    int32_t *l_348[2][1];
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_348[i][j] = &l_265;
                    }
                    p_64.f3 = (!((l_333 = 4294967287UL) && (((((((*g_118) != ((*l_334) = (void*)0)) & (l_321.f2 < p_64.f0)) == (safe_mul_func_int16_t_s_s(((p_65 , p_64.f0) , (-1L)), l_321.f3))) <= g_105.f1) , 0x99L) , (*l_80))));
                    l_349 ^= ((safe_mod_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((+p_64.f2), ((**p_67) || (safe_mod_func_uint8_t_u_u((p_64.f1 ^ ((l_344[1][1] , (l_345 == ((*l_347) = l_346))) ^ (g_267[1][3] != g_323.f0))), p_66))))), 0xCCL)) ^ (**l_303));
                }
                return (**g_47);
            }
            (*l_80) |= l_321.f0;
            l_80 = &g_12;
            return l_272;
        }
        else
        { 
            int32_t *l_350 = (void*)0;
            int32_t *l_351 = &l_225[1];
            int32_t *l_352 = &l_225[0];
            int32_t *l_353 = &l_79;
            int32_t *l_354 = (void*)0;
            int32_t *l_355 = (void*)0;
            int32_t *l_356[4][6] = {{&l_225[4],&l_225[4],&l_121,&l_79,&l_121,&l_225[4]},{(void*)0,&l_225[4],&l_83,&l_83,&l_225[4],(void*)0},{&l_121,(void*)0,&l_83,(void*)0,&l_121,&l_121},{&l_79,(void*)0,(void*)0,&l_79,&l_225[4],&l_79}};
            int32_t **l_361 = &l_355;
            int i, j;
            ++g_358[3];
            (*l_361) = &g_12;
            --l_362;
            (**l_361) = (safe_sub_func_uint32_t_u_u((**p_67), p_66));
            for (g_171.f1.f1 = 0; (g_171.f1.f1 == 7); ++g_171.f1.f1)
            { 
                int32_t **l_369[6][6][5] = {{{&l_351,&l_352,(void*)0,(void*)0,&l_354},{&l_350,&l_351,(void*)0,&l_351,&l_351},{(void*)0,&l_80,(void*)0,&l_354,(void*)0},{&l_350,&l_80,(void*)0,&l_351,(void*)0},{&l_351,&l_80,(void*)0,(void*)0,(void*)0},{(void*)0,&l_351,(void*)0,(void*)0,&l_351}},{{&l_351,&l_352,(void*)0,(void*)0,&l_354},{&l_350,&l_351,(void*)0,&l_351,&l_351},{(void*)0,&l_80,(void*)0,&l_354,(void*)0},{&l_350,&l_80,(void*)0,&l_351,(void*)0},{&l_351,&l_80,(void*)0,(void*)0,(void*)0},{(void*)0,&l_351,(void*)0,(void*)0,&l_351}},{{&l_351,&l_352,(void*)0,(void*)0,&l_354},{&l_350,&l_351,(void*)0,&l_351,&l_351},{(void*)0,&l_80,(void*)0,&l_354,(void*)0},{&l_350,&l_80,(void*)0,&l_351,(void*)0},{&l_351,&l_80,(void*)0,(void*)0,(void*)0},{(void*)0,&l_351,(void*)0,(void*)0,&l_351}},{{&l_351,&l_352,(void*)0,(void*)0,&l_354},{&l_350,&l_351,(void*)0,&l_351,&l_351},{(void*)0,&l_80,(void*)0,&l_354,(void*)0},{&l_350,&l_80,(void*)0,&l_351,(void*)0},{&l_351,&l_80,(void*)0,(void*)0,(void*)0},{(void*)0,&l_351,(void*)0,(void*)0,&l_351}},{{&l_351,&l_352,(void*)0,(void*)0,&l_354},{&l_350,&l_351,(void*)0,&l_351,&l_351},{(void*)0,&l_80,(void*)0,&l_354,(void*)0},{&l_350,&l_80,(void*)0,&l_351,(void*)0},{&l_351,&l_80,(void*)0,(void*)0,(void*)0},{(void*)0,&l_351,(void*)0,(void*)0,&l_351}},{{&l_351,&l_352,(void*)0,(void*)0,&l_354},{&l_350,&l_351,(void*)0,&l_351,&l_351},{(void*)0,&l_80,(void*)0,&l_354,(void*)0},{&l_350,&l_80,(void*)0,&l_351,(void*)0},{&l_351,&l_80,(void*)0,(void*)0,(void*)0},{&l_80,&l_354,&l_80,(void*)0,(void*)0}}};
                uint16_t *l_379 = &g_323.f2;
                uint16_t *l_380 = (void*)0;
                uint16_t *l_381 = &g_262.f1;
                int32_t l_398[6] = {1L,1L,1L,1L,1L,1L};
                uint64_t l_422[3][7][5] = {{{0x00E19483CD63475BLL,0x561DA92B66B907F1LL,0xFDD80B24052D8FE3LL,0xF540C17C14EB8A39LL,18446744073709551610UL},{18446744073709551615UL,18446744073709551608UL,0xAEA517711EDCF05CLL,18446744073709551608UL,18446744073709551615UL},{0xFDD80B24052D8FE3LL,0xFA4EE61FD518D7FALL,0x561DA92B66B907F1LL,0xB4E7857034A2D40ELL,1UL},{0UL,0x5BAF71156AD47379LL,0x63344D988A49D51BLL,18446744073709551615UL,0UL},{0xFA4EE61FD518D7FALL,0x00E19483CD63475BLL,0x436BD2E50EFB89FELL,0xFA4EE61FD518D7FALL,1UL},{18446744073709551607UL,18446744073709551615UL,18446744073709551609UL,18446744073709551609UL,18446744073709551615UL},{1UL,0xFDD80B24052D8FE3LL,0UL,18446744073709551614UL,18446744073709551610UL}},{{0xE4600EC429C54269LL,0UL,1UL,4UL,0x1D4E75E4C8BF5B44LL},{0xB4E7857034A2D40ELL,0xFA4EE61FD518D7FALL,18446744073709551610UL,18446744073709551611UL,18446744073709551607UL},{0xE4600EC429C54269LL,18446744073709551607UL,0x5BAF71156AD47379LL,18446744073709551615UL,0x5BAF71156AD47379LL},{1UL,1UL,0x9FE0C1EAA6C8538BLL,18446744073709551607UL,18446744073709551615UL},{18446744073709551607UL,0xE4600EC429C54269LL,0xF279814EA61D6660LL,18446744073709551607UL,0UL},{0xFA4EE61FD518D7FALL,0xB4E7857034A2D40ELL,0UL,0xF540C17C14EB8A39LL,0xB4E7857034A2D40ELL},{0UL,0xE4600EC429C54269LL,0x739A8D6DC2FBB3DBLL,0x1D4E75E4C8BF5B44LL,0x1D4E75E4C8BF5B44LL}},{{0xFDD80B24052D8FE3LL,1UL,0xFDD80B24052D8FE3LL,0UL,18446744073709551614UL},{18446744073709551615UL,18446744073709551607UL,0x63344D988A49D51BLL,18446744073709551608UL,0x1137B19FC1093485LL},{0x00E19483CD63475BLL,0xFA4EE61FD518D7FALL,18446744073709551606UL,18446744073709551607UL,1UL},{0x5BAF71156AD47379LL,0UL,0x63344D988A49D51BLL,0x1137B19FC1093485LL,18446744073709551614UL},{0xFA4EE61FD518D7FALL,0xFDD80B24052D8FE3LL,0xFDD80B24052D8FE3LL,0xFA4EE61FD518D7FALL,0x561DA92B66B907F1LL},{18446744073709551608UL,18446744073709551615UL,0x739A8D6DC2FBB3DBLL,4UL,18446744073709551615UL},{0x561DA92B66B907F1LL,0x00E19483CD63475BLL,0UL,18446744073709551610UL,18446744073709551614UL}}};
                uint32_t ***l_424 = &g_74[0];
                uint32_t **** const l_423 = &l_424;
                int i, j, k;
                (**g_118) = l_106;
                l_353 = ((*l_361) = &l_83);
                if (((safe_div_func_int64_t_s_s(((+g_42[0].f2) < (safe_mod_func_uint64_t_u_u((safe_div_func_uint16_t_u_u((l_224 == l_224), 65535UL)), (safe_mod_func_int16_t_s_s((((++(*l_381)) , (safe_rshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((safe_div_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s(p_64.f0, (((safe_rshift_func_uint16_t_u_s(((void*)0 == &g_12), 1)) ^ p_66) | p_64.f0))), 6UL)), p_66)), g_141[0])) >= l_398[2]), 0UL)), 6))) != 0xC4B5L), 0x28BDL))))), p_64.f0)) || p_65))
                { 
                    if (g_168)
                        break;
                }
                else
                { 
                    int32_t l_421 = 0L;
                    uint32_t *****l_425 = (void*)0;
                    uint32_t *****l_426 = (void*)0;
                    uint32_t ****l_428 = (void*)0;
                    uint32_t *****l_427 = &l_428;
                    g_91.f3 = (p_65 && (((safe_div_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u(0UL, (safe_lshift_func_int8_t_s_s(((((safe_mod_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s((p_64.f0 >= ((*l_80) != 4294967291UL)), 6)) == (safe_sub_func_uint64_t_u_u((((**l_361) = 0x1986F1EBL) >= (**p_67)), 0UL))), p_66)) <= 0xAB66L) <= g_180.f0) || 0xD3261207L), (*l_80))))) == (*g_75)), 10)), (*l_80))) | p_65) & (**g_279)));
                    (*l_80) = ((l_422[1][4][1] |= (((void*)0 != &l_89[0]) >= ((((safe_mul_func_int16_t_s_s(g_290.f5, (safe_rshift_func_uint8_t_u_s(255UL, (safe_rshift_func_uint8_t_u_u((*l_355), ((g_8 == ((safe_div_func_uint16_t_u_u(l_421, 0x1AD4L)) < p_64.f0)) >= 0xEE1FDABAL))))))) || g_110[4][5]) , g_262.f4) != l_421))) == 0xBF276200L);
                    if (g_105.f3)
                        continue;
                    (*l_427) = l_423;
                }
            }
        }
        l_429 = l_429;
        for (g_91.f0 = 0; (g_91.f0 >= 56); g_91.f0 = safe_add_func_uint8_t_u_u(g_91.f0, 5))
        { 
            uint32_t l_439[3][7] = {{0x7072FF2AL,0xBB707FB6L,0x7072FF2AL,0x1FBFCC43L,0x5CB37662L,0x5CB37662L,0x1FBFCC43L},{0x7072FF2AL,0xBB707FB6L,0x7072FF2AL,0x1FBFCC43L,0x5CB37662L,0x5CB37662L,0x1FBFCC43L},{0x7072FF2AL,0xBB707FB6L,0x7072FF2AL,0x1FBFCC43L,0x5CB37662L,0x5CB37662L,0x1FBFCC43L}};
            int8_t *l_440 = (void*)0;
            int8_t *l_441 = (void*)0;
            int32_t l_442 = 0xE08F61FBL;
            int i, j;
            l_442 = (+((*l_87) , (!((*l_80) = (((l_224 != l_224) && (((0L & ((0x463CL <= 8UL) & (((**g_279) = ((((*l_227) = (safe_sub_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s(g_168, 15)), l_438))) != p_65) ^ p_65)) == l_439[2][4]))) <= l_264[2]) | p_64.f0)) == g_105.f6)))));
        }
        l_448++;
    }
    return (*l_106);
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_42[i].f0, "g_42[i].f0", print_hash_value);
        transparent_crc(g_42[i].f1, "g_42[i].f1", print_hash_value);
        transparent_crc(g_42[i].f2, "g_42[i].f2", print_hash_value);

    }
    transparent_crc(g_60, "g_60", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_88[i].f0, "g_88[i].f0", print_hash_value);

    }
    transparent_crc(g_91.f0, "g_91.f0", print_hash_value);
    transparent_crc(g_91.f1.f0, "g_91.f1.f0", print_hash_value);
    transparent_crc(g_91.f1.f1, "g_91.f1.f1", print_hash_value);
    transparent_crc(g_91.f1.f2, "g_91.f1.f2", print_hash_value);
    transparent_crc(g_91.f2, "g_91.f2", print_hash_value);
    transparent_crc(g_91.f3, "g_91.f3", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_93[i].f0, "g_93[i].f0", print_hash_value);

    }
    transparent_crc(g_105.f0, "g_105.f0", print_hash_value);
    transparent_crc(g_105.f1, "g_105.f1", print_hash_value);
    transparent_crc(g_105.f2, "g_105.f2", print_hash_value);
    transparent_crc(g_105.f3, "g_105.f3", print_hash_value);
    transparent_crc(g_105.f4, "g_105.f4", print_hash_value);
    transparent_crc(g_105.f5, "g_105.f5", print_hash_value);
    transparent_crc(g_105.f6, "g_105.f6", print_hash_value);
    transparent_crc(g_107.f0, "g_107.f0", print_hash_value);
    transparent_crc(g_107.f1, "g_107.f1", print_hash_value);
    transparent_crc(g_107.f2, "g_107.f2", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_110[i][j], "g_110[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_122, "g_122", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_141[i], "g_141[i]", print_hash_value);

    }
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    transparent_crc(g_171.f0, "g_171.f0", print_hash_value);
    transparent_crc(g_171.f1.f0, "g_171.f1.f0", print_hash_value);
    transparent_crc(g_171.f1.f1, "g_171.f1.f1", print_hash_value);
    transparent_crc(g_171.f1.f2, "g_171.f1.f2", print_hash_value);
    transparent_crc(g_171.f2, "g_171.f2", print_hash_value);
    transparent_crc(g_171.f3, "g_171.f3", print_hash_value);
    transparent_crc(g_177.f0, "g_177.f0", print_hash_value);
    transparent_crc(g_177.f1, "g_177.f1", print_hash_value);
    transparent_crc(g_177.f2, "g_177.f2", print_hash_value);
    transparent_crc(g_177.f3, "g_177.f3", print_hash_value);
    transparent_crc(g_180.f0, "g_180.f0", print_hash_value);
    transparent_crc(g_180.f1, "g_180.f1", print_hash_value);
    transparent_crc(g_180.f2, "g_180.f2", print_hash_value);
    transparent_crc(g_180.f3, "g_180.f3", print_hash_value);
    transparent_crc(g_214, "g_214", print_hash_value);
    transparent_crc(g_262.f0, "g_262.f0", print_hash_value);
    transparent_crc(g_262.f1, "g_262.f1", print_hash_value);
    transparent_crc(g_262.f2, "g_262.f2", print_hash_value);
    transparent_crc(g_262.f3, "g_262.f3", print_hash_value);
    transparent_crc(g_262.f4, "g_262.f4", print_hash_value);
    transparent_crc(g_262.f5, "g_262.f5", print_hash_value);
    transparent_crc(g_262.f6, "g_262.f6", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_267[i][j], "g_267[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_290.f0, "g_290.f0", print_hash_value);
    transparent_crc(g_290.f1, "g_290.f1", print_hash_value);
    transparent_crc(g_290.f2, "g_290.f2", print_hash_value);
    transparent_crc(g_290.f3, "g_290.f3", print_hash_value);
    transparent_crc(g_290.f4, "g_290.f4", print_hash_value);
    transparent_crc(g_290.f5, "g_290.f5", print_hash_value);
    transparent_crc(g_290.f6, "g_290.f6", print_hash_value);
    transparent_crc(g_298, "g_298", print_hash_value);
    transparent_crc(g_323.f0, "g_323.f0", print_hash_value);
    transparent_crc(g_357, "g_357", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_358[i], "g_358[i]", print_hash_value);

    }
    transparent_crc(g_456, "g_456", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_649[i][j], "g_649[i][j]", print_hash_value);

        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
