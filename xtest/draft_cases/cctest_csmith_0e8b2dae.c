// SPDX-License-Identifier: MIT
// cctest_csmith_0e8b2dae.c --- cctest case csmith_0e8b2dae (csmith seed 244002222)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x39ecffb8 */
/* @exp_ticks 0x1512 */

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

// Options:   -s 244002222 -o /home/agent1/fast_data/tmp/csmith_gen_urqyikpj/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   uint8_t  f0;
   int32_t  f1;
   uint32_t  f2;
   uint32_t  f3;
   int8_t  f4;
   const uint32_t  f5;
};
#pragma pack(pop)

struct S1 {
   uint32_t  f0;
   uint64_t  f1;
   int32_t  f2;
   uint8_t  f3;
   int8_t  f4;
   uint32_t  f5;
};

struct S2 {
   int32_t  f0;
   uint32_t  f1;
};

struct S3 {
   uint8_t  f0;
   uint64_t  f1;
   int64_t  f2;
   int32_t  f3;
};

struct S4 {
   int64_t  f0;
   int16_t  f1;
   int32_t  f2;
   int64_t  f3;
   const uint32_t  f4;
   const struct S2  f5;
};

struct S5 {
   struct S0  f0;
};

#pragma pack(push)
#pragma pack(1)
struct S6 {
   struct S0  f0;
};
#pragma pack(pop)

union U7 {
   uint64_t  f0;
   uint32_t  f1;
   struct S4  f2;
};


static int32_t g_2 = 6L;
static int32_t g_5 = 0xA329EF4AL;
static struct S5 g_21 = {{4UL,0xB1F05996L,18446744073709551607UL,1UL,0L,0xDED69B12L}};
static struct S2 g_60 = {0L,4294967293UL};
static struct S4 g_72[4][4][1] = {{{{1L,0xEE7DL,-1L,0xB259778504067898LL,0xB1ECDBA6L,{0x349BDABDL,1UL}}},{{1L,0xEE7DL,-1L,0xB259778504067898LL,0xB1ECDBA6L,{0x349BDABDL,1UL}}},{{1L,0xEE7DL,-1L,0xB259778504067898LL,0xB1ECDBA6L,{0x349BDABDL,1UL}}},{{1L,0xEE7DL,-1L,0xB259778504067898LL,0xB1ECDBA6L,{0x349BDABDL,1UL}}}},{{{1L,0xEE7DL,-1L,0xB259778504067898LL,0xB1ECDBA6L,{0x349BDABDL,1UL}}},{{1L,0xEE7DL,-1L,0xB259778504067898LL,0xB1ECDBA6L,{0x349BDABDL,1UL}}},{{1L,0xEE7DL,-1L,0xB259778504067898LL,0xB1ECDBA6L,{0x349BDABDL,1UL}}},{{1L,0xEE7DL,-1L,0xB259778504067898LL,0xB1ECDBA6L,{0x349BDABDL,1UL}}}},{{{1L,0xEE7DL,-1L,0xB259778504067898LL,0xB1ECDBA6L,{0x349BDABDL,1UL}}},{{1L,0xEE7DL,-1L,0xB259778504067898LL,0xB1ECDBA6L,{0x349BDABDL,1UL}}},{{1L,0xEE7DL,-1L,0xB259778504067898LL,0xB1ECDBA6L,{0x349BDABDL,1UL}}},{{1L,0xEE7DL,-1L,0xB259778504067898LL,0xB1ECDBA6L,{0x349BDABDL,1UL}}}},{{{1L,0xEE7DL,-1L,0xB259778504067898LL,0xB1ECDBA6L,{0x349BDABDL,1UL}}},{{1L,0xEE7DL,-1L,0xB259778504067898LL,0xB1ECDBA6L,{0x349BDABDL,1UL}}},{{1L,0xEE7DL,-1L,0xB259778504067898LL,0xB1ECDBA6L,{0x349BDABDL,1UL}}},{{1L,0xEE7DL,-1L,0xB259778504067898LL,0xB1ECDBA6L,{0x349BDABDL,1UL}}}}};
static struct S3 g_84 = {255UL,18446744073709551608UL,0x5B6AC954279E96FCLL,9L};
static struct S6 g_87 = {{0x58L,1L,0UL,18446744073709551610UL,4L,4294967287UL}};
static uint64_t g_99 = 18446744073709551614UL;
static uint32_t g_103 = 18446744073709551612UL;
static int32_t g_116 = 0x17C0604EL;
static uint64_t g_117 = 0UL;
static struct S1 g_140 = {18446744073709551615UL,0UL,0L,0x06L,0x86L,0xD54A8836L};
static union U7 g_150 = {18446744073709551615UL};
static uint32_t g_183[3] = {0x65512604L,0x65512604L,0x65512604L};
static int32_t g_213 = 9L;



static struct S6  func_1(void);
static uint32_t  func_8(struct S6  p_9, uint16_t  p_10, struct S3  p_11);
static struct S6  func_12(struct S4  p_13, struct S0  p_14, struct S0  p_15);
static struct S4  func_16(union U7  p_17, int32_t  p_18, struct S5  p_19);




static struct S6  func_1(void)
{ 
    struct S0 l_74 = {251UL,0x4858447AL,4UL,1UL,-1L,0x24D13D8BL};
    struct S3 l_141 = {255UL,0UL,1L,0xF9AE0601L};
    struct S6 l_233[2] = {{{251UL,0x21054FCFL,0xFC426302L,0x740A228FL,1L,0x8D062888L}},{{251UL,0x21054FCFL,0xFC426302L,0x740A228FL,1L,0x8D062888L}}};
    int i;
    for (g_2 = (-19); (g_2 < (-24)); --g_2)
    { 
        union U7 l_20 = {18446744073709551608UL};
        int32_t l_170 = (-8L);
        for (g_5 = 0; (g_5 > 26); ++g_5)
        { 
            struct S0 l_73 = {0x19L,0x92873BCDL,18446744073709551608UL,0xED7563F1L,0x15L,0x73F556C0L};
            int8_t l_171 = 0xEEL;
            if ((func_8(func_12(func_16(l_20, g_2, g_21), l_73, l_74), g_84.f1, l_141) || g_21.f0.f4))
            { 
                int16_t l_156 = 0x567EL;
                l_156 &= l_73.f5;
            }
            else
            { 
                g_87.f0.f1 = ((g_150 , (safe_mod_func_int16_t_s_s((safe_add_func_uint8_t_u_u(g_99, ((safe_lshift_func_uint16_t_u_s(((~(safe_mod_func_int64_t_s_s((safe_mul_func_uint8_t_u_u(g_116, (3L >= l_73.f5))), g_116))) > g_21.f0.f3), l_74.f0)) , 0xF6L))), 1L))) < l_73.f5);
            }
            for (g_140.f3 = 0; (g_140.f3 <= 24); g_140.f3 = safe_add_func_int32_t_s_s(g_140.f3, 3))
            { 
                uint16_t l_172 = 65533UL;
                struct S2 l_175 = {0xBBD9F06AL,1UL};
                int32_t l_180 = 0xDDE750D6L;
                ++l_172;
                l_73.f1 = (l_175 , (((safe_div_func_uint8_t_u_u(((l_170 = 0x5786C627L) || (l_180 = (safe_div_func_uint32_t_u_u((g_150.f1 = g_21.f0.f2), (g_87.f0.f4 | 2L))))), 0xA8L)) <= 0x0F418198974C40A8LL) | g_2));
            }
        }
        for (g_140.f1 = 0; (g_140.f1 == 6); g_140.f1 = safe_add_func_int8_t_s_s(g_140.f1, 4))
        { 
            int32_t l_195[2];
            int32_t l_199 = 0x67ABC463L;
            int8_t l_200 = 0x44L;
            int i;
            for (i = 0; i < 2; i++)
                l_195[i] = 0x1E260467L;
            for (l_141.f0 = 0; (l_141.f0 <= 2); l_141.f0 += 1)
            { 
                int i;
                g_5 = g_183[l_141.f0];
            }
            l_200 &= ((((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s((((safe_mod_func_int32_t_s_s(((l_195[1] = ((+g_21.f0.f0) & (safe_add_func_int64_t_s_s(l_20.f1, l_141.f2)))) ^ (safe_div_func_uint32_t_u_u((safe_unary_minus_func_int8_t_s((-1L))), g_72[2][0][0].f0))), l_74.f0)) || l_20.f0) > 0xC2CA9A2DL), 65535UL)), 3)), g_72[2][0][0].f5.f1)) & l_199) && g_72[2][0][0].f5.f0) && l_195[1]);
            for (l_74.f4 = 0; (l_74.f4 <= (-19)); l_74.f4 = safe_sub_func_uint64_t_u_u(l_74.f4, 9))
            { 
                l_195[0] = 0x43BC25FBL;
                if (g_84.f2)
                    break;
                g_213 ^= ((safe_rshift_func_uint8_t_u_s((safe_div_func_int64_t_s_s((g_21.f0.f4 != (safe_rshift_func_int16_t_s_u(g_21.f0.f5, 13))), (g_99--))), (safe_lshift_func_uint16_t_u_u((g_60 , 0x9408L), l_74.f3)))) == g_87.f0.f2);
            }
        }
    }
    g_2 &= ((g_87.f0.f4 ^= l_141.f0) > (safe_lshift_func_uint16_t_u_s(((safe_div_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((safe_add_func_int8_t_s_s((-1L), ((safe_sub_func_uint16_t_u_u((safe_div_func_int64_t_s_s(g_117, 0x04BBC3627BD82A38LL)), l_141.f2)) && 0x4AL))), l_141.f3)) < g_84.f1), g_87.f0.f1)) >= g_99), l_74.f2)));
    g_87.f0.f1 &= ((l_74.f3 && ((safe_mod_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s(l_74.f2, ((-5L) >= ((!((safe_add_func_int16_t_s_s((g_2 && (-1L)), g_72[2][0][0].f5.f0)) | 0x7AF8241CAF956448LL)) && l_141.f1)))) | 65534UL), 255UL)) == g_140.f3)) && g_84.f0);
    return l_233[0];
}



static uint32_t  func_8(struct S6  p_9, uint16_t  p_10, struct S3  p_11)
{ 
    struct S2 l_142 = {-9L,4294967290UL};
    struct S2 l_143 = {0L,0xB80A7309L};
    int32_t l_144 = 0x4B175C3FL;
    int32_t l_145 = 0x1EE3AC00L;
    struct S5 l_155 = {{2UL,-1L,0x31C8D9C5L,18446744073709551615UL,0L,0x17C74455L}};
    l_145 |= (p_9.f0.f1 = ((((l_143 = (l_142 = (g_60 = l_142))) , p_9.f0.f0) != (l_144 < p_10)) <= l_144));
    g_87.f0.f1 ^= ((safe_rshift_func_uint16_t_u_u((p_10 != (safe_mod_func_uint64_t_u_u(((((func_16(g_150, (((l_142.f1 & (safe_div_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((l_155 , l_155.f0.f2), g_21.f0.f0)), p_9.f0.f5))) <= l_155.f0.f1) || p_9.f0.f5), l_155) , 65534UL) & l_142.f1) > 0x863AF97BL) , 0xA1ADF4364D310EF4LL), g_150.f1))), l_144)) | l_143.f1);
    return l_145;
}



static struct S6  func_12(struct S4  p_13, struct S0  p_14, struct S0  p_15)
{ 
    int64_t l_75[3][5] = {{(-6L),0x6C98A276184417F0LL,(-6L),0x6C98A276184417F0LL,(-6L)},{3L,3L,3L,3L,3L},{(-6L),0x6C98A276184417F0LL,(-6L),0x6C98A276184417F0LL,(-6L)}};
    int32_t l_81[1][3][4] = {{{0x7036B522L,0x7036B522L,0x7036B522L,0x7036B522L},{0x7036B522L,0x7036B522L,0x7036B522L,0x7036B522L},{0x7036B522L,0x7036B522L,0x7036B522L,0x7036B522L}}};
    int16_t l_102 = 1L;
    struct S5 l_115 = {{0xEDL,0xDAE182EBL,0x260482E1L,0x061D4BFAL,0x62L,4294967295UL}};
    uint8_t l_121 = 0xC6L;
    int8_t l_124 = 0x6FL;
    uint32_t l_125 = 7UL;
    struct S6 l_126 = {{255UL,-1L,0x6D0CB552L,0UL,1L,4294967288UL}};
    int i, j, k;
    for (p_14.f3 = 0; (p_14.f3 <= 2); p_14.f3 += 1)
    { 
        int64_t l_80 = 4L;
        int32_t l_95 = 0L;
        struct S2 l_96 = {4L,0x962BC758L};
        l_81[0][0][3] = (safe_div_func_int16_t_s_s(((g_21.f0.f4 = (-1L)) >= (safe_add_func_uint64_t_u_u((l_80 |= g_2), ((0x233BL | g_60.f0) == 9L)))), (-1L)));
        if (((((safe_sub_func_int8_t_s_s((g_84 , ((g_87.f0.f1 = (((((l_81[0][0][3] &= ((safe_rshift_func_uint16_t_u_u((g_87 , ((((safe_lshift_func_uint16_t_u_u(p_13.f3, 11)) , p_15.f1) >= 0UL) != 1L)), p_15.f5)) , 4UL)) ^ l_80) , 0x74L) && p_13.f2) || g_72[2][0][0].f1)) != 0UL)), g_87.f0.f0)) < l_75[2][3]) && g_87.f0.f3) , l_80))
        { 
            uint32_t l_94 = 0x96275E07L;
            int32_t l_97 = 0x2DE282C3L;
            int32_t l_98 = 0x81D642D5L;
            for (g_87.f0.f3 = 0; (g_87.f0.f3 <= 2); g_87.f0.f3 += 1)
            { 
                struct S6 l_92[3][2] = {{{{247UL,0x9CDFBC4FL,0xBB376373L,18446744073709551615UL,0xE9L,0UL}},{{247UL,0x9CDFBC4FL,0xBB376373L,18446744073709551615UL,0xE9L,0UL}}},{{{247UL,0x9CDFBC4FL,0xBB376373L,18446744073709551615UL,0xE9L,0UL}},{{247UL,0x9CDFBC4FL,0xBB376373L,18446744073709551615UL,0xE9L,0UL}}},{{{247UL,0x9CDFBC4FL,0xBB376373L,18446744073709551615UL,0xE9L,0UL}},{{247UL,0x9CDFBC4FL,0xBB376373L,18446744073709551615UL,0xE9L,0UL}}}};
                int i, j;
                l_95 |= (((safe_sub_func_uint8_t_u_u((l_81[0][2][2] = (l_75[p_14.f3][(p_14.f3 + 1)] >= (((((l_92[1][0] , ((l_75[g_87.f0.f3][(g_87.f0.f3 + 2)] , ((+l_94) >= g_84.f1)) & 0x0B4BL)) && l_94) & 0xA5L) < p_14.f0) != 0x3884L))), l_80)) < l_94) , g_21.f0.f5);
                l_96 = g_72[2][0][0].f5;
                if (g_87.f0.f1)
                    goto lbl_120;
            }
            g_99--;
            ++g_103;
        }
        else
        { 
            uint32_t l_106 = 0UL;
            l_106 = l_80;
        }
    }
    if (((g_72[2][0][0].f0 != p_15.f4) <= (g_87.f0.f2 && 0xF4025DD51201156ALL)))
    { 
        for (g_87.f0.f3 = (-15); (g_87.f0.f3 < 21); g_87.f0.f3 = safe_add_func_int8_t_s_s(g_87.f0.f3, 9))
        { 
            if (p_13.f5.f0)
                break;
        }
        if ((g_87.f0.f1 = g_21.f0.f3))
        { 
            for (p_15.f0 = 0; (p_15.f0 < 29); ++p_15.f0)
            { 
                return g_87;
            }
            g_87.f0.f1 = (p_15.f5 ^ ((p_15.f5 >= g_87.f0.f2) <= (((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint64_t_u_u(((l_115 , g_84.f3) & g_60.f0), p_13.f2)), 0)) < g_72[2][0][0].f0) >= l_81[0][1][2])));
        }
        else
        { 
lbl_120:
            --g_117;
            l_121++;
            l_125 = l_124;
        }
        return l_126;
    }
    else
    { 
        uint64_t l_127 = 0x7228B4A309CDAB9FLL;
        int32_t l_128 = (-1L);
        uint16_t l_136 = 65535UL;
        for (g_84.f0 = 0; g_84.f0 < 1; g_84.f0 += 1)
        {
            for (g_84.f2 = 0; g_84.f2 < 3; g_84.f2 += 1)
            {
                for (p_14.f4 = 0; p_14.f4 < 4; p_14.f4 += 1)
                {
                    l_81[g_84.f0][g_84.f2][p_14.f4] = (-7L);
                }
            }
        }
        g_87.f0.f1 ^= ((l_128 = l_127) >= (safe_div_func_uint32_t_u_u(((safe_div_func_int64_t_s_s(((~0x245F2AE77BACE08CLL) & (l_136 &= (safe_div_func_int8_t_s_s(l_127, (g_87.f0.f4 &= 5L))))), g_21.f0.f5)) || p_15.f0), g_117)));
    }
    for (l_125 = (-24); (l_125 >= 6); l_125 = safe_add_func_uint32_t_u_u(l_125, 5))
    { 
        struct S1 l_139 = {0x42FEC1EDL,0x02CC8EED5FA26938LL,0L,255UL,0xE3L,0x00449F6AL};
        g_87.f0.f1 = l_126.f0.f1;
        g_140 = l_139;
    }
    return g_87;
}



static struct S4  func_16(union U7  p_17, int32_t  p_18, struct S5  p_19)
{ 
    uint32_t l_62 = 1UL;
    struct S2 l_65[1][3][2] = {{{{0xC64AC225L,0x50F45F4DL},{0xC64AC225L,0x50F45F4DL}},{{0xC64AC225L,0x50F45F4DL},{0xC64AC225L,0x50F45F4DL}},{{0xC64AC225L,0x50F45F4DL},{0xC64AC225L,0x50F45F4DL}}}};
    int32_t l_71 = 0xFC83C047L;
    int i, j, k;
    for (p_19.f0.f2 = 0; (p_19.f0.f2 == 49); p_19.f0.f2 = safe_add_func_int32_t_s_s(p_19.f0.f2, 3))
    { 
        uint32_t l_24 = 0x13E67DCAL;
        struct S6 l_29 = {{0x46L,0xFF61739BL,18446744073709551609UL,3UL,0x96L,0x9900F1D9L}};
        struct S2 l_66 = {0L,2UL};
        if ((l_24 ^ ((((((safe_add_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((-1L), ((((g_5 && l_24) || p_18) > g_2) , 0xEDL))), p_19.f0.f3)) || l_24) , (-6L)) > g_21.f0.f2) , l_29) , 0x02949612L)))
        { 
            int32_t l_34 = 0xD15778C4L;
            l_34 = (safe_rshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u(l_24, (255UL && 5UL))), 3));
            p_19.f0.f1 &= (safe_lshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_add_func_int32_t_s_s(g_5, 4294967295UL)), ((((((~(safe_mod_func_int64_t_s_s(((safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(((g_21.f0.f3 <= 1UL) == g_2), g_21.f0.f2)), p_19.f0.f0)) < p_19.f0.f3), 0x2B236EDAE8E356D6LL))) > l_34) & p_19.f0.f0) && l_34) < 0x93L) && p_17.f1))), 5));
            l_29.f0.f1 = p_18;
        }
        else
        { 
            int32_t l_61[1];
            int i;
            for (i = 0; i < 1; i++)
                l_61[i] = 0xD0BAECBAL;
            for (l_29.f0.f2 = 0; (l_29.f0.f2 < 44); l_29.f0.f2++)
            { 
                p_18 = ((((((safe_sub_func_int64_t_s_s((((safe_mod_func_int16_t_s_s(((p_19.f0.f0 || (safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u(65535UL, 9)), 3))) && (safe_sub_func_uint16_t_u_u((g_21.f0.f1 == (g_60 , p_17.f1)), g_21.f0.f2))), g_21.f0.f5)) || p_18) | l_61[0]), g_5)) || l_62) || 3UL) < l_24) && 0x3B15L) > p_19.f0.f4);
            }
            for (l_29.f0.f4 = 0; (l_29.f0.f4 >= 0); l_29.f0.f4 -= 1)
            { 
                int i;
                p_19.f0.f1 = (safe_lshift_func_uint16_t_u_s(l_61[l_29.f0.f4], 3));
            }
        }
        l_66 = l_65[0][2][1];
    }
    for (g_21.f0.f0 = 0; (g_21.f0.f0 >= 39); g_21.f0.f0++)
    { 
        l_71 = (safe_sub_func_int32_t_s_s(g_21.f0.f4, g_21.f0.f0));
    }
    return g_72[2][0][0];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_21.f0.f0, "g_21.f0.f0", print_hash_value);
    transparent_crc(g_21.f0.f1, "g_21.f0.f1", print_hash_value);
    transparent_crc(g_21.f0.f2, "g_21.f0.f2", print_hash_value);
    transparent_crc(g_21.f0.f3, "g_21.f0.f3", print_hash_value);
    transparent_crc(g_21.f0.f4, "g_21.f0.f4", print_hash_value);
    transparent_crc(g_21.f0.f5, "g_21.f0.f5", print_hash_value);
    transparent_crc(g_60.f0, "g_60.f0", print_hash_value);
    transparent_crc(g_60.f1, "g_60.f1", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_72[i][j][k].f0, "g_72[i][j][k].f0", print_hash_value);
                transparent_crc(g_72[i][j][k].f1, "g_72[i][j][k].f1", print_hash_value);
                transparent_crc(g_72[i][j][k].f2, "g_72[i][j][k].f2", print_hash_value);
                transparent_crc(g_72[i][j][k].f3, "g_72[i][j][k].f3", print_hash_value);
                transparent_crc(g_72[i][j][k].f4, "g_72[i][j][k].f4", print_hash_value);
                transparent_crc(g_72[i][j][k].f5.f0, "g_72[i][j][k].f5.f0", print_hash_value);
                transparent_crc(g_72[i][j][k].f5.f1, "g_72[i][j][k].f5.f1", print_hash_value);

            }
        }
    }
    transparent_crc(g_84.f0, "g_84.f0", print_hash_value);
    transparent_crc(g_84.f1, "g_84.f1", print_hash_value);
    transparent_crc(g_84.f2, "g_84.f2", print_hash_value);
    transparent_crc(g_84.f3, "g_84.f3", print_hash_value);
    transparent_crc(g_87.f0.f0, "g_87.f0.f0", print_hash_value);
    transparent_crc(g_87.f0.f1, "g_87.f0.f1", print_hash_value);
    transparent_crc(g_87.f0.f2, "g_87.f0.f2", print_hash_value);
    transparent_crc(g_87.f0.f3, "g_87.f0.f3", print_hash_value);
    transparent_crc(g_87.f0.f4, "g_87.f0.f4", print_hash_value);
    transparent_crc(g_87.f0.f5, "g_87.f0.f5", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_140.f0, "g_140.f0", print_hash_value);
    transparent_crc(g_140.f1, "g_140.f1", print_hash_value);
    transparent_crc(g_140.f2, "g_140.f2", print_hash_value);
    transparent_crc(g_140.f3, "g_140.f3", print_hash_value);
    transparent_crc(g_140.f4, "g_140.f4", print_hash_value);
    transparent_crc(g_140.f5, "g_140.f5", print_hash_value);
    transparent_crc(g_150.f1, "g_150.f1", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_183[i], "g_183[i]", print_hash_value);

    }
    transparent_crc(g_213, "g_213", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
