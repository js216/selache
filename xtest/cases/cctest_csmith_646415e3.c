// SPDX-License-Identifier: MIT
// cctest_csmith_646415e3.c --- cctest case csmith_646415e3 (csmith seed 1684280803)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x689e19c8 */
/* @exp_ticks 0xd25 */

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

// Options:   -s 1684280803 -o /home/agent1/fast_data/tmp/csmith_gen_e1n8251z/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   int64_t  f0;
   uint16_t  f1;
   int16_t  f2;
   int64_t  f3;
   int64_t  f4;
};
#pragma pack(pop)

union U1 {
   const int64_t  f0;
   uint64_t  f1;
};

union U2 {
   struct S0  f0;
   uint8_t  f1;
   struct S0  f2;
};

union U3 {
   int8_t  f0;
};

union U4 {
   int32_t  f0;
};


static uint32_t g_4[4][2][1] = {{{0xE00F6802L},{0xD8F6EFBAL}},{{0xD8F6EFBAL},{0xE00F6802L}},{{0xD8F6EFBAL},{0xD8F6EFBAL}},{{0xE00F6802L},{0xD8F6EFBAL}}};
static int64_t g_5[2][2] = {{0xC96C7979B3895196LL,0xC96C7979B3895196LL},{0xC96C7979B3895196LL,0xC96C7979B3895196LL}};
static int32_t g_7 = (-2L);
static union U1 g_25 = {0L};
static struct S0 g_26 = {0L,65533UL,-1L,5L,0xAA3E8F08877E0698LL};
static int8_t g_49 = 6L;
static uint8_t g_50 = 0xC9L;
static int32_t g_71 = (-2L);
static uint16_t g_73[1][3] = {{0xC3DAL,0xC3DAL,0xC3DAL}};
static int32_t g_98 = 0x4E6C7C9CL;
static uint16_t g_105 = 0xCD41L;
static union U4 g_130 = {-1L};
static uint32_t g_159 = 0x2F3F102FL;
static union U2 g_182[5] = {{{0xC66F5C53A74D3E12LL,0x70A2L,-7L,0x25FB00830B306029LL,-1L}},{{0xC66F5C53A74D3E12LL,0x70A2L,-7L,0x25FB00830B306029LL,-1L}},{{0xC66F5C53A74D3E12LL,0x70A2L,-7L,0x25FB00830B306029LL,-1L}},{{0xC66F5C53A74D3E12LL,0x70A2L,-7L,0x25FB00830B306029LL,-1L}},{{0xC66F5C53A74D3E12LL,0x70A2L,-7L,0x25FB00830B306029LL,-1L}}};



static union U2  func_1(void);
static uint16_t  func_11(uint64_t  p_12, int32_t  p_13, int8_t  p_14);
static uint64_t  func_15(union U1  p_16, union U4  p_17);
static uint8_t  func_23(union U1  p_24);




static union U2  func_1(void)
{ 
    int32_t l_6 = 0x6950A4BAL;
    union U4 l_43 = {0x3993911EL};
    int32_t l_181 = 0x206C7CCFL;
    l_43.f0 = ((safe_div_func_int64_t_s_s(((g_5[1][1] = g_4[1][1][0]) ^ 0UL), ((g_7 = (l_6 = 0x1F09A2B4L)) , (l_181 |= (((!(safe_sub_func_uint64_t_u_u((func_11(func_15(((l_6 = ((safe_add_func_int16_t_s_s((+(safe_rshift_func_uint8_t_u_s(func_23(g_25), g_25.f0))), l_6)) && g_25.f1)) , g_25), l_43), l_43.f0, g_4[0][0][0]) == g_7), l_43.f0))) , 0xF7L) > l_43.f0))))) | g_4[0][1][0]);
    return g_182[4];
}



static uint16_t  func_11(uint64_t  p_12, int32_t  p_13, int8_t  p_14)
{ 
    struct S0 l_54 = {-1L,5UL,0x8EFEL,0x72DBE4212CF720AFLL,0x3265C9E2F093B040LL};
    int32_t l_60 = 0x90E64C7CL;
    int32_t l_61 = 0x322662B2L;
    int32_t l_62[4];
    int32_t l_96 = (-1L);
    int32_t l_110 = 0xEC5A935BL;
    uint64_t l_143 = 18446744073709551615UL;
    int16_t l_177 = (-1L);
    uint16_t l_178 = 65530UL;
    int i;
    for (i = 0; i < 4; i++)
        l_62[i] = 4L;
    l_54 = g_26;
    l_62[2] = (18446744073709551606UL > ((l_61 &= (safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s((!p_12), p_12)), (((g_25.f1 = (l_60 = ((g_26.f3 , 250UL) > g_7))) > l_54.f1) ^ g_4[1][0][0])))) ^ 0x8444L));
    if ((g_71 = ((safe_add_func_uint8_t_u_u((l_60 &= ((safe_rshift_func_int16_t_s_u((l_62[0] >= ((((safe_rshift_func_int8_t_s_s(p_14, ((((safe_rshift_func_int8_t_s_u(((18446744073709551611UL == (g_26.f0 == (-1L))) ^ 65531UL), g_25.f1)) && p_13) == g_50) > 1UL))) != l_61) <= p_13) && g_26.f1)), 14)) >= (-1L))), 0x11L)) | g_25.f1)))
    { 
        int8_t l_72 = 0x13L;
        int32_t l_95 = 0L;
        int32_t l_97 = 0L;
        union U3 l_120 = {0L};
        int32_t l_142 = 0x92D8F591L;
        struct S0 l_152 = {0x61AD10CDFC88F8C1LL,65527UL,0x4863L,0L,-10L};
        int32_t l_157 = 0x4C02BEFAL;
        int32_t l_158[5][1];
        int i, j;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 1; j++)
                l_158[i][j] = 0x1FDA6A71L;
        }
        if ((g_73[0][0] = (p_12 >= l_72)))
        { 
            uint32_t l_94 = 4294967295UL;
            struct S0 l_104 = {0x00E8DF19FB563853LL,65532UL,0x1A1BL,1L,0x8CCD7FECAEFE6362LL};
            int32_t l_108 = 0L;
            for (g_49 = 5; (g_49 >= (-17)); --g_49)
            { 
                uint64_t l_93 = 18446744073709551610UL;
                g_98 = (safe_lshift_func_int16_t_s_u((((+(-1L)) , (safe_sub_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((g_25.f1 = ((l_97 &= ((g_50--) <= ((((0x755E4DDAL < (((l_95 &= ((((g_7 && (safe_rshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s(((safe_mul_func_int8_t_s_s(p_12, l_93)) > g_4[2][0][0]), p_13)), g_26.f1))) && p_14) >= g_4[1][0][0]) != l_94)) | p_14) , l_96)) >= 1L) <= 0x10L) ^ p_13))) < g_4[1][1][0])), p_14)), 1UL)), p_14))) > g_71), l_72));
            }
            if ((safe_mul_func_int16_t_s_s((safe_unary_minus_func_int64_t_s((g_26.f0 |= ((3L > (safe_sub_func_int16_t_s_s(0L, p_13))) ^ l_54.f4)))), 0xB51BL)))
            { 
                return g_26.f2;
            }
            else
            { 
                l_104 = g_26;
                g_105++;
                l_108 = (l_95 = p_12);
            }
        }
        else
        { 
            struct S0 l_109 = {0x87A30E59352247AALL,5UL,0xDF10L,0x50AECCFC7CCE1356LL,-1L};
            uint32_t l_111 = 18446744073709551612UL;
            uint32_t l_112 = 0xABD97907L;
            int32_t l_115 = 0x30DB7C70L;
            if ((l_109 , (((l_54.f0 > ((p_13 != ((l_111 = (p_14 < l_110)) != l_112)) < l_109.f1)) <= g_49) & p_13)))
            { 
                int64_t l_113[3];
                struct S0 l_114[5][5] = {{{0x65B027A91AFA9DCFLL,65535UL,0x8625L,1L,0xC39718655DCCE302LL},{1L,1UL,0L,-1L,1L},{1L,65535UL,0x0BC0L,0L,0xF83A3BBF176801D4LL},{0x3DC333CF46C250DALL,65535UL,-1L,0x8DDC735B24D1FF7FLL,0x00A7E67F4868D956LL},{0xFB421CF99DB0DCC4LL,3UL,-1L,-1L,1L}},{{0xF1929AE18D8E2A73LL,0x042EL,8L,0x033D0BF8AE0A268BLL,0xF09DA1C919A85A5CLL},{0x49601793202A9B44LL,0xB5EAL,-5L,1L,0x27A7C490E50DD9F3LL},{0x49601793202A9B44LL,0xB5EAL,-5L,1L,0x27A7C490E50DD9F3LL},{0xF1929AE18D8E2A73LL,0x042EL,8L,0x033D0BF8AE0A268BLL,0xF09DA1C919A85A5CLL},{0L,0x84EDL,-1L,0x2EA868270EC93635LL,0xE38D5F573F6651D5LL}},{{0x886503B76DB0F719LL,0UL,0xD293L,0xB7CDA3DCFAEA6509LL,0x46BF4A85D1E3A85ELL},{0xF1929AE18D8E2A73LL,0x042EL,8L,0x033D0BF8AE0A268BLL,0xF09DA1C919A85A5CLL},{1L,65535UL,0x0BC0L,0L,0xF83A3BBF176801D4LL},{0xFB421CF99DB0DCC4LL,3UL,-1L,-1L,1L},{1L,1UL,0L,-1L,1L}},{{0x886503B76DB0F719LL,0UL,0xD293L,0xB7CDA3DCFAEA6509LL,0x46BF4A85D1E3A85ELL},{1L,65535UL,0x0BC0L,0L,0xF83A3BBF176801D4LL},{0L,0x84EDL,-1L,0x2EA868270EC93635LL,0xE38D5F573F6651D5LL},{1L,65535UL,0x0BC0L,0L,0xF83A3BBF176801D4LL},{0x886503B76DB0F719LL,0UL,0xD293L,0xB7CDA3DCFAEA6509LL,0x46BF4A85D1E3A85ELL}},{{0xF1929AE18D8E2A73LL,0x042EL,8L,0x033D0BF8AE0A268BLL,0xF09DA1C919A85A5CLL},{0x3DC333CF46C250DALL,65535UL,-1L,0x8DDC735B24D1FF7FLL,0x00A7E67F4868D956LL},{0x65B027A91AFA9DCFLL,65535UL,0x8625L,1L,0xC39718655DCCE302LL},{0xFB421CF99DB0DCC4LL,3UL,-1L,-1L,1L},{0x49601793202A9B44LL,0xB5EAL,-5L,1L,0x27A7C490E50DD9F3LL}}};
                int i, j;
                for (i = 0; i < 3; i++)
                    l_113[i] = 0x2D6D572ACB3E338FLL;
                l_113[2] |= 0x9A4A3E56L;
                l_54 = (l_114[2][1] = g_26);
                l_115 = p_14;
            }
            else
            { 
                int32_t l_141 = 0x018B1378L;
                l_110 = (safe_div_func_int64_t_s_s(g_26.f2, (((safe_add_func_uint8_t_u_u(((l_120 , (safe_lshift_func_int16_t_s_s((1UL >= (safe_mul_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s((!(safe_rshift_func_int8_t_s_s((((g_130 = g_130) , g_73[0][0]) > p_13), 0))), 7)) <= 1L), g_26.f0))), g_25.f0))) | p_14), g_71)) && (-1L)) ^ g_26.f3)));
                l_60 = (~((g_26.f0 < (safe_add_func_int64_t_s_s((safe_sub_func_uint32_t_u_u((safe_unary_minus_func_uint8_t_u((safe_add_func_uint8_t_u_u((((((safe_div_func_uint64_t_u_u((l_142 = (g_26 , (l_97 ^= (((l_95 |= ((((-1L) && (1L & p_12)) ^ g_25.f0) <= l_141)) <= 65535UL) | l_115)))), l_143)) , g_130) , 0xBAL) , 7L) || p_14), 0x8DL)))), p_14)), l_120.f0))) | g_105));
            }
            l_110 |= (g_98 = p_13);
            for (p_12 = 0; (p_12 <= 3); p_12 += 1)
            { 
                int i;
                l_115 |= (safe_rshift_func_int8_t_s_u(0L, 3));
                if (l_62[p_12])
                    break;
                return g_26.f2;
            }
        }
        for (g_130.f0 = 0; (g_130.f0 == 23); g_130.f0 = safe_add_func_uint8_t_u_u(g_130.f0, 1))
        { 
            struct S0 l_148 = {-6L,1UL,0xB034L,0L,1L};
            l_148 = g_26;
            for (l_72 = 21; (l_72 < (-18)); l_72 = safe_sub_func_uint64_t_u_u(l_72, 1))
            { 
                uint32_t l_151 = 0x144FEC2EL;
                l_151 = p_13;
                if (p_13)
                    continue;
                g_98 ^= (l_62[2] = g_25.f0);
            }
        }
        for (g_49 = 0; (g_49 >= 0); g_49 -= 1)
        { 
            int16_t l_155 = 0x721DL;
            if ((l_142 = (l_97 , l_54.f1)))
            { 
                l_152 = g_26;
            }
            else
            { 
                uint32_t l_153 = 4294967293UL;
                l_153 = 1L;
                return l_97;
            }
            for (g_26.f4 = 0; (g_26.f4 >= 0); g_26.f4 -= 1)
            { 
                int16_t l_156 = 1L;
                l_142 ^= (+0xCCF3L);
                g_159--;
            }
        }
    }
    else
    { 
        int16_t l_164 = 0xF368L;
        uint32_t l_174[1][5] = {{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL}};
        int i, j;
        for (g_49 = (-21); (g_49 != (-8)); ++g_49)
        { 
            uint32_t l_165 = 1UL;
            ++l_165;
        }
        l_62[0] &= ((safe_mod_func_uint8_t_u_u((((safe_add_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(l_164, l_164)), (l_174[0][0] ^ (safe_add_func_int64_t_s_s(((l_177 || g_50) <= p_13), l_178))))) | p_13) == l_164), l_174[0][0])) , g_26.f0);
        for (p_13 = 6; (p_13 > 5); p_13 = safe_sub_func_uint16_t_u_u(p_13, 7))
        { 
            l_60 = (l_62[3] = g_98);
        }
    }
    return l_177;
}



static uint64_t  func_15(union U1  p_16, union U4  p_17)
{ 
    int8_t l_44[1];
    int32_t l_45 = (-1L);
    int32_t l_46 = 0xCCFE983DL;
    int32_t l_47 = 0x1B57606AL;
    int32_t l_48 = 0L;
    struct S0 l_53[2] = {{0xE26C5F514FC6BF2ALL,6UL,0x7156L,8L,0x5A41183D96456CFCLL},{0xE26C5F514FC6BF2ALL,6UL,0x7156L,8L,0x5A41183D96456CFCLL}};
    int i;
    for (i = 0; i < 1; i++)
        l_44[i] = 0xDBL;
    ++g_50;
    l_53[0] = l_53[0];
    return p_16.f0;
}



static uint8_t  func_23(union U1  p_24)
{ 
    int16_t l_37 = 0xDAAFL;
    g_26 = g_26;
    if (g_26.f4)
        goto lbl_40;
lbl_40:
    for (g_26.f2 = 2; (g_26.f2 == 5); g_26.f2 = safe_add_func_uint8_t_u_u(g_26.f2, 8))
    { 
        int8_t l_34 = 0x35L;
        int32_t l_38 = 0xBCFB656DL;
        int32_t l_39 = 0xBD5D5181L;
        l_39 = (((((safe_lshift_func_int16_t_s_u((safe_sub_func_uint64_t_u_u((~l_34), p_24.f1)), (l_38 = (g_26.f1 = (safe_add_func_int64_t_s_s(l_37, 0UL)))))) < p_24.f1) | l_34) < p_24.f0) , 0x283019C3L);
        return p_24.f0;
    }
    for (g_26.f2 = 0; (g_26.f2 > (-24)); g_26.f2--)
    { 
        return g_25.f0;
    }
    return g_7;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_4[i][j][k], "g_4[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_5[i][j], "g_5[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_25.f0, "g_25.f0", print_hash_value);
    transparent_crc(g_25.f1, "g_25.f1", print_hash_value);
    transparent_crc(g_26.f0, "g_26.f0", print_hash_value);
    transparent_crc(g_26.f1, "g_26.f1", print_hash_value);
    transparent_crc(g_26.f2, "g_26.f2", print_hash_value);
    transparent_crc(g_26.f3, "g_26.f3", print_hash_value);
    transparent_crc(g_26.f4, "g_26.f4", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_73[i][j], "g_73[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_130.f0, "g_130.f0", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_182[i].f0.f0, "g_182[i].f0.f0", print_hash_value);
        transparent_crc(g_182[i].f0.f1, "g_182[i].f0.f1", print_hash_value);
        transparent_crc(g_182[i].f0.f2, "g_182[i].f0.f2", print_hash_value);
        transparent_crc(g_182[i].f0.f3, "g_182[i].f0.f3", print_hash_value);
        transparent_crc(g_182[i].f0.f4, "g_182[i].f0.f4", print_hash_value);
        transparent_crc(g_182[i].f1, "g_182[i].f1", print_hash_value);
        transparent_crc(g_182[i].f2.f0, "g_182[i].f2.f0", print_hash_value);
        transparent_crc(g_182[i].f2.f1, "g_182[i].f2.f1", print_hash_value);
        transparent_crc(g_182[i].f2.f2, "g_182[i].f2.f2", print_hash_value);
        transparent_crc(g_182[i].f2.f3, "g_182[i].f2.f3", print_hash_value);
        transparent_crc(g_182[i].f2.f4, "g_182[i].f2.f4", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
