// SPDX-License-Identifier: MIT
// cctest_csmith_aabd7892.c --- cctest case csmith_aabd7892 (csmith seed 2864543890)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x6f24ca51 */
/* @exp_ticks 0x1ba7 */

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

// Options:   -s 2864543890 -o /home/agent1/fast_data/tmp/csmith_gen_z7flv4xd/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int16_t  f0;
   int64_t  f1;
};

union U1 {
   const int32_t  f0;
};


static int32_t g_2 = 0xE7D8A870L;
static int32_t g_7 = (-7L);
static uint32_t g_8 = 0x6160CBEBL;
static int16_t g_29[1][2] = {{0x4448L,0x4448L}};
static uint16_t g_36 = 0UL;
static int8_t g_74 = (-7L);
static int64_t g_77 = (-1L);
static struct S0 g_83[4][2][3] = {{{{0x70F0L,0x5DC534F93D1D1CE1LL},{-1L,0xD7E08CD9178FB6CALL},{-1L,0xD7E08CD9178FB6CALL}},{{-1L,0xD7E08CD9178FB6CALL},{0xC097L,0xF3D9679FF52682FBLL},{0x5E04L,0x358CEDF6E77A780BLL}}},{{{0x70F0L,0x5DC534F93D1D1CE1LL},{0xC097L,0xF3D9679FF52682FBLL},{0x70F0L,0x5DC534F93D1D1CE1LL}},{{1L,0x1A65742D117B57B0LL},{-1L,0xD7E08CD9178FB6CALL},{0x5E04L,0x358CEDF6E77A780BLL}}},{{{1L,0x1A65742D117B57B0LL},{1L,0x1A65742D117B57B0LL},{-1L,0xD7E08CD9178FB6CALL}},{{0x70F0L,0x5DC534F93D1D1CE1LL},{-1L,0xD7E08CD9178FB6CALL},{-1L,0xD7E08CD9178FB6CALL}}},{{{-1L,0xD7E08CD9178FB6CALL},{0xC097L,0xF3D9679FF52682FBLL},{0x5E04L,0x358CEDF6E77A780BLL}},{{0x70F0L,0x5DC534F93D1D1CE1LL},{0xC097L,0xF3D9679FF52682FBLL},{0x70F0L,0x5DC534F93D1D1CE1LL}}}};
static uint32_t g_89 = 0x07040CCAL;
static int16_t g_90 = 0x06D4L;
static int32_t g_94 = 0xDCC553FEL;
static uint32_t g_115 = 0xB0E2D30BL;
static uint32_t g_142[5][4] = {{0UL,0x128F678EL,0x3A62AEAAL,0x128F678EL},{0x128F678EL,4294967295UL,0x3A62AEAAL,0x3A62AEAAL},{0UL,0UL,0x128F678EL,0x3A62AEAAL},{0x47FBB040L,4294967295UL,0x47FBB040L,0x128F678EL},{0x47FBB040L,0x128F678EL,0x128F678EL,0x47FBB040L}};
static int32_t g_149 = 0x56848F5EL;
static uint32_t g_150 = 0x0A174F72L;
static int8_t g_157 = 4L;
static int32_t g_160[4][5] = {{1L,1L,1L,1L,1L},{0x9E2955A4L,0x9E2955A4L,0x9E2955A4L,0x9E2955A4L,0x9E2955A4L},{1L,1L,1L,1L,1L},{0x9E2955A4L,0x9E2955A4L,0x9E2955A4L,0x9E2955A4L,0x9E2955A4L}};
static int8_t g_191 = 0xE2L;
static uint64_t g_194 = 18446744073709551615UL;
static int32_t g_209 = 0x32A9E99FL;
static uint16_t g_223 = 1UL;
static int64_t g_228 = 0xE499BA86230F59ADLL;
static uint64_t g_229 = 18446744073709551612UL;
static uint8_t g_235 = 0x6AL;
static int32_t g_255[4][1][2] = {{{0x188FF261L,(-7L)}},{{(-7L),0x188FF261L}},{{(-7L),(-7L)}},{{0x188FF261L,(-7L)}}};
static uint32_t g_301 = 0x85B639F8L;
static int16_t g_302 = 5L;



static uint32_t  func_1(void);
static int32_t  func_12(int32_t  p_13, uint32_t  p_14, int32_t  p_15, struct S0  p_16, uint64_t  p_17);
static int32_t  func_18(int64_t  p_19, uint16_t  p_20, uint32_t  p_21, uint64_t  p_22, union U1  p_23);
static struct S0  func_40(int64_t  p_41, union U1  p_42, uint32_t  p_43);




static uint32_t  func_1(void)
{ 
    uint8_t l_6[4][5][1] = {{{1UL},{0xBDL},{0UL},{0xBDL},{1UL}},{{0x0EL},{0x0EL},{1UL},{0xBDL},{0UL}},{{0xBDL},{1UL},{0x0EL},{0x0EL},{1UL}},{{0xBDL},{0UL},{0xBDL},{1UL},{0x0EL}}};
    int64_t l_28 = 0L;
    int32_t l_278 = 0x7589B656L;
    int32_t l_279 = 0L;
    int i, j, k;
    for (g_2 = 0; (g_2 != 17); g_2++)
    { 
        const uint64_t l_5 = 0x4D073FF82FF40FC0LL;
        int16_t l_147 = 0x720EL;
        l_6[3][1][0] = l_5;
        for (g_7 = 0; (g_7 >= 0); g_7 -= 1)
        { 
            uint32_t l_9 = 0xD303F024L;
            union U1 l_30 = {0x2305ABA9L};
            int32_t l_261 = 5L;
            int32_t l_269 = 0xA00DFFD0L;
            uint16_t l_270[1];
            int i;
            for (i = 0; i < 1; i++)
                l_270[i] = 0x7F2BL;
            g_8 = 0x59141A9CL;
            for (g_8 = 0; (g_8 <= 0); g_8 += 1)
            { 
                struct S0 l_146 = {0x5703L,0xDBD5D31C8896062BLL};
                int32_t l_258 = (-1L);
                int i, j, k;
                --l_9;
                l_258 = func_12(func_18(l_6[(g_8 + 2)][(g_7 + 1)][g_7], l_6[(g_8 + 2)][(g_7 + 1)][g_7], (l_5 | (safe_div_func_int32_t_s_s((g_29[0][1] |= (((safe_mod_func_int64_t_s_s(0x58B39D20578CCA69LL, 18446744073709551608UL)) & l_28) , l_9)), g_7))), l_6[(g_8 + 2)][(g_7 + 1)][g_7], l_30), l_5, l_30.f0, l_146, l_147);
                g_255[3][0][0] ^= (l_270[0] = ((safe_mul_func_int8_t_s_s((l_261 = 8L), (safe_div_func_int32_t_s_s((l_269 = (safe_mul_func_int16_t_s_s((l_6[3][2][0] & l_6[0][3][0]), (((safe_mul_func_uint16_t_u_u((((~l_146.f1) , 0UL) , l_28), g_74)) , l_258) <= g_74)))), g_36)))) && g_223));
            }
            for (g_90 = 0; (g_90 >= 0); g_90 -= 1)
            { 
                int i, j, k;
                return l_6[(g_7 + 3)][g_90][g_90];
            }
        }
    }
    l_279 = (safe_div_func_int64_t_s_s(((l_278 = ((safe_div_func_uint64_t_u_u(((safe_mul_func_uint16_t_u_u(0xA762L, g_29[0][1])) || (((((0x801E87ECL > ((~(l_6[3][3][0] >= g_142[2][3])) || g_94)) < l_6[3][1][0]) > 0xF71EL) <= l_6[1][3][0]) , 0UL)), l_6[3][2][0])) != g_255[0][0][0])) == g_142[1][3]), 0x62B3BEA07A3B2D89LL));
    for (g_228 = 0; (g_228 <= 28); g_228 = safe_add_func_uint16_t_u_u(g_228, 8))
    { 
        int8_t l_284 = 0x63L;
        const int32_t l_287 = (-1L);
        int32_t l_288 = (-1L);
        struct S0 l_289 = {1L,0L};
        uint64_t l_291 = 18446744073709551609UL;
        l_278 = 0xEEE24A96L;
        for (l_279 = 0; (l_279 < (-21)); l_279 = safe_sub_func_int8_t_s_s(l_279, 7))
        { 
            struct S0 l_290 = {-8L,-4L};
            uint8_t l_294 = 0x25L;
            l_290 = (((((l_278 = 0x2EL) > ((((l_288 ^= (l_284 | ((safe_sub_func_int32_t_s_s((l_6[1][3][0] <= l_287), l_284)) & g_223))) , g_83[2][0][0]) , g_194) | l_287)) | g_223) , 0x09B5DD46L) , l_289);
            --l_291;
            if (l_294)
                continue;
        }
        g_302 &= (g_7 = ((safe_lshift_func_uint8_t_u_s(g_160[2][3], (((l_288 = (g_235 < (safe_add_func_uint16_t_u_u((((((g_2 = ((safe_mod_func_uint64_t_u_u(((g_301 = g_255[3][0][0]) | (g_255[3][0][0] == g_229)), g_29[0][1])) ^ l_6[2][2][0])) < g_83[2][0][0].f1) ^ g_229) > l_28) >= l_6[3][1][0]), l_6[3][1][0])))) >= 0x0FDEL) | 0L))) != (-5L)));
    }
    return g_160[2][2];
}



static int32_t  func_12(int32_t  p_13, uint32_t  p_14, int32_t  p_15, struct S0  p_16, uint64_t  p_17)
{ 
    int16_t l_148 = 0x16ADL;
    int32_t l_156 = (-5L);
    int32_t l_158 = 0x8C5F53CAL;
    int32_t l_159 = 0x54331F87L;
    int16_t l_216 = (-1L);
lbl_242:
    l_159 = (((++g_150) < 0xE7BDFF3717488B34LL) , ((~(p_13 >= (((safe_mod_func_uint16_t_u_u((((l_158 ^= ((g_149 == ((g_157 = (l_156 = p_15)) && p_13)) > p_14)) >= l_148) & 0xE63CL), (-10L))) || g_157) <= (-3L)))) == g_142[2][2]));
    g_160[2][3] = (p_15 = g_29[0][1]);
    if ((safe_rshift_func_uint8_t_u_s(((safe_div_func_int8_t_s_s((l_156 = (safe_lshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_u(g_160[2][3], (safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(((safe_div_func_int32_t_s_s(((safe_sub_func_uint64_t_u_u((p_17 &= p_16.f1), (safe_rshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s(((safe_div_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(0x61E2L, p_13)), 0x45E1L)), 0x07FB85FA97D6553ELL)) != g_160[0][2]), g_160[2][3])), l_158)))) >= g_77), 0x0598F6BBL)) >= p_14), 10)), g_142[2][3])))), 15))), 0xAAL)) > l_158), 2)))
    { 
        union U1 l_189 = {0xA619E33AL};
        int32_t l_193 = 0xA128F761L;
        p_15 = (safe_div_func_int16_t_s_s((g_142[0][3] < (g_29[0][1] = p_16.f1)), 0xBBA3L));
        if ((l_189 , 1L))
        { 
            int32_t l_190 = 0L;
            int32_t l_192 = 1L;
            uint32_t l_197 = 1UL;
            g_194++;
            return l_197;
        }
        else
        { 
            uint32_t l_208 = 4294967293UL;
            int32_t l_222 = (-6L);
            for (g_77 = 29; (g_77 != 24); g_77 = safe_sub_func_uint16_t_u_u(g_77, 5))
            { 
                uint16_t l_221 = 65535UL;
                g_209 = (safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(l_189.f0, ((l_189 , (((((g_36 = (safe_lshift_func_int8_t_s_s((0x36203765L != (p_16.f1 || p_17)), 2))) & 0xEC0DL) != p_16.f0) ^ p_16.f1) > l_208)) && 4294967295UL))) <= p_17), 4)), g_83[2][0][0].f0));
                g_223 = (l_222 &= (safe_mul_func_uint8_t_u_u((((safe_div_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(l_208, ((l_216 < ((safe_div_func_uint64_t_u_u(18446744073709551615UL, (safe_add_func_uint16_t_u_u((255UL || p_16.f0), l_221)))) | g_157)) ^ 0x3D7E0BF0153984BCLL))), 0x44L)) || g_94) & p_14), l_208)));
            }
            g_228 ^= ((p_14 == (l_222 = ((l_159 | (safe_div_func_int64_t_s_s((safe_lshift_func_int8_t_s_u((l_193 = ((p_16.f1 & (p_15 , g_160[3][4])) ^ p_15)), 6)), 5L))) >= g_83[2][0][0].f1))) || p_15);
            g_83[2][0][0] = p_16;
        }
        ++g_229;
    }
    else
    { 
        uint32_t l_234 = 0UL;
        uint64_t l_257 = 0x877F9590D3685983LL;
        g_235 = (safe_mul_func_uint8_t_u_u(0x10L, (l_234 = p_16.f1)));
        if (g_29[0][0])
        { 
            return l_234;
        }
        else
        { 
            int8_t l_238 = 3L;
            struct S0 l_241 = {1L,0L};
            int32_t l_243 = 0x87ACA667L;
            uint32_t l_250 = 0xF9C14EDBL;
            int32_t l_256 = (-5L);
            if (((((safe_rshift_func_uint16_t_u_s((g_228 >= l_238), p_13)) == ((safe_rshift_func_uint8_t_u_u((((l_241 = p_16) , l_241) , 0x21L), 4)) & g_94)) <= p_16.f1) | 0x8BB1L))
            { 
                if (p_14)
                    goto lbl_242;
            }
            else
            { 
                l_243 &= p_14;
                l_257 = (safe_mod_func_uint64_t_u_u(((g_191 &= ((((safe_rshift_func_int16_t_s_s(((((safe_mod_func_uint8_t_u_u(l_250, p_16.f0)) >= (((safe_unary_minus_func_uint16_t_u(l_158)) , (l_256 = (((((g_255[3][0][0] = (safe_rshift_func_int16_t_s_s((l_243 = (safe_unary_minus_func_int8_t_s(l_234))), 1))) && p_15) >= g_29[0][1]) , l_158) || 0L))) != g_160[2][3])) ^ 0x75L) ^ l_241.f1), p_16.f0)) == l_250) | (-1L)) > 0x336C056FL)) && g_2), l_234));
                return p_14;
            }
        }
    }
    return p_15;
}



static int32_t  func_18(int64_t  p_19, uint16_t  p_20, uint32_t  p_21, uint64_t  p_22, union U1  p_23)
{ 
    int32_t l_32[2][5][4];
    struct S0 l_145 = {0x2934L,5L};
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
                l_32[i][j][k] = 0x84B52DD8L;
        }
    }
    g_36 |= ((~(l_32[1][4][3] , 0x70D28E48L)) && (0UL == (+((safe_lshift_func_int16_t_s_s((0x6903L > 0x0C43L), 15)) , 0xACL))));
    for (g_36 = 27; (g_36 >= 19); --g_36)
    { 
        uint64_t l_39[5] = {0xAACC702B5BDDDD5DLL,0xAACC702B5BDDDD5DLL,0xAACC702B5BDDDD5DLL,0xAACC702B5BDDDD5DLL,0xAACC702B5BDDDD5DLL};
        int32_t l_54[5][5] = {{0x153D5795L,0x309CE07BL,0x153D5795L,0x309CE07BL,0x153D5795L},{0xDE216D72L,0xA13735CAL,0xA13735CAL,0xDE216D72L,0xDE216D72L},{1L,0x309CE07BL,1L,0x309CE07BL,1L},{0xDE216D72L,0xDE216D72L,0xA13735CAL,0xA13735CAL,0xDE216D72L},{0x153D5795L,0x309CE07BL,0x153D5795L,0x309CE07BL,0x153D5795L}};
        int i, j;
        for (p_21 = 0; (p_21 <= 0); p_21 += 1)
        { 
            union U1 l_44 = {0L};
            struct S0 l_45 = {0x783DL,0x47DC46221EB1ED30LL};
            uint32_t l_52 = 4294967295UL;
            int8_t l_53 = 0x6EL;
            for (p_20 = 0; (p_20 <= 0); p_20 += 1)
            { 
                int i, j, k;
                l_32[p_21][(p_20 + 4)][(p_20 + 1)] = (-4L);
                l_39[2] = p_22;
            }
            g_83[0][1][0] = func_40(p_22, l_44, (l_45 , (l_54[0][3] = (((safe_mod_func_uint32_t_u_u((((safe_div_func_uint16_t_u_u((safe_add_func_int16_t_s_s((g_8 > l_52), 0x7AB8L)), g_8)) && l_53) == l_45.f1), 0xDDD7AD25L)) == p_20) == l_32[1][4][3]))));
        }
        g_83[2][0][0] = l_145;
    }
    return l_145.f1;
}



static struct S0  func_40(int64_t  p_41, union U1  p_42, uint32_t  p_43)
{ 
    uint32_t l_69 = 18446744073709551610UL;
    int32_t l_78 = (-7L);
    uint64_t l_95[5][2] = {{0UL,0UL},{0UL,6UL},{18446744073709551613UL,8UL},{6UL,8UL},{18446744073709551613UL,6UL}};
    int32_t l_117 = 1L;
    int32_t l_118 = 2L;
    int32_t l_119 = 0x753BB745L;
    int i, j;
    if ((safe_div_func_uint16_t_u_u(5UL, (safe_mul_func_int8_t_s_s((safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_int8_t_s_s((-4L), g_8)) && (((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(l_69, 6)), g_29[0][0])) < p_42.f0) == 0x0EL)), 0)), p_43)), p_43)))))
    { 
        uint64_t l_80 = 0UL;
        struct S0 l_84[4] = {{0x60D0L,1L},{0x60D0L,1L},{0x60D0L,1L},{0x60D0L,1L}};
        int32_t l_116 = 0L;
        int i;
        for (p_43 = 0; (p_43 >= 1); p_43 = safe_add_func_uint32_t_u_u(p_43, 2))
        { 
            int8_t l_76[1];
            int32_t l_79 = 6L;
            int i;
            for (i = 0; i < 1; i++)
                l_76[i] = (-2L);
            for (l_69 = (-11); (l_69 == 33); ++l_69)
            { 
                int32_t l_75 = 0x328DA4CDL;
                g_74 ^= (-8L);
                if (p_42.f0)
                    continue;
                l_80--;
            }
            l_84[2] = g_83[2][0][0];
            for (g_74 = 0; (g_74 != (-30)); g_74 = safe_sub_func_uint32_t_u_u(g_74, 1))
            { 
                uint8_t l_91 = 0x5CL;
                g_89 = (g_77 , ((p_42.f0 || ((safe_lshift_func_uint16_t_u_s(((p_42.f0 , p_42.f0) , l_79), l_84[2].f1)) < p_42.f0)) ^ l_84[2].f0));
                ++l_91;
                g_94 = 0x34CA839EL;
            }
        }
        l_95[1][0] ^= 0x068BD6B8L;
        l_119 ^= (+(l_118 = (safe_add_func_int64_t_s_s(((safe_add_func_int32_t_s_s(0x0BB484B0L, (((((safe_sub_func_uint8_t_u_u(((l_117 = (safe_sub_func_uint64_t_u_u((l_78 = l_69), (safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((l_116 = (safe_rshift_func_uint16_t_u_s(0UL, (safe_sub_func_int32_t_s_s((g_115 = (safe_rshift_func_int8_t_s_u(l_84[2].f1, l_95[1][0]))), 0xD3F7D50AL))))), l_95[1][1])), p_42.f0))))) > p_42.f0), l_69)) || 0L) == l_95[0][0]) && 0x98B4L) < g_2))) ^ p_41), l_95[1][0]))));
    }
    else
    { 
        int32_t l_133 = 1L;
        if (l_78)
        { 
            int32_t l_134 = 0L;
            int32_t l_135 = 0xFA34A9EDL;
            uint8_t l_140 = 0x89L;
            int32_t l_141[1][5][4] = {{{0x9608170AL,0x9608170AL,0x9608170AL,0x9608170AL},{0x9608170AL,0x9608170AL,0x9608170AL,0x9608170AL},{0x9608170AL,0x9608170AL,0x9608170AL,0x9608170AL},{0x9608170AL,0x9608170AL,0x9608170AL,0x9608170AL},{0x9608170AL,0x9608170AL,0x9608170AL,0x9608170AL}}};
            int i, j, k;
            l_135 = (((((safe_unary_minus_func_uint64_t_u((safe_add_func_int8_t_s_s(0x43L, (((((safe_mul_func_uint8_t_u_u(((safe_add_func_int64_t_s_s((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(l_117, 8)), ((p_42.f0 > (safe_sub_func_int32_t_s_s((l_133 ^ p_42.f0), p_42.f0))) & g_2))), 0UL)) > l_134), l_95[1][0])) >= p_43) >= 0x4ADDL) & g_89) || p_41))))) , p_43) <= g_7) || 4294967295UL) > l_135);
            l_78 |= (safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((l_140 >= 0xEAF9A50DF4C6C2C3LL), ((l_135 = g_83[2][0][0].f0) <= (l_141[0][2][0] = p_42.f0)))), 1L));
        }
        else
        { 
            --g_142[2][3];
        }
    }
    return g_83[2][0][0];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_29[i][j], "g_29[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_83[i][j][k].f0, "g_83[i][j][k].f0", print_hash_value);
                transparent_crc(g_83[i][j][k].f1, "g_83[i][j][k].f1", print_hash_value);

            }
        }
    }
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_142[i][j], "g_142[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_160[i][j], "g_160[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_191, "g_191", print_hash_value);
    transparent_crc(g_194, "g_194", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    transparent_crc(g_223, "g_223", print_hash_value);
    transparent_crc(g_228, "g_228", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    transparent_crc(g_235, "g_235", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_255[i][j][k], "g_255[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_301, "g_301", print_hash_value);
    transparent_crc(g_302, "g_302", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
