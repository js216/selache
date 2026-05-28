// SPDX-License-Identifier: MIT
// cctest_csmith_929cc277.c --- cctest case csmith_929cc277 (csmith seed 2459746935)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x9599caf6 */
/* @exp_ticks 0x4c50 */

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

// Options:   -s 2459746935 -o /tmp/csmith_gen_3b1z40ot/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static uint32_t g_8 = 0UL;
static int32_t g_12 = 0x348CC383L;
static int16_t g_17 = 0x5378L;
static int32_t g_18 = 0L;
static int16_t g_35[2][2] = {{(-7L),(-7L)},{(-7L),(-7L)}};
static uint64_t g_45 = 5UL;
static int8_t g_56 = 0x19L;
static int16_t g_60 = 0x73CAL;
static uint16_t g_61 = 0xDAEAL;
static int16_t g_75 = 0xC7FBL;
static int32_t g_98[3] = {0x41B8E2A6L,0x41B8E2A6L,0x41B8E2A6L};
static int16_t g_108 = 0xF9F9L;
static uint32_t g_128 = 4294967295UL;
static uint16_t g_133[4][1] = {{0x9CC6L},{1UL},{0x9CC6L},{1UL}};
static const uint64_t g_156 = 5UL;
static int16_t g_157 = (-1L);
static uint8_t g_199[4] = {0xDAL,0xDAL,0xDAL,0xDAL};
static int64_t g_209 = 9L;
static int32_t g_210 = 0x9F1796B5L;
static int32_t g_212 = 0xD140F5BEL;
static uint32_t g_214 = 0x04334622L;
static int16_t g_219 = 0x6281L;
static uint32_t g_222 = 0x2B2F5051L;
static uint8_t g_226[1][2] = {{255UL,255UL}};
static uint64_t g_255 = 1UL;
static uint16_t g_281[2] = {9UL,9UL};



static uint8_t  func_1(void);
static int64_t  func_2(const uint32_t  p_3, int32_t  p_4, uint8_t  p_5, uint32_t  p_6);
static int16_t  func_25(const uint32_t  p_26, int32_t  p_27, int64_t  p_28, const int32_t  p_29);




static uint8_t  func_1(void)
{ 
    uint8_t l_7 = 8UL;
    uint16_t l_207[2];
    int32_t l_211 = (-7L);
    int32_t l_213 = 0L;
    uint16_t l_280 = 0x75C7L;
    int32_t l_282 = 1L;
    int32_t l_283 = (-5L);
    int i;
    for (i = 0; i < 2; i++)
        l_207[i] = 0UL;
    if (((func_2((((l_7 , 0x36F6DD8DL) >= (l_7 != g_8)) , l_7), g_8, l_7, l_7) ^ 0UL) , l_7))
    { 
        uint64_t l_193 = 0xD6A9AA89525BE554LL;
        int32_t l_198[2][2] = {{0x171D35FCL,0x171D35FCL},{0x171D35FCL,0x171D35FCL}};
        int32_t l_200[3];
        int64_t l_208 = 0x5317331A696AE1DCLL;
        int i, j;
        for (i = 0; i < 3; i++)
            l_200[i] = (-1L);
        l_200[0] = (g_199[2] = (l_198[1][1] = (safe_lshift_func_uint8_t_u_s(((((l_193 == ((safe_div_func_uint16_t_u_u(((65533UL & (safe_mod_func_uint64_t_u_u((0xC73AE716L || l_7), 0x28D867FBE65A3C54LL))) , 65535UL), 0x213DL)) <= 246UL)) ^ 4294967292UL) != g_8) >= g_156), 2))));
        l_208 = (safe_add_func_int8_t_s_s((g_56 ^= ((safe_rshift_func_int8_t_s_u(((safe_mul_func_int16_t_s_s(g_156, (((g_133[1][0] != l_198[1][0]) | 250UL) > l_198[0][0]))) ^ 0x9E77FEEEL), l_207[0])) , g_133[1][0])), l_200[0]));
        ++g_214;
    }
    else
    { 
        int64_t l_236 = 0xAD24C2FD106FB5F6LL;
        int32_t l_245 = 0L;
        g_219 = (safe_rshift_func_uint8_t_u_u(l_213, (g_199[1] = g_108)));
        for (g_75 = 0; (g_75 < 15); g_75 = safe_add_func_int32_t_s_s(g_75, 1))
        { 
            int64_t l_225 = 1L;
            for (l_213 = 1; (l_213 >= 0); l_213 -= 1)
            { 
                int i, j;
                g_222 = (-4L);
                g_226[0][1] |= (safe_div_func_uint32_t_u_u(((254UL == g_35[l_213][l_213]) ^ (l_225 != 1UL)), l_225));
                l_236 |= ((safe_div_func_uint64_t_u_u(((g_35[l_213][l_213] = 0x8976L) | (safe_unary_minus_func_int64_t_s((safe_add_func_uint32_t_u_u(0x19D7C79DL, ((safe_div_func_uint32_t_u_u((safe_div_func_uint8_t_u_u(g_8, 0xB2L)), g_61)) , 4294967290UL)))))), l_207[0])) != g_56);
            }
            for (g_108 = 0; (g_108 < 29); g_108 = safe_add_func_uint16_t_u_u(g_108, 1))
            { 
                int32_t l_242 = 0x0D3EC592L;
                l_245 ^= ((safe_mul_func_uint8_t_u_u((+(g_45 , l_242)), (safe_div_func_int16_t_s_s(0x0280L, 0x4786L)))) || l_7);
            }
        }
        for (g_61 = 0; (g_61 <= 1); g_61 += 1)
        { 
            for (l_213 = 1; (l_213 >= 0); l_213 -= 1)
            { 
                int i, j;
                if (g_35[l_213][g_61])
                    break;
                if (g_35[l_213][g_61])
                    continue;
            }
            for (g_8 = 0; (g_8 <= 1); g_8 += 1)
            { 
                int i, j;
                l_213 = (((safe_lshift_func_uint8_t_u_s((safe_div_func_uint16_t_u_u(g_35[g_61][g_8], (safe_add_func_int8_t_s_s((~((l_245 = (safe_rshift_func_uint16_t_u_s(0UL, 9))) | (g_255 &= (g_35[g_61][g_8] && 0x9AL)))), l_236)))), 6)) >= 65526UL) | 0x29D52229L);
            }
        }
    }
    l_283 ^= (safe_mod_func_int16_t_s_s((g_98[2] >= (safe_mod_func_uint16_t_u_u((0x9EDBL <= ((l_213 = ((safe_mod_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u((safe_div_func_int32_t_s_s((((((((safe_add_func_uint16_t_u_u((((~(safe_div_func_uint16_t_u_u((safe_unary_minus_func_uint8_t_u(((g_255 |= (safe_mod_func_uint64_t_u_u((safe_lshift_func_int8_t_s_u(((l_207[0] | g_209) || 65535UL), 3)), g_60))) != 0L))), 3L))) >= l_207[0]) ^ g_60), g_199[3])) == l_7) | g_35[1][1]) , l_280) == l_211) > l_7) , g_281[1]), g_17)), l_207[0])) | g_61), l_280)) < 0xE568L), l_282)), l_207[0])) | l_207[0])) | 0x47L)), g_212))), g_210));
    return g_8;
}



static int64_t  func_2(const uint32_t  p_3, int32_t  p_4, uint8_t  p_5, uint32_t  p_6)
{ 
    int32_t l_9 = 0xB03E3869L;
    int32_t l_13[3][1];
    const uint32_t l_107[4][2] = {{4294967290UL,5UL},{4294967290UL,4294967290UL},{5UL,4294967290UL},{4294967290UL,5UL}};
    uint32_t l_118 = 0xC6DC0DC4L;
    int32_t l_158 = 0L;
    const int8_t l_173 = 0x58L;
    int32_t l_174[4][1] = {{1L},{0xDAC23FC5L},{1L},{0xDAC23FC5L}};
    uint16_t l_189 = 0xB388L;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_13[i][j] = (-1L);
    }
lbl_159:
    if (l_9)
    { 
        uint64_t l_30[3];
        int8_t l_31 = 0x90L;
        int32_t l_76 = (-8L);
        int i;
        for (i = 0; i < 3; i++)
            l_30[i] = 0x3E458C458A922A19LL;
lbl_57:
        p_4 = p_6;
        for (l_9 = (-23); (l_9 == 14); l_9++)
        { 
            uint64_t l_14 = 0xBD921B0AE28DE637LL;
            int32_t l_19 = 0x136DC992L;
            int32_t l_85 = (-4L);
            uint8_t l_86[3];
            int8_t l_96 = 0x2EL;
            int i;
            for (i = 0; i < 3; i++)
                l_86[i] = 0xDFL;
            l_14--;
            if (l_13[2][0])
            { 
                uint8_t l_20[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_20[i] = 0xA3L;
                l_20[1]--;
                l_13[2][0] = (safe_mul_func_int16_t_s_s(func_25(((l_14 > l_30[0]) , (p_3 != l_31)), g_17, g_8, l_14), p_5));
                if (p_6)
                    goto lbl_57;
            }
            else
            { 
                l_19 = (0x6A420A61L && (safe_rshift_func_uint16_t_u_u(65527UL, 6)));
                --g_61;
                if (p_6)
                    goto lbl_159;
                l_76 = (((!((p_5 , (((safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s(p_4, 2)) ^ (safe_mul_func_int8_t_s_s((l_19 > 1UL), p_5))), g_12)), 4)), g_75)) & 1UL) != g_56)) & 1L)) != p_3) , l_19);
            }
            if ((((safe_mod_func_uint32_t_u_u(0xA07EB839L, g_75)) >= (l_85 |= (l_19 = (safe_lshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u((safe_mod_func_int64_t_s_s(0x4B34BCD0122BF4B2LL, 0xFD32083B01F68849LL)), 10)) == 0UL), 2))))) == l_13[0][0]))
            { 
                ++l_86[0];
            }
            else
            { 
                int64_t l_97 = (-1L);
                g_98[2] = ((((((safe_unary_minus_func_int8_t_s((safe_div_func_int64_t_s_s((safe_add_func_uint32_t_u_u(l_86[1], ((safe_mod_func_int16_t_s_s((p_4 && ((l_96 = (-1L)) , 0x9B07L)), l_86[0])) & p_6))), g_45)))) ^ p_6) , p_3) != l_19) > p_3) , l_97);
            }
        }
        if ((safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((g_56 = (((safe_rshift_func_int16_t_s_s((((g_35[1][1] = (safe_sub_func_int16_t_s_s((((l_76 ^= p_3) <= l_107[2][0]) ^ 0x9C03L), g_98[2]))) <= 1UL) == g_98[2]), 2)) < g_61) , p_5)), p_3)), 0xBFL)))
        { 
            g_108 = (-1L);
        }
        else
        { 
            int32_t l_121 = 0xC632212AL;
            for (g_60 = 0; (g_60 <= 2); g_60 += 1)
            { 
                int32_t l_122 = 0L;
                int i;
                l_122 &= (~(((safe_div_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(((((safe_div_func_int16_t_s_s(l_30[g_60], (g_35[0][0] = (safe_div_func_uint64_t_u_u(((g_45 = l_118) && (safe_add_func_uint64_t_u_u(((l_76 = l_30[g_60]) && g_18), p_3))), g_98[2]))))) > p_5) && g_60) > 0xF60329ECL), 255UL)), g_56)) <= l_121) & g_8));
            }
        }
    }
    else
    { 
        uint64_t l_134 = 1UL;
        int32_t l_141 = 0xFB0DC278L;
        for (g_61 = 16; (g_61 != 19); g_61 = safe_add_func_uint8_t_u_u(g_61, 3))
        { 
            uint8_t l_125[4][4] = {{0x43L,0xB2L,0xB2L,0x43L},{0xB2L,0x43L,0xB2L,0xB2L},{0x43L,0x43L,255UL,0xB2L},{0xB2L,255UL,255UL,0xB2L}};
            int i, j;
            if (g_35[1][1])
                break;
            if (p_4)
                continue;
            l_13[2][0] = (l_9 = l_125[2][3]);
        }
        if ((l_13[2][0] = l_9))
        { 
            if (p_4)
            { 
                return g_35[1][1];
            }
            else
            { 
                g_128 |= (((-10L) > ((0x9FL & (safe_lshift_func_int16_t_s_s((-10L), 3))) <= 0x657C9A1150147E15LL)) , g_18);
            }
        }
        else
        { 
            uint8_t l_142 = 0UL;
            int32_t l_143 = (-9L);
            for (p_6 = 0; (p_6 <= 1); p_6 += 1)
            { 
                int i;
                p_4 = g_98[(p_6 + 1)];
                p_4 = ((--g_61) | ((safe_add_func_uint64_t_u_u(((g_133[1][0] = 247UL) | (--l_134)), (l_143 &= ((safe_mul_func_int16_t_s_s(((((safe_div_func_uint16_t_u_u(65530UL, g_98[p_6])) == l_141) > 0x97A7083D25ECE1F0LL) && 0x00BCL), g_98[(p_6 + 1)])) > l_142)))) , g_60));
            }
            p_4 = (l_158 &= (safe_sub_func_uint32_t_u_u(((((safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u(((g_157 = ((((l_9 && (((safe_lshift_func_int16_t_s_u((-1L), (((safe_sub_func_uint64_t_u_u(((safe_div_func_uint32_t_u_u(p_3, p_4)) , 18446744073709551615UL), p_6)) <= 18446744073709551606UL) | g_156))) < l_142) < 0xBC9C3F61L)) ^ l_13[2][0]) ^ p_4) == 65529UL)) & 0x77F1D446CA203848LL), 0)), p_4)) > 0x39L) | g_98[1]) > g_98[2]), 0x20CC15F2L)));
        }
    }
    for (p_4 = 24; (p_4 > (-30)); p_4 = safe_sub_func_int8_t_s_s(p_4, 1))
    { 
        int32_t l_175 = (-5L);
        int32_t l_188 = 0x3DDA549CL;
        int32_t l_190[3];
        int i;
        for (i = 0; i < 3; i++)
            l_190[i] = 0L;
        l_175 |= ((g_56 , (safe_rshift_func_int16_t_s_s((safe_add_func_int32_t_s_s((!((safe_lshift_func_uint16_t_u_u((((safe_div_func_int16_t_s_s((l_13[1][0] = l_118), ((safe_add_func_uint64_t_u_u(((((p_3 == p_6) && 0xF24046D94E14C39ALL) ^ l_173) , l_174[3][0]), (-1L))) , p_3))) && p_5) , g_157), p_5)) || l_107[3][1])), g_56)), 9))) < g_45);
        for (g_60 = 0; (g_60 < (-8)); g_60 = safe_sub_func_int64_t_s_s(g_60, 9))
        { 
            l_13[1][0] = (l_190[2] ^= ((safe_div_func_int32_t_s_s((-8L), (((safe_div_func_int64_t_s_s((safe_sub_func_int8_t_s_s(((l_188 = ((~(g_56 = ((g_61 &= ((p_6 && (((l_9 = (safe_mod_func_uint32_t_u_u((((~(((0x1E0092A32DB51A9ELL < g_35[1][1]) & l_158) < 0x8CL)) && 1L) <= p_4), 0x291BC3C6L))) >= p_6) , 1L)) != l_174[0][0])) > g_156))) < p_5)) != l_175), l_189)), 0x35F78ABD92496885LL)) , g_45) , 0x3CB69A33L))) >= 0UL));
            if (p_4)
                continue;
        }
        l_158 &= 0L;
    }
    return p_4;
}



static int16_t  func_25(const uint32_t  p_26, int32_t  p_27, int64_t  p_28, const int32_t  p_29)
{ 
    int16_t l_34 = 1L;
    int32_t l_42 = 0L;
    int32_t l_44[2][1];
    int32_t l_46 = 0L;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_44[i][j] = 0L;
    }
    g_35[1][1] = (safe_add_func_uint16_t_u_u(6UL, l_34));
    if ((((p_28 , (safe_add_func_int16_t_s_s(((l_34 & g_17) | 0L), p_28))) != g_12) >= 8UL))
    { 
        return g_18;
    }
    else
    { 
        int16_t l_40 = 0x3E62L;
        int64_t l_43 = 0xCD4EE3B919D6B80FLL;
        uint16_t l_55 = 1UL;
        l_46 = ((safe_sub_func_int64_t_s_s((l_40 , (g_45 &= (l_44[1][0] = (!((((((((((((l_42 = 0xA58390A3L) & 7L) , 1UL) , 0xC5L) | p_29) == 65535UL) ^ g_18) ^ g_17) | l_43) || g_35[1][1]) || g_35[1][1]) == l_34))))), 0x691CFE0C2DF100F8LL)) || g_12);
        l_42 = ((((safe_sub_func_uint16_t_u_u(g_35[1][0], (safe_add_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s(p_29, 0)), (safe_div_func_uint8_t_u_u(((l_55 >= l_55) >= p_28), g_8)))))) , l_43) || 0xB6068BE3L) != g_8);
        g_56 |= l_42;
    }
    return p_28;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_35[i][j], "g_35[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_98[i], "g_98[i]", print_hash_value);

    }
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_133[i][j], "g_133[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_156, "g_156", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_199[i], "g_199[i]", print_hash_value);

    }
    transparent_crc(g_209, "g_209", print_hash_value);
    transparent_crc(g_210, "g_210", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    transparent_crc(g_214, "g_214", print_hash_value);
    transparent_crc(g_219, "g_219", print_hash_value);
    transparent_crc(g_222, "g_222", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_226[i][j], "g_226[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_255, "g_255", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_281[i], "g_281[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
